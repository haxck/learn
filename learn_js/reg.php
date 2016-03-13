<?php
$accounts = array('wwwdxz' ,'wwwxyz','wwwdzq' );
$result  = array();
if (isset($_GET['username'])) {
	$username = filter_var($_GET['user'],FILTER_SANITIZE_STRING)	;
	if (in_array($username,$accounts)) {
		$result['status'] = "false";
	}else{
		$result['status'] = "true";
	}
	echo json_encode($result);
}
?>