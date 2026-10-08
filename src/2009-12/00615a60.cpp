// roc 2009-12 00615a60  unit: seg_00610000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00615a60
//
// 00615a60  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00615a64  0fb601               movzx eax, byte ptr [ecx]
// 00615a67  0fb65101             movzx edx, byte ptr [ecx + 1]
// 00615a6b  c1e008               shl eax, 8
// 00615a6e  03c2                 add eax, edx
// 00615a70  0fb65102             movzx edx, byte ptr [ecx + 2]
// 00615a74  0fb64903             movzx ecx, byte ptr [ecx + 3]
// 00615a78  c1e008               shl eax, 8
// 00615a7b  03c2                 add eax, edx
// 00615a7d  c1e008               shl eax, 8
// 00615a80  03c1                 add eax, ecx
// 00615a82  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_get_uint_32)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
