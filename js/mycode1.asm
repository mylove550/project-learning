
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h

    mov ds,ax
    mov al,[2000h]
    and al,09h   
             mov cl,04h
    ror al,cl
    mov bh,0ah
    mul bh
    and bl, 0fh
    and al,bl
    mov [2001h],al
    
hlt



