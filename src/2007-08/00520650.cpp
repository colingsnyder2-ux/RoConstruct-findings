// from server: 100% by auto
// roc 2007-08 00520650  unit: seg_00520000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00520650
//
// 00520650  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00520654  0fb601               movzx eax, byte ptr [ecx]
// 00520657  0fb65101             movzx edx, byte ptr [ecx + 1]
// 0052065b  c1e008               shl eax, 8
// 0052065e  03c2                 add eax, edx
// 00520660  0fb65102             movzx edx, byte ptr [ecx + 2]
// 00520664  0fb64903             movzx ecx, byte ptr [ecx + 3]
// 00520668  c1e008               shl eax, 8
// 0052066b  03c2                 add eax, edx
// 0052066d  c1e008               shl eax, 8
// 00520670  03c1                 add eax, ecx
// 00520672  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_get_uint_32)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
