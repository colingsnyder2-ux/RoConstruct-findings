// roc 2008-06 0052c2a0  unit: seg_00520000  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052c2a0
//
// 0052c2a0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0052c2a4  8a01                 mov al, byte ptr [ecx]
// 0052c2a6  3c41                 cmp al, 0x41
// 0052c2a8  7245                 jb 0x52c2ef
// 0052c2aa  3c7a                 cmp al, 0x7a
// 0052c2ac  7741                 ja 0x52c2ef
// 0052c2ae  3c5a                 cmp al, 0x5a
// 0052c2b0  7604                 jbe 0x52c2b6
// 0052c2b2  3c61                 cmp al, 0x61
// 0052c2b4  7239                 jb 0x52c2ef
// 0052c2b6  8a4101               mov al, byte ptr [ecx + 1]
// 0052c2b9  3c41                 cmp al, 0x41
// 0052c2bb  7232                 jb 0x52c2ef
// 0052c2bd  3c7a                 cmp al, 0x7a
// 0052c2bf  772e                 ja 0x52c2ef
// 0052c2c1  3c5a                 cmp al, 0x5a
// 0052c2c3  7604                 jbe 0x52c2c9
// 0052c2c5  3c61                 cmp al, 0x61
// 0052c2c7  7226                 jb 0x52c2ef
// 0052c2c9  8a4102               mov al, byte ptr [ecx + 2]
// 0052c2cc  3c41                 cmp al, 0x41
// 0052c2ce  721f                 jb 0x52c2ef
// 0052c2d0  3c7a                 cmp al, 0x7a
// 0052c2d2  771b                 ja 0x52c2ef
// 0052c2d4  3c5a                 cmp al, 0x5a
// 0052c2d6  7604                 jbe 0x52c2dc
// 0052c2d8  3c61                 cmp al, 0x61
// 0052c2da  7213                 jb 0x52c2ef
// 0052c2dc  8a4103               mov al, byte ptr [ecx + 3]
// 0052c2df  3c41                 cmp al, 0x41
// 0052c2e1  720c                 jb 0x52c2ef
// 0052c2e3  3c7a                 cmp al, 0x7a
// 0052c2e5  7708                 ja 0x52c2ef
// 0052c2e7  3c5a                 cmp al, 0x5a
// 0052c2e9  7611                 jbe 0x52c2fc
// 0052c2eb  3c61                 cmp al, 0x61
// 0052c2ed  730d                 jae 0x52c2fc
// 0052c2ef  c7442408c0bc8200     mov dword ptr [esp + 8], 0x82bcc0
// 0052c2f7  e9a4d7ffff           jmp 0x529aa0
// 0052c2fc  c3                   ret 
// library libpng-1.2.6/pngrutil.c (function _png_check_chunk_name)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrutil.c
