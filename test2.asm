           @e001
           @[sc6zT.dmp]
    TZ = e310
    ��ַ = 4
    
    fcb f0
    ldx #11
    ldaa #0011
    staa 8d
    clra
    clrb
    clr 0083

 a2:   bcc aa1
    psha
    ldaa 83
    adda 6f
    staa 83
    adcb 8f
    pula
    adca 8e
 aa1:   rora
    rorb
    ror 0083
    ror 00b8
    ror 008c
    dec 008d
��ַ1:    rts
    bne ��ַ1
    rts
    jsr TZ
