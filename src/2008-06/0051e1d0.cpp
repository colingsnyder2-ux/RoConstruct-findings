// roc 2008-06 0051e1d0  unit: seg_00510000  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051e1d0
//
// 0051e1d0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0051e1d4  8b542408             mov edx, dword ptr [esp + 8]
// 0051e1d8  85c9                 test ecx, ecx
// 0051e1da  7504                 jne 0x51e1e0
// 0051e1dc  85d2                 test edx, edx
// 0051e1de  7430                 je 0x51e210
// 0051e1e0  83b92002000000       cmp dword ptr [ecx + 0x220], 0
// 0051e1e7  7e27                 jle 0x51e210
// 0051e1e9  8b8120020000         mov eax, dword ptr [ecx + 0x220]
// 0051e1ef  8b8924020000         mov ecx, dword ptr [ecx + 0x224]
// 0051e1f5  56                   push esi
// 0051e1f6  8d3480               lea esi, [eax + eax*4]
// 0051e1f9  8d4c0efb             lea ecx, [esi + ecx - 5]
// 0051e1fd  5e                   pop esi
// 0051e1fe  85c0                 test eax, eax
// 0051e200  740e                 je 0x51e210
// 0051e202  8b12                 mov edx, dword ptr [edx]
// 0051e204  3b11                 cmp edx, dword ptr [ecx]
// 0051e206  740b                 je 0x51e213
// 0051e208  48                   dec eax
// 0051e209  83e905               sub ecx, 5
// 0051e20c  85c0                 test eax, eax
// 0051e20e  75f4                 jne 0x51e204
// 0051e210  33c0                 xor eax, eax
// 0051e212  c3                   ret 
// 0051e213  0fb64104             movzx eax, byte ptr [ecx + 4]
// 0051e217  c3                   ret 
// library libpng-1.2.5/png.c (function _png_handle_as_unknown)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 png.c
