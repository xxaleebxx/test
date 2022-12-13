#! /usr/bin/gawk -f
BEGIN{
         OFS=","
         FS=","
         small=0
         sum=0
         retail=0
}
$4 > 0 {sum += 1}
$4 <= 4 {small += 1}
$2 == "retail"{retail += 1}

END{

        print "Avg small orders = " (sum / small)
        print "Count retail = " retail
}      
