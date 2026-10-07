// roc 2007-08 00520ad0  unit: seg_00520000  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00520ad0
//
// 00520ad0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00520ad4  8a01                 mov al, byte ptr [ecx]
// 00520ad6  3c41                 cmp al, 0x41
// 00520ad8  7245                 jb 0x520b1f
// 00520ada  3c7a                 cmp al, 0x7a
// 00520adc  7741                 ja 0x520b1f
// 00520ade  3c5a                 cmp al, 0x5a
// 00520ae0  7604                 jbe 0x520ae6
// 00520ae2  3c61                 cmp al, 0x61
// 00520ae4  7239                 jb 0x520b1f
// 00520ae6  8a4101               mov al, byte ptr [ecx + 1]
// 00520ae9  3c41                 cmp al, 0x41
// 00520aeb  7232                 jb 0x520b1f
// 00520aed  3c7a                 cmp al, 0x7a
// 00520aef  772e                 ja 0x520b1f
// 00520af1  3c5a                 cmp al, 0x5a
// 00520af3  7604                 jbe 0x520af9
// 00520af5  3c61                 cmp al, 0x61
// 00520af7  7226                 jb 0x520b1f
// 00520af9  8a4102               mov al, byte ptr [ecx + 2]
// 00520afc  3c41                 cmp al, 0x41
// 00520afe  721f                 jb 0x520b1f
// 00520b00  3c7a                 cmp al, 0x7a
// 00520b02  771b                 ja 0x520b1f
// 00520b04  3c5a                 cmp al, 0x5a
// 00520b06  7604                 jbe 0x520b0c
// 00520b08  3c61                 cmp al, 0x61
// 00520b0a  7213                 jb 0x520b1f
// 00520b0c  8a4103               mov al, byte ptr [ecx + 3]
// 00520b0f  3c41                 cmp al, 0x41
// 00520b11  720c                 jb 0x520b1f
// 00520b13  3c7a                 cmp al, 0x7a
// 00520b15  7708                 ja 0x520b1f
// 00520b17  3c5a                 cmp al, 0x5a
// 00520b19  7611                 jbe 0x520b2c
// 00520b1b  3c61                 cmp al, 0x61
// 00520b1d  730d                 jae 0x520b2c
// 00520b1f  c7442408f4367a00     mov dword ptr [esp + 8], 0x7a36f4
// 00520b27  e9c4deffff           jmp 0x51e9f0
// 00520b2c  c3                   ret 
// library libpng-1.2.6/pngrutil.c (function _png_check_chunk_name)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrutil.c
