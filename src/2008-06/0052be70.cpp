// roc 2008-06 0052be70  unit: seg_00520000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052be70
//
// 0052be70  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0052be74  0fb601               movzx eax, byte ptr [ecx]
// 0052be77  0fb65101             movzx edx, byte ptr [ecx + 1]
// 0052be7b  c1e008               shl eax, 8
// 0052be7e  03c2                 add eax, edx
// 0052be80  0fb65102             movzx edx, byte ptr [ecx + 2]
// 0052be84  0fb64903             movzx ecx, byte ptr [ecx + 3]
// 0052be88  c1e008               shl eax, 8
// 0052be8b  03c2                 add eax, edx
// 0052be8d  c1e008               shl eax, 8
// 0052be90  03c1                 add eax, ecx
// 0052be92  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_get_uint_32)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
