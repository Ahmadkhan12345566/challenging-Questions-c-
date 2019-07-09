<?php

/*

var a=2;
setTimeout(function(){
    a=5
}, 3000);

setTimeout(function(){
    alert(a)
}, 5000);



5 will display in alert in 5 sec
*/


if(checkstringContainsDigits("test")){
echo "yes";
}
else{
echo "no";
}
$fruits_list = array('Orange',  'Apple', ' Banana', 'Cherry', ' Banana');
///print_r(remove_duplicates($fruits_list));
$array= array(1,2,3,4,5,6,7);
//print_r(rotate($array,7,3));
//print_r(removeStr("asif",'a'));




//Q:How do you check if a string contains only digits?
Function checkstringContainsDigits($data){
    for($i=0;$i<strlen($data);$i++){
        if($data[$i] == '0' || $data[$i]=='1' || $data[$i]== '2' || $data[$i]== '3' || $data[$i] == '4' || $data[$i]=='5' ||$data[$i]=='6' ||$data[$i]=='7' ||$data[$i]=='8' ||$data[$i]=='9') {
            return true;
        }

   }
    return false;
}

//Q:How do you remove duplicates from an array in place?
Function remove_duplicates($data){

    $index=0;
    $found=false;
    $result=array();
   for($i=0;$i<sizeof($data);$i++){
       for($j=0;$j<sizeof($result);$j++){
           if($result[$j]==$data[$i]){
            $found=true;
           }
       }
       if ($found==false) {
           $result[$index]=$data[$i];
           $index++;
       }
   }

   return $result;
}

//Q: Rotate an array of n elements to the right by k steps.
Function rotate($data, $length, $steps){
$index=0;
     $result=array();
    for($i=$steps+1;$i<$length;$i++){
        $result[$index]=$data[$i];
        $index++;
    }
    for ($i=0;$i<=$steps;$i++){
        $result[$index]=$data[$i];
        $index++;
    }
    return $result;
}

// Q: Write a method which will remove any given character from a String?
function removeStr($string, $toRemove)
{
    $result="";
    for($i=0;$i<strlen($string);$i++){
        if ($string[$i]!= $toRemove){
            $result=$result.$string[$i];
        }
    }

    return $result;
}

?>


