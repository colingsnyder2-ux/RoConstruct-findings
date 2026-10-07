// roc 2009-06 00593ec0  unit: seg_00590000  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00593ec0
//
// 00593ec0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00593ec4  8a01                 mov al, byte ptr [ecx]
// 00593ec6  3c41                 cmp al, 0x41
// 00593ec8  7245                 jb 0x593f0f
// 00593eca  3c7a                 cmp al, 0x7a
// 00593ecc  7741                 ja 0x593f0f
// 00593ece  3c5a                 cmp al, 0x5a
// 00593ed0  7604                 jbe 0x593ed6
// 00593ed2  3c61                 cmp al, 0x61
// 00593ed4  7239                 jb 0x593f0f
// 00593ed6  8a4101               mov al, byte ptr [ecx + 1]
// 00593ed9  3c41                 cmp al, 0x41
// 00593edb  7232                 jb 0x593f0f
// 00593edd  3c7a                 cmp al, 0x7a
// 00593edf  772e                 ja 0x593f0f
// 00593ee1  3c5a                 cmp al, 0x5a
// 00593ee3  7604                 jbe 0x593ee9
// 00593ee5  3c61                 cmp al, 0x61
// 00593ee7  7226                 jb 0x593f0f
// 00593ee9  8a4102               mov al, byte ptr [ecx + 2]
// 00593eec  3c41                 cmp al, 0x41
// 00593eee  721f                 jb 0x593f0f
// 00593ef0  3c7a                 cmp al, 0x7a
// 00593ef2  771b                 ja 0x593f0f
// 00593ef4  3c5a                 cmp al, 0x5a
// 00593ef6  7604                 jbe 0x593efc
// 00593ef8  3c61                 cmp al, 0x61
// 00593efa  7213                 jb 0x593f0f
// 00593efc  8a4103               mov al, byte ptr [ecx + 3]
// 00593eff  3c41                 cmp al, 0x41
// 00593f01  720c                 jb 0x593f0f
// 00593f03  3c7a                 cmp al, 0x7a
// 00593f05  7708                 ja 0x593f0f
// 00593f07  3c5a                 cmp al, 0x5a
// 00593f09  7611                 jbe 0x593f1c
// 00593f0b  3c61                 cmp al, 0x61
// 00593f0d  730d                 jae 0x593f1c
// 00593f0f  c7442408b8208d00     mov dword ptr [esp + 8], 0x8d20b8
// 00593f17  e954a3ffff           jmp 0x58e270
// 00593f1c  c3                   ret 
// library libpng-1.2.6/pngrutil.c (function _png_check_chunk_name)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrutil.c
