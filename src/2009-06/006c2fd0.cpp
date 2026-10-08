// from server: 100% by auto
// roc 2009-06 006c2fd0  unit: lua_exception  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c2fd0
//
// 006c2fd0  2b4620               sub eax, dword ptr [esi + 0x20]
// 006c2fd3  57                   push edi
// 006c2fd4  6aff                 push -1
// 006c2fd6  6a01                 push 1
// 006c2fd8  56                   push esi
// 006c2fd9  8bf8                 mov edi, eax
// 006c2fdb  e810feffff           call 0x6c2df0
// 006c2fe0  8b4614               mov eax, dword ptr [esi + 0x14]
// 006c2fe3  8b4804               mov ecx, dword ptr [eax + 4]
// 006c2fe6  8b11                 mov edx, dword ptr [ecx]
// 006c2fe8  83c40c               add esp, 0xc
// 006c2feb  807a0600             cmp byte ptr [edx + 6], 0
// 006c2fef  7529                 jne 0x6c301a
// 006c2ff1  f6463802             test byte ptr [esi + 0x38], 2
// 006c2ff5  7423                 je 0x6c301a
// 006c2ff7  8b4614               mov eax, dword ptr [esi + 0x14]
// 006c2ffa  8b4814               mov ecx, dword ptr [eax + 0x14]
// 006c2ffd  8d51ff               lea edx, [ecx - 1]
// 006c3000  895014               mov dword ptr [eax + 0x14], edx
// 006c3003  85c9                 test ecx, ecx
// 006c3005  7413                 je 0x6c301a
// 006c3007  6aff                 push -1
// 006c3009  6a04                 push 4
// 006c300b  56                   push esi
// 006c300c  e8dffdffff           call 0x6c2df0
// 006c3011  83c40c               add esp, 0xc
// 006c3014  f6463802             test byte ptr [esi + 0x38], 2
// 006c3018  75dd                 jne 0x6c2ff7
// 006c301a  8b4620               mov eax, dword ptr [esi + 0x20]
// 006c301d  03c7                 add eax, edi
// 006c301f  5f                   pop edi
// 006c3020  c3                   ret 
// library lua-5.1.4/ldo.c (function _callrethooks)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
