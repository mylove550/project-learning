
; You may customize this and other start-up templates; 
; The location of this template is 
org 100h

mov ax,3000h
mov ds,ax 
mov cx,03h
 mov bx,4000h  
mov [4000h],80h
mov [4001h],32h
mov [4002h],83h
mov dh,00h   
mov dl,00h       
l2:mov al,[bx]
rol al,01h
jc neg
inc dh
jmp l1
neg:inc dl
l1:inc bx
loop l2
mov [1000h],dh
mov [1001h],dl
hlt




