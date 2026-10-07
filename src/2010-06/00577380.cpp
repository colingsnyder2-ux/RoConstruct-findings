// roc 2010-06 00577380  unit: seg_00570000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00577380
//
// 00577380  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00577384  0fb601               movzx eax, byte ptr [ecx]
// 00577387  0fb65101             movzx edx, byte ptr [ecx + 1]
// 0057738b  c1e008               shl eax, 8
// 0057738e  03c2                 add eax, edx
// 00577390  0fb65102             movzx edx, byte ptr [ecx + 2]
// 00577394  0fb64903             movzx ecx, byte ptr [ecx + 3]
// 00577398  c1e008               shl eax, 8
// 0057739b  03c2                 add eax, edx
// 0057739d  c1e008               shl eax, 8
// 005773a0  03c1                 add eax, ecx
// 005773a2  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_get_uint_32)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
