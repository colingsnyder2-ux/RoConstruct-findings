// roc 2009-06 006221a0  unit: RBX::RootInstance  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006221a0
//
// 006221a0  6aff                 push -1
// 006221a2  68991c8700           push 0x871c99
// 006221a7  64a100000000         mov eax, dword ptr fs:[0]
// 006221ad  50                   push eax
// 006221ae  64892500000000       mov dword ptr fs:[0], esp
// 006221b5  51                   push ecx
// 006221b6  56                   push esi
// 006221b7  57                   push edi
// 006221b8  8bf9                 mov edi, ecx
// 006221ba  897c2408             mov dword ptr [esp + 8], edi
// 006221be  8b7720               mov esi, dword ptr [edi + 0x20]
// 006221c1  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006221c9  85f6                 test esi, esi
// 006221cb  742a                 je 0x6221f7
// 006221cd  8d4604               lea eax, [esi + 4]
// 006221d0  83c9ff               or ecx, 0xffffffff
// 006221d3  f00fc108             lock xadd dword ptr [eax], ecx
// 006221d7  751e                 jne 0x6221f7
// 006221d9  8b16                 mov edx, dword ptr [esi]
// 006221db  8b4204               mov eax, dword ptr [edx + 4]
// 006221de  8bce                 mov ecx, esi
// 006221e0  ffd0                 call eax
// 006221e2  8d4e08               lea ecx, [esi + 8]
// 006221e5  83caff               or edx, 0xffffffff
// 006221e8  f00fc111             lock xadd dword ptr [ecx], edx
// 006221ec  7509                 jne 0x6221f7
// 006221ee  8b06                 mov eax, dword ptr [esi]
// 006221f0  8b5008               mov edx, dword ptr [eax + 8]
// 006221f3  8bce                 mov ecx, esi
// 006221f5  ffd2                 call edx
// 006221f7  8bcf                 mov ecx, edi
// 006221f9  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00622201  ff15c4e48900         call dword ptr [0x89e4c4]
// 00622207  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062220b  5f                   pop edi
// 0062220c  5e                   pop esi
// 0062220d  64890d00000000       mov dword ptr fs:[0], ecx
// 00622214  83c410               add esp, 0x10
// 00622217  c3                   ret 
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
