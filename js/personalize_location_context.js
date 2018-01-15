(function ($) {

    Drupal.personalize = Drupal.personalize || {};
    Drupal.personalize.visitor_context = Drupal.personalize.visitor_context || {};
    Drupal.personalize.visitor_context.location_context = {
        'getContext': function(enabled) {
            var context_values = Drupal.settings.personalize_location_context;
            if (typeof context_values === 'undefined') {
                return {};
            }
            return context_values;
        }
    };

})(jQuery);