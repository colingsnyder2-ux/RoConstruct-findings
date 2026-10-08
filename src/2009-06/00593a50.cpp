// from server: 100% by auto
// roc 2009-06 00593a50  unit: seg_00590000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00593a50
//
// 00593a50  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00593a54  0fb601               movzx eax, byte ptr [ecx]
// 00593a57  0fb65101             movzx edx, byte ptr [ecx + 1]
// 00593a5b  c1e008               shl eax, 8
// 00593a5e  03c2                 add eax, edx
// 00593a60  0fb65102             movzx edx, byte ptr [ecx + 2]
// 00593a64  0fb64903             movzx ecx, byte ptr [ecx + 3]
// 00593a68  c1e008               shl eax, 8
// 00593a6b  03c2                 add eax, edx
// 00593a6d  c1e008               shl eax, 8
// 00593a70  03c1                 add eax, ecx
// 00593a72  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_get_uint_32)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
