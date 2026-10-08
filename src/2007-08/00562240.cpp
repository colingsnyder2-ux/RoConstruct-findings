// roc 2007-08 00562240  unit: RBX::DuplicateSelectionVerb  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00562240
//
// 00562240  64a100000000         mov eax, dword ptr fs:[0]
// 00562246  6aff                 push -1
// 00562248  68d8bc7500           push 0x75bcd8
// 0056224d  50                   push eax
// 0056224e  64892500000000       mov dword ptr fs:[0], esp
// 00562255  83ec08               sub esp, 8
// 00562258  56                   push esi
// 00562259  8bf1                 mov esi, ecx
// 0056225b  837e0400             cmp dword ptr [esi + 4], 0
// 0056225f  0f8580000000         jne 0x5622e5
// 00562265  8b06                 mov eax, dword ptr [esi]
// 00562267  57                   push edi
// 00562268  50                   push eax
// 00562269  e862faffff           call 0x561cd0
// 0056226e  50                   push eax
// 0056226f  8d4c2410             lea ecx, [esp + 0x10]
// 00562273  51                   push ecx
// 00562274  e8f7b3f3ff           call 0x49d670
// 00562279  83c40c               add esp, 0xc
// 0056227c  8b10                 mov edx, dword ptr [eax]
// 0056227e  83c004               add eax, 4
// 00562281  50                   push eax
// 00562282  8d4e08               lea ecx, [esi + 8]
// 00562285  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0056228d  895604               mov dword ptr [esi + 4], edx
// 00562290  e8cb07eaff           call 0x402a60
// 00562295  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00562299  85ff                 test edi, edi
// 0056229b  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005622a3  742a                 je 0x5622cf
// 005622a5  8d4704               lea eax, [edi + 4]
// 005622a8  83c9ff               or ecx, 0xffffffff
// 005622ab  f00fc108             lock xadd dword ptr [eax], ecx
// 005622af  751e                 jne 0x5622cf
// 005622b1  8b17                 mov edx, dword ptr [edi]
// 005622b3  8b4204               mov eax, dword ptr [edx + 4]
// 005622b6  8bcf                 mov ecx, edi
// 005622b8  ffd0                 call eax
// 005622ba  8d4f08               lea ecx, [edi + 8]
// 005622bd  83caff               or edx, 0xffffffff
// 005622c0  f00fc111             lock xadd dword ptr [ecx], edx
// 005622c4  7509                 jne 0x5622cf
// 005622c6  8b07                 mov eax, dword ptr [edi]
// 005622c8  8b5008               mov edx, dword ptr [eax + 8]
// 005622cb  8bcf                 mov ecx, edi
// 005622cd  ffd2                 call edx
// 005622cf  8b4604               mov eax, dword ptr [esi + 4]
// 005622d2  5f                   pop edi
// 005622d3  5e                   pop esi
// 005622d4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005622d8  64890d00000000       mov dword ptr fs:[0], ecx
// 005622df  83c414               add esp, 0x14
// 005622e2  c20400               ret 4
// 005622e5  8b4604               mov eax, dword ptr [esi + 4]
// 005622e8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005622ec  5e                   pop esi
// 005622ed  64890d00000000       mov dword ptr fs:[0], ecx
// 005622f4  83c414               add esp, 0x14
// 005622f7  c20400               ret 4
// library rbxgs/tool\ToolsArrow.cpp (function ?createService@?$ServiceClient@VSelection@RBX@@@RBX@@ABEPAVSelection@2@_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
