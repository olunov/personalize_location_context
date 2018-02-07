INTRODUCTION
------------
This module provides personalize contexts based on location data loaded
Smart IP module. The available location properties are:
 * Country
 * City

Based on the options for each of these contexts it is possible to use
them to define when personalized content will be shown. Learn more about
personalize in README.txt and at project page of personalize module.

REQUIREMENTS
------------
This module requires the following module(s):
 * Personalize (https://www.drupal.org/project/personalize)
 * Smart IP (https://www.drupal.org/project/smart_ip)


INSTALLATION
------------
 * Install as you would normally install a contributed Drupal module. See:
   https://drupal.org/documentation/install/modules-themes/modules-7
   for further information.
 * Go to admin/config/people/smart_ip, configure loading location data
   and save configuration. For more details see README.txt in Smart IP
   module.
 * Go to admin/config/content/personalize/location and specify countries
   for managing personalization. For example you can check only few
   countries only (the only you are going to use in context, for example
   France, Germany, Italy, etc.). You can leave them by default, but in
   this case whole list with all of available options will be shown on page
   for managing personalization.
 * Manage personalization on admin/structure/personalize. For more details
   see README.txt in personalize module.

 MAINTAINERS
-----------
Current maintainers:
 * Oleksandr Lunov (alunyov) - https://www.drupal.org/user/103985
