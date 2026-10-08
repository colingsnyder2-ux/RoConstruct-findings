// from server: 100% by auto
// roc 2010-06 005777f0  unit: seg_00570000  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005777f0
//
// 005777f0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005777f4  8a01                 mov al, byte ptr [ecx]
// 005777f6  3c41                 cmp al, 0x41
// 005777f8  7245                 jb 0x57783f
// 005777fa  3c7a                 cmp al, 0x7a
// 005777fc  7741                 ja 0x57783f
// 005777fe  3c5a                 cmp al, 0x5a
// 00577800  7604                 jbe 0x577806
// 00577802  3c61                 cmp al, 0x61
// 00577804  7239                 jb 0x57783f
// 00577806  8a4101               mov al, byte ptr [ecx + 1]
// 00577809  3c41                 cmp al, 0x41
// 0057780b  7232                 jb 0x57783f
// 0057780d  3c7a                 cmp al, 0x7a
// 0057780f  772e                 ja 0x57783f
// 00577811  3c5a                 cmp al, 0x5a
// 00577813  7604                 jbe 0x577819
// 00577815  3c61                 cmp al, 0x61
// 00577817  7226                 jb 0x57783f
// 00577819  8a4102               mov al, byte ptr [ecx + 2]
// 0057781c  3c41                 cmp al, 0x41
// 0057781e  721f                 jb 0x57783f
// 00577820  3c7a                 cmp al, 0x7a
// 00577822  771b                 ja 0x57783f
// 00577824  3c5a                 cmp al, 0x5a
// 00577826  7604                 jbe 0x57782c
// 00577828  3c61                 cmp al, 0x61
// 0057782a  7213                 jb 0x57783f
// 0057782c  8a4103               mov al, byte ptr [ecx + 3]
// 0057782f  3c41                 cmp al, 0x41
// 00577831  720c                 jb 0x57783f
// 00577833  3c7a                 cmp al, 0x7a
// 00577835  7708                 ja 0x57783f
// 00577837  3c5a                 cmp al, 0x5a
// 00577839  7611                 jbe 0x57784c
// 0057783b  3c61                 cmp al, 0x61
// 0057783d  730d                 jae 0x57784c
// 0057783f  c7442408c06ca200     mov dword ptr [esp + 8], 0xa26cc0
// 00577847  e974a3ffff           jmp 0x571bc0
// 0057784c  c3                   ret 
// library libpng-1.2.6/pngrutil.c (function _png_check_chunk_name)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrutil.c
