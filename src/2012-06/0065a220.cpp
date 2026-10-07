// roc 2012-06 0065a220  unit: seg_00650000  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0065a220
//
// 0065a220  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0065a224  8a01                 mov al, byte ptr [ecx]
// 0065a226  3c41                 cmp al, 0x41
// 0065a228  7245                 jb 0x65a26f
// 0065a22a  3c7a                 cmp al, 0x7a
// 0065a22c  7741                 ja 0x65a26f
// 0065a22e  3c5a                 cmp al, 0x5a
// 0065a230  7604                 jbe 0x65a236
// 0065a232  3c61                 cmp al, 0x61
// 0065a234  7239                 jb 0x65a26f
// 0065a236  8a4101               mov al, byte ptr [ecx + 1]
// 0065a239  3c41                 cmp al, 0x41
// 0065a23b  7232                 jb 0x65a26f
// 0065a23d  3c7a                 cmp al, 0x7a
// 0065a23f  772e                 ja 0x65a26f
// 0065a241  3c5a                 cmp al, 0x5a
// 0065a243  7604                 jbe 0x65a249
// 0065a245  3c61                 cmp al, 0x61
// 0065a247  7226                 jb 0x65a26f
// 0065a249  8a4102               mov al, byte ptr [ecx + 2]
// 0065a24c  3c41                 cmp al, 0x41
// 0065a24e  721f                 jb 0x65a26f
// 0065a250  3c7a                 cmp al, 0x7a
// 0065a252  771b                 ja 0x65a26f
// 0065a254  3c5a                 cmp al, 0x5a
// 0065a256  7604                 jbe 0x65a25c
// 0065a258  3c61                 cmp al, 0x61
// 0065a25a  7213                 jb 0x65a26f
// 0065a25c  8a4103               mov al, byte ptr [ecx + 3]
// 0065a25f  3c41                 cmp al, 0x41
// 0065a261  720c                 jb 0x65a26f
// 0065a263  3c7a                 cmp al, 0x7a
// 0065a265  7708                 ja 0x65a26f
// 0065a267  3c5a                 cmp al, 0x5a
// 0065a269  7611                 jbe 0x65a27c
// 0065a26b  3c61                 cmp al, 0x61
// 0065a26d  730d                 jae 0x65a27c
// 0065a26f  c7442408fca1b800     mov dword ptr [esp + 8], 0xb8a1fc
// 0065a277  e94440ffff           jmp 0x64e2c0
// 0065a27c  c3                   ret 
// library libpng-1.2.6/pngrutil.c (function _png_check_chunk_name)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrutil.c
