// roc 2009-06 006c7bf0  unit: seg_006c0000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c7bf0
//
// 006c7bf0  8b4804               mov ecx, dword ptr [eax + 4]
// 006c7bf3  83790806             cmp dword ptr [ecx + 8], 6
// 006c7bf7  7528                 jne 0x6c7c21
// 006c7bf9  56                   push esi
// 006c7bfa  8b31                 mov esi, dword ptr [ecx]
// 006c7bfc  807e0600             cmp byte ptr [esi + 6], 0
// 006c7c00  5e                   pop esi
// 006c7c01  751e                 jne 0x6c7c21
// 006c7c03  3b4214               cmp eax, dword ptr [edx + 0x14]
// 006c7c06  7506                 jne 0x6c7c0e
// 006c7c08  8b5218               mov edx, dword ptr [edx + 0x18]
// 006c7c0b  89500c               mov dword ptr [eax + 0xc], edx
// 006c7c0e  8b09                 mov ecx, dword ptr [ecx]
// 006c7c10  8b400c               mov eax, dword ptr [eax + 0xc]
// 006c7c13  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 006c7c16  2b410c               sub eax, dword ptr [ecx + 0xc]
// 006c7c19  c1f802               sar eax, 2
// 006c7c1c  83e801               sub eax, 1
// 006c7c1f  7904                 jns 0x6c7c25
// 006c7c21  83c8ff               or eax, 0xffffffff
// 006c7c24  c3                   ret 
// 006c7c25  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 006c7c28  85c9                 test ecx, ecx
// 006c7c2a  7404                 je 0x6c7c30
// 006c7c2c  8b0481               mov eax, dword ptr [ecx + eax*4]
// 006c7c2f  c3                   ret 
// 006c7c30  33c0                 xor eax, eax
// 006c7c32  c3                   ret 
// library lua-5.1.4/ldebug.c (function _currentline)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
