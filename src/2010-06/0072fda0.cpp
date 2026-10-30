// from server: 100% by auto
// roc 2010-06 0072fda0  unit: lua_exception  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0072fda0
//
// 0072fda0  2b4620               sub eax, dword ptr [esi + 0x20]
// 0072fda3  57                   push edi
// 0072fda4  6aff                 push -1
// 0072fda6  6a01                 push 1
// 0072fda8  56                   push esi
// 0072fda9  8bf8                 mov edi, eax
// 0072fdab  e810feffff           call 0x72fbc0
// 0072fdb0  8b4614               mov eax, dword ptr [esi + 0x14]
// 0072fdb3  8b4804               mov ecx, dword ptr [eax + 4]
// 0072fdb6  8b11                 mov edx, dword ptr [ecx]
// 0072fdb8  83c40c               add esp, 0xc
// 0072fdbb  807a0600             cmp byte ptr [edx + 6], 0
// 0072fdbf  7529                 jne 0x72fdea
// 0072fdc1  f6463802             test byte ptr [esi + 0x38], 2
// 0072fdc5  7423                 je 0x72fdea
// 0072fdc7  8b4614               mov eax, dword ptr [esi + 0x14]
// 0072fdca  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0072fdcd  8d51ff               lea edx, [ecx - 1]
// 0072fdd0  895014               mov dword ptr [eax + 0x14], edx
// 0072fdd3  85c9                 test ecx, ecx
// 0072fdd5  7413                 je 0x72fdea
// 0072fdd7  6aff                 push -1
// 0072fdd9  6a04                 push 4
// 0072fddb  56                   push esi
// 0072fddc  e8dffdffff           call 0x72fbc0
// 0072fde1  83c40c               add esp, 0xc
// 0072fde4  f6463802             test byte ptr [esi + 0x38], 2
// 0072fde8  75dd                 jne 0x72fdc7
// 0072fdea  8b4620               mov eax, dword ptr [esi + 0x20]
// 0072fded  03c7                 add eax, edi
// 0072fdef  5f                   pop edi
// 0072fdf0  c3                   ret 
// library lua-5.1.4/ldo.c (function _callrethooks)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
