// roc 2007-03 00525ce0  unit: seg_00520000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00525ce0
//
// 00525ce0  8b8148010000         mov eax, dword ptr [ecx + 0x148]
// 00525ce6  ba01000000           mov edx, 1
// 00525ceb  3991e4000000         cmp dword ptr [ecx + 0xe4], edx
// 00525cf1  7f27                 jg 0x525d1a
// 00525cf3  56                   push esi
// 00525cf4  8bb1e0000000         mov esi, dword ptr [ecx + 0xe0]
// 00525cfa  8b89e8000000         mov ecx, dword ptr [ecx + 0xe8]
// 00525d00  2bf2                 sub esi, edx
// 00525d02  397008               cmp dword ptr [eax + 8], esi
// 00525d05  5e                   pop esi
// 00525d06  730f                 jae 0x525d17
// 00525d08  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00525d0b  33c9                 xor ecx, ecx
// 00525d0d  895014               mov dword ptr [eax + 0x14], edx
// 00525d10  89480c               mov dword ptr [eax + 0xc], ecx
// 00525d13  894810               mov dword ptr [eax + 0x10], ecx
// 00525d16  c3                   ret 
// 00525d17  8b5148               mov edx, dword ptr [ecx + 0x48]
// 00525d1a  33c9                 xor ecx, ecx
// 00525d1c  895014               mov dword ptr [eax + 0x14], edx
// 00525d1f  89480c               mov dword ptr [eax + 0xc], ecx
// 00525d22  894810               mov dword ptr [eax + 0x10], ecx
// 00525d25  c3                   ret 
// library jpeg-6b/jccoefct.c (function _start_iMCU_row)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccoefct.c
