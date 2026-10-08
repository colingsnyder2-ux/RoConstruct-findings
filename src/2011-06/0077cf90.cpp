// from server: 100% by auto
// roc 2011-06 0077cf90  unit: seg_00770000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077cf90
//
// 0077cf90  8b4804               mov ecx, dword ptr [eax + 4]
// 0077cf93  83790806             cmp dword ptr [ecx + 8], 6
// 0077cf97  7528                 jne 0x77cfc1
// 0077cf99  56                   push esi
// 0077cf9a  8b31                 mov esi, dword ptr [ecx]
// 0077cf9c  807e0600             cmp byte ptr [esi + 6], 0
// 0077cfa0  5e                   pop esi
// 0077cfa1  751e                 jne 0x77cfc1
// 0077cfa3  3b4214               cmp eax, dword ptr [edx + 0x14]
// 0077cfa6  7506                 jne 0x77cfae
// 0077cfa8  8b5218               mov edx, dword ptr [edx + 0x18]
// 0077cfab  89500c               mov dword ptr [eax + 0xc], edx
// 0077cfae  8b09                 mov ecx, dword ptr [ecx]
// 0077cfb0  8b400c               mov eax, dword ptr [eax + 0xc]
// 0077cfb3  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 0077cfb6  2b410c               sub eax, dword ptr [ecx + 0xc]
// 0077cfb9  c1f802               sar eax, 2
// 0077cfbc  83e801               sub eax, 1
// 0077cfbf  7904                 jns 0x77cfc5
// 0077cfc1  83c8ff               or eax, 0xffffffff
// 0077cfc4  c3                   ret 
// 0077cfc5  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 0077cfc8  85c9                 test ecx, ecx
// 0077cfca  7404                 je 0x77cfd0
// 0077cfcc  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0077cfcf  c3                   ret 
// 0077cfd0  33c0                 xor eax, eax
// 0077cfd2  c3                   ret 
// library lua-5.1.4/ldebug.c (function _currentline)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
