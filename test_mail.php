<?php

  $to = "ronald.mulero@u.group"; // REPLACE
  $subject = "Test mail";
  $message = "Hello! This is a simple email message.";
  $from = "noreply@u.group";
  $headers = "From:" . $from;
  mail($to,$subject,$message,$headers);
  echo "Mail Sent.";
