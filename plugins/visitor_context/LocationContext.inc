<?php

/**
 * @file
 * Provides a visitor context plugin for user location.
 */

class LocationContext extends PersonalizeContextBase {

  /**
   * Implements PersonalizeContextInterface::create().
   */
  public static function create(PersonalizeAgentInterface $agent = NULL, $selected_context = array()) {
    return new self($agent, $selected_context);
  }

  /**
   * Implements PersonalizeContextInterface::getOptions().
   */
  public static function getOptions() {
    $options = array();
    $options['country'] = array(
      'name' => t('Country'),
      'group' => 'Location',
      'cache_type' => 'session',
    );

    $options['city'] = array(
      'name' => t('City'),
      'group' => 'Location',
      'cache_type' => 'session',
    );

    return $options;
  }

  /**
   * Implements PersonalizeContextInterface::getPossibleValues().
   */
  public function getPossibleValues($limit = FALSE) {
    $possible_values = array();
    $options = $this->getOptions();

    // @TODO: refactor it.
    foreach ($options as $name => $info) {
      switch ($name) {
        case 'country':
          $browser_contexts_options = _personalize_location_location_contexts_options();
          $possible_values[$name] = array(
            'friendly name' => t('Location: Country'),
            'value type' => 'predefined',
            'values' => $browser_contexts_options,
          );
          break;

        case 'city':
          $possible_values[$name] = array(
            'friendly name' => t('Location: City'),
            'value type' => 'string',
          );
          break;
      }
    }

    if ($limit) {
      $possible_values = array_intersect_key($possible_values, array_flip($this->selectedContext));
    }

    return $possible_values;
  }
}