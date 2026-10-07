// roc 2011-06 0056eb10  unit: seg_00560000  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0056eb10
//
// 0056eb10  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056eb14  8a01                 mov al, byte ptr [ecx]
// 0056eb16  3c41                 cmp al, 0x41
// 0056eb18  7245                 jb 0x56eb5f
// 0056eb1a  3c7a                 cmp al, 0x7a
// 0056eb1c  7741                 ja 0x56eb5f
// 0056eb1e  3c5a                 cmp al, 0x5a
// 0056eb20  7604                 jbe 0x56eb26
// 0056eb22  3c61                 cmp al, 0x61
// 0056eb24  7239                 jb 0x56eb5f
// 0056eb26  8a4101               mov al, byte ptr [ecx + 1]
// 0056eb29  3c41                 cmp al, 0x41
// 0056eb2b  7232                 jb 0x56eb5f
// 0056eb2d  3c7a                 cmp al, 0x7a
// 0056eb2f  772e                 ja 0x56eb5f
// 0056eb31  3c5a                 cmp al, 0x5a
// 0056eb33  7604                 jbe 0x56eb39
// 0056eb35  3c61                 cmp al, 0x61
// 0056eb37  7226                 jb 0x56eb5f
// 0056eb39  8a4102               mov al, byte ptr [ecx + 2]
// 0056eb3c  3c41                 cmp al, 0x41
// 0056eb3e  721f                 jb 0x56eb5f
// 0056eb40  3c7a                 cmp al, 0x7a
// 0056eb42  771b                 ja 0x56eb5f
// 0056eb44  3c5a                 cmp al, 0x5a
// 0056eb46  7604                 jbe 0x56eb4c
// 0056eb48  3c61                 cmp al, 0x61
// 0056eb4a  7213                 jb 0x56eb5f
// 0056eb4c  8a4103               mov al, byte ptr [ecx + 3]
// 0056eb4f  3c41                 cmp al, 0x41
// 0056eb51  720c                 jb 0x56eb5f
// 0056eb53  3c7a                 cmp al, 0x7a
// 0056eb55  7708                 ja 0x56eb5f
// 0056eb57  3c5a                 cmp al, 0x5a
// 0056eb59  7611                 jbe 0x56eb6c
// 0056eb5b  3c61                 cmp al, 0x61
// 0056eb5d  730d                 jae 0x56eb6c
// 0056eb5f  c7442408ac63a800     mov dword ptr [esp + 8], 0xa863ac
// 0056eb67  e9d428ffff           jmp 0x561440
// 0056eb6c  c3                   ret 
// library libpng-1.2.6/pngrutil.c (function _png_check_chunk_name)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrutil.c
