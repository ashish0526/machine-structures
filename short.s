      .data

 n1:     .word 8
 n2:    .word 4

         .text

 main:   la $s0,n1
         lw $s0, 0($s0)
         la $s1 , n2
         lw $s1,0($s1)
         add $t1,$s0,$zero
         add $t1,$s1,$zero
         add $t2,$t0,$t1
         add $t3,$t1,$t0
         add $t4,$t3,$t2
         add $t5,$t4,$t3
         add $t6,$t5,$t4
         add $t7,$t6,$t5