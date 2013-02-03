<?php

echo '<table cellspacing="0">
	<tr>
    	<td class="container-inline"><strong>';
			print t('Search');
			echo '</strong>'; 
			print drupal_render($form['sprmaal']['antal_medarbejdere']); 
			echo '</td>
        <td class="container-inline"><strong>';
				print t('Category');
				echo'</strong>'; 
				print drupal_render($form['sprmaal']['alder_bygninger']);
				echo '</td>
        <td>';
				print drupal_render($form['calculate']);
				echo '</td>
    </tr>
</table>';
print drupal_render($form);
?>
