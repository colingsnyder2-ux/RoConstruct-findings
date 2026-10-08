// roc 2007-08 005623c0  unit: RBX::DuplicateSelectionVerb  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005623c0
//
// 005623c0  64a100000000         mov eax, dword ptr fs:[0]
// 005623c6  6aff                 push -1
// 005623c8  68d8bc7500           push 0x75bcd8
// 005623cd  50                   push eax
// 005623ce  64892500000000       mov dword ptr fs:[0], esp
// 005623d5  83ec08               sub esp, 8
// 005623d8  56                   push esi
// 005623d9  8bf1                 mov esi, ecx
// 005623db  837e0400             cmp dword ptr [esi + 4], 0
// 005623df  0f8580000000         jne 0x562465
// 005623e5  8b06                 mov eax, dword ptr [esi]
// 005623e7  57                   push edi
// 005623e8  50                   push eax
// 005623e9  e8d2f6ffff           call 0x561ac0
// 005623ee  50                   push eax
// 005623ef  8d4c2410             lea ecx, [esp + 0x10]
// 005623f3  51                   push ecx
// 005623f4  e8e7250800           call 0x5e49e0
// 005623f9  83c40c               add esp, 0xc
// 005623fc  8b10                 mov edx, dword ptr [eax]
// 005623fe  83c004               add eax, 4
// 00562401  50                   push eax
// 00562402  8d4e08               lea ecx, [esi + 8]
// 00562405  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0056240d  895604               mov dword ptr [esi + 4], edx
// 00562410  e84b06eaff           call 0x402a60
// 00562415  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00562419  85ff                 test edi, edi
// 0056241b  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00562423  742a                 je 0x56244f
// 00562425  8d4704               lea eax, [edi + 4]
// 00562428  83c9ff               or ecx, 0xffffffff
// 0056242b  f00fc108             lock xadd dword ptr [eax], ecx
// 0056242f  751e                 jne 0x56244f
// 00562431  8b17                 mov edx, dword ptr [edi]
// 00562433  8b4204               mov eax, dword ptr [edx + 4]
// 00562436  8bcf                 mov ecx, edi
// 00562438  ffd0                 call eax
// 0056243a  8d4f08               lea ecx, [edi + 8]
// 0056243d  83caff               or edx, 0xffffffff
// 00562440  f00fc111             lock xadd dword ptr [ecx], edx
// 00562444  7509                 jne 0x56244f
// 00562446  8b07                 mov eax, dword ptr [edi]
// 00562448  8b5008               mov edx, dword ptr [eax + 8]
// 0056244b  8bcf                 mov ecx, edi
// 0056244d  ffd2                 call edx
// 0056244f  8b4604               mov eax, dword ptr [esi + 4]
// 00562452  5f                   pop edi
// 00562453  5e                   pop esi
// 00562454  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00562458  64890d00000000       mov dword ptr fs:[0], ecx
// 0056245f  83c414               add esp, 0x14
// 00562462  c20400               ret 4
// 00562465  8b4604               mov eax, dword ptr [esi + 4]
// 00562468  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056246c  5e                   pop esi
// 0056246d  64890d00000000       mov dword ptr fs:[0], ecx
// 00562474  83c414               add esp, 0x14
// 00562477  c20400               ret 4
// library rbxgs/tool\ToolsArrow.cpp (function ?createService@?$ServiceClient@VSelection@RBX@@@RBX@@ABEPAVSelection@2@_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
