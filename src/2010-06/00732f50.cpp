// roc 2010-06 00732f50  unit: lua_exception  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00732f50
//
// 00732f50  8b4804               mov ecx, dword ptr [eax + 4]
// 00732f53  83790806             cmp dword ptr [ecx + 8], 6
// 00732f57  7528                 jne 0x732f81
// 00732f59  56                   push esi
// 00732f5a  8b31                 mov esi, dword ptr [ecx]
// 00732f5c  807e0600             cmp byte ptr [esi + 6], 0
// 00732f60  5e                   pop esi
// 00732f61  751e                 jne 0x732f81
// 00732f63  3b4214               cmp eax, dword ptr [edx + 0x14]
// 00732f66  7506                 jne 0x732f6e
// 00732f68  8b5218               mov edx, dword ptr [edx + 0x18]
// 00732f6b  89500c               mov dword ptr [eax + 0xc], edx
// 00732f6e  8b09                 mov ecx, dword ptr [ecx]
// 00732f70  8b400c               mov eax, dword ptr [eax + 0xc]
// 00732f73  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 00732f76  2b410c               sub eax, dword ptr [ecx + 0xc]
// 00732f79  c1f802               sar eax, 2
// 00732f7c  83e801               sub eax, 1
// 00732f7f  7904                 jns 0x732f85
// 00732f81  83c8ff               or eax, 0xffffffff
// 00732f84  c3                   ret 
// 00732f85  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 00732f88  85c9                 test ecx, ecx
// 00732f8a  7404                 je 0x732f90
// 00732f8c  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00732f8f  c3                   ret 
// 00732f90  33c0                 xor eax, eax
// 00732f92  c3                   ret 
// library lua-5.1.4/ldebug.c (function _currentline)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
