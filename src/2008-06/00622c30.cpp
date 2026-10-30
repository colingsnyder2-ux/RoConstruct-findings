// from server: 100% by auto
// roc 2008-06 00622c30  unit: lua_exception  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00622c30
//
// 00622c30  8b4804               mov ecx, dword ptr [eax + 4]
// 00622c33  83790806             cmp dword ptr [ecx + 8], 6
// 00622c37  7528                 jne 0x622c61
// 00622c39  56                   push esi
// 00622c3a  8b31                 mov esi, dword ptr [ecx]
// 00622c3c  807e0600             cmp byte ptr [esi + 6], 0
// 00622c40  5e                   pop esi
// 00622c41  751e                 jne 0x622c61
// 00622c43  3b4214               cmp eax, dword ptr [edx + 0x14]
// 00622c46  7506                 jne 0x622c4e
// 00622c48  8b5218               mov edx, dword ptr [edx + 0x18]
// 00622c4b  89500c               mov dword ptr [eax + 0xc], edx
// 00622c4e  8b09                 mov ecx, dword ptr [ecx]
// 00622c50  8b400c               mov eax, dword ptr [eax + 0xc]
// 00622c53  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 00622c56  2b410c               sub eax, dword ptr [ecx + 0xc]
// 00622c59  c1f802               sar eax, 2
// 00622c5c  83e801               sub eax, 1
// 00622c5f  7904                 jns 0x622c65
// 00622c61  83c8ff               or eax, 0xffffffff
// 00622c64  c3                   ret 
// 00622c65  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 00622c68  85c9                 test ecx, ecx
// 00622c6a  7404                 je 0x622c70
// 00622c6c  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00622c6f  c3                   ret 
// 00622c70  33c0                 xor eax, eax
// 00622c72  c3                   ret 
// library lua-5.1.4/ldebug.c (function _currentline)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
