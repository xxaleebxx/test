#! /usr/bin/gawk -f
BEGIN{
         OFS=","
         FS=","
         sum4=0
         num4=0
         inexpensive=0
}
$4 > 30000 {inexpensive +=1}
$5 == "hybrid" && $6 == 4 {
        num4 += 1
        sum4 += $4
}

END{

        print "inexpensive count = " inexpensive
        print "average = " (sum4 / num4)

}        
