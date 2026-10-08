// from server: 100% by auto
// roc 2007-08 00524d20  unit: G3D::Line  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00524d20
//
// 00524d20  8b8188010000         mov eax, dword ptr [ecx + 0x188]
// 00524d26  ba01000000           mov edx, 1
// 00524d2b  399124010000         cmp dword ptr [ecx + 0x124], edx
// 00524d31  7f2a                 jg 0x524d5d
// 00524d33  56                   push esi
// 00524d34  8bb11c010000         mov esi, dword ptr [ecx + 0x11c]
// 00524d3a  2bf2                 sub esi, edx
// 00524d3c  39b180000000         cmp dword ptr [ecx + 0x80], esi
// 00524d42  8b8928010000         mov ecx, dword ptr [ecx + 0x128]
// 00524d48  5e                   pop esi
// 00524d49  730f                 jae 0x524d5a
// 00524d4b  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00524d4e  33c9                 xor ecx, ecx
// 00524d50  89501c               mov dword ptr [eax + 0x1c], edx
// 00524d53  894814               mov dword ptr [eax + 0x14], ecx
// 00524d56  894818               mov dword ptr [eax + 0x18], ecx
// 00524d59  c3                   ret 
// 00524d5a  8b5148               mov edx, dword ptr [ecx + 0x48]
// 00524d5d  33c9                 xor ecx, ecx
// 00524d5f  89501c               mov dword ptr [eax + 0x1c], edx
// 00524d62  894814               mov dword ptr [eax + 0x14], ecx
// 00524d65  894818               mov dword ptr [eax + 0x18], ecx
// 00524d68  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _start_iMCU_row)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
