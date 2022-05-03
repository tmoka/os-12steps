    .h8300h
    .section .text
    .global _start
#   .type   _start,@function

# _startラベルの定義
_start:
        # スタックポインタの設定
        mov.l   #0xffff00,sp
        # main()の呼び出し
        jsr     @_main

1:
        bra     1b