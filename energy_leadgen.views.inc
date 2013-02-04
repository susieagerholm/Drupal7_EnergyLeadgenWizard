<?php

/**
 * Implements hook_views_data().
 */
function energy_leadgen_views_data() {
	$data = array();

	$data['energy_leadgen']['table']['group'] = t('Energitjek Leadgenerator'); 
	
	$data['energy_leadgen']['table']['base'] = array(
			'title' => t('Energitjek Leadgenerator'),
			'help' => t('Her kan du tilgaa de leads, som er blevet indsamlet via energy leadgen kontaktformularen'),
	);
	
	$data['energy_leadgen']['lead_id'] = array(
		'title' => t('Lead ID#'),
		'help' => t('Det unikke ID for dette lead'),
		'field' => array(
			'handler' => 'views_handler_field_numeric',
		),
		'sort' => array(
			'handler' => 'view_handler_sort',
		),
		'filter' => array(
			'handler' => 'views_handler_filter_numeric',
		),
	);
	
	$data['energy_leadgen']['time_submitted'] = array(
		'title' => t('Oprettet'),
		'help' => t('Tidspunktet for leadets oprettelse'),
		'field' => array(
			'handler' => 'views_handler_field_date',
		),
		'sort' => array(
			'handler' => 'view_handler_sort_date',
		),
		'filter' => array(
			'handler' => 'views_handler_filter_date',
		),
	);
	
	$data['energy_leadgen']['antal_medarbejdere'] = array(
		'title' => t('Antal medarbejdere'),
		'help' => t('Antal medarbejdere i virksomheden'),
		'field' => array(
			'handler' => 'views_handler_field_boolean',
		),
		'sort' => array(
			'handler' => 'view_handler_sort',
		),
		'filter' => array(
			'handler' => 'views_handler_filter_boolean_operator',
		),
	);
	
	$data['energy_leadgen']['alder_bygninger'] = array(
		'title' => t('Alder paa bygninger'),
		'help' => t('Alderen paa virksomhedens bygninger'),
		'field' => array(
			'handler' => 'views_handler_field_boolean',
		),
		'sort' => array(
			'handler' => 'view_handler_sort',
		),
		'filter' => array(
			'handler' => 'views_handler_filter_boolean_operator',
		),
	);
	
	$data['energy_leadgen']['udfoert_energitjek'] = array(
		'title' => t('Udført energitjek'),
		'help' => t('Er der tidligere udført energitjek i virksomheden'),
		'field' => array(
			'handler' => 'views_handler_field_boolean',
		),
		'sort' => array(
			'handler' => 'view_handler_sort',
		),
		'filter' => array(
			'handler' => 'views_handler_filter_boolean_operator',
		),
	);
	
	$data['energy_leadgen']['opsat_maaleudstyr'] = array(
		'title' => t('Opsat maaleudstyr'),
		'help' => t('Er der opsat maaleudstyr i virksomheden'),
		'field' => array(
			'handler' => 'views_handler_field_boolean',
		),
		'sort' => array(
			'handler' => 'view_handler_sort',
		),
		'filter' => array(
			'handler' => 'views_handler_filter_boolean_operator',
		),
	);
	
	$data['energy_leadgen']['foretaget_energitiltag'] = array(
		'title' => t('Foretaget energitiltag'),
		'help' => t('Er der tidligere foretaget energitiltag i virksomheden'),
		'field' => array(
			'handler' => 'views_handler_field_boolean',
		),
		'sort' => array(
			'handler' => 'view_handler_sort',
		),
		'filter' => array(
			'handler' => 'views_handler_filter_boolean_operator',
		),
	);
	$data['energy_leadgen']['navn'] = array(
		'title' => t('Navn'),
		'help' => t('Navnet paa brugeren'),
		'field' => array(
			'handler' => 'views_handler_field',
		),
		'sort' => array(
			'handler' => 'view_handler_sort',
		),
		'filter' => array(
			'handler' => 'views_handler_filter_string',
		),
	);
	$data['energy_leadgen']['stilling'] = array(
		'title' => t('Stilling'),
		'help' => t('Brugerens stillingsbeskrivelse'),
		'field' => array(
			'handler' => 'views_handler_field',
		),
		'sort' => array(
			'handler' => 'view_handler_sort',
		),
		'filter' => array(
			'handler' => 'views_handler_filter_string',
		),
	);
	$data['energy_leadgen']['virksomhed'] = array(
		'title' => t('Virksomhed'),
		'help' => t('Brugerens arbejdsplads'),
		'field' => array(
			'handler' => 'views_handler_field',
		),
		'sort' => array(
			'handler' => 'view_handler_sort',
		),
		'filter' => array(
			'handler' => 'views_handler_filter_string',
		),
	);
	$data['energy_leadgen']['branche'] = array(
		'title' => t('Branche'),
		'help' => t('Brugerens branche'),
		'field' => array(
			'handler' => 'views_handler_field',
		),
		'sort' => array(
			'handler' => 'view_handler_sort',
		),
		'filter' => array(
			'handler' => 'views_handler_filter_string',
		),
	);
	$data['energy_leadgen']['email'] = array(
		'title' => t('Email'),
		'help' => t('Brugerens email'),
		'field' => array(
			'handler' => 'views_handler_field',
		),
		'sort' => array(
			'handler' => 'view_handler_sort',
		),
		'filter' => array(
			'handler' => 'views_handler_filter_string',
		),
	);
	$data['energy_leadgen']['accept_kontakt'] = array(
		'title' => t('Accept af kontakt'),
		'help' => t('Er det ok, at vi tager kontakt omkring energitjek'),
		'field' => array(
			'handler' => 'views_handler_field_boolean',
		),
		'sort' => array(
			'handler' => 'view_handler_sort',
		),
		'filter' => array(
			'handler' => 'views_handler_filter_boolean_operator',
		),
	);
	
	return $data;
}