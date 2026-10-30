// roc 2007-03 0051f9f0  unit: seg_00510000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051f9f0
//
// 0051f9f0  8b8188010000         mov eax, dword ptr [ecx + 0x188]
// 0051f9f6  ba01000000           mov edx, 1
// 0051f9fb  399124010000         cmp dword ptr [ecx + 0x124], edx
// 0051fa01  7f2a                 jg 0x51fa2d
// 0051fa03  56                   push esi
// 0051fa04  8bb11c010000         mov esi, dword ptr [ecx + 0x11c]
// 0051fa0a  2bf2                 sub esi, edx
// 0051fa0c  39b180000000         cmp dword ptr [ecx + 0x80], esi
// 0051fa12  8b8928010000         mov ecx, dword ptr [ecx + 0x128]
// 0051fa18  5e                   pop esi
// 0051fa19  730f                 jae 0x51fa2a
// 0051fa1b  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0051fa1e  33c9                 xor ecx, ecx
// 0051fa20  89501c               mov dword ptr [eax + 0x1c], edx
// 0051fa23  894814               mov dword ptr [eax + 0x14], ecx
// 0051fa26  894818               mov dword ptr [eax + 0x18], ecx
// 0051fa29  c3                   ret 
// 0051fa2a  8b5148               mov edx, dword ptr [ecx + 0x48]
// 0051fa2d  33c9                 xor ecx, ecx
// 0051fa2f  89501c               mov dword ptr [eax + 0x1c], edx
// 0051fa32  894814               mov dword ptr [eax + 0x14], ecx
// 0051fa35  894818               mov dword ptr [eax + 0x18], ecx
// 0051fa38  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _start_iMCU_row)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
