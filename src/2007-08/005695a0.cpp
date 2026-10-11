// roc 2007-08 005695a0  unit: RBX::ModelInstance  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005695a0
//
// 005695a0  6aff                 push -1
// 005695a2  68397a7500           push 0x757a39
// 005695a7  64a100000000         mov eax, dword ptr fs:[0]
// 005695ad  50                   push eax
// 005695ae  64892500000000       mov dword ptr fs:[0], esp
// 005695b5  51                   push ecx
// 005695b6  56                   push esi
// 005695b7  57                   push edi
// 005695b8  8bf9                 mov edi, ecx
// 005695ba  897c2408             mov dword ptr [esp + 8], edi
// 005695be  8b7720               mov esi, dword ptr [edi + 0x20]
// 005695c1  85f6                 test esi, esi
// 005695c3  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005695cb  742a                 je 0x5695f7
// 005695cd  8d4604               lea eax, [esi + 4]
// 005695d0  83c9ff               or ecx, 0xffffffff
// 005695d3  f00fc108             lock xadd dword ptr [eax], ecx
// 005695d7  751e                 jne 0x5695f7
// 005695d9  8b16                 mov edx, dword ptr [esi]
// 005695db  8b4204               mov eax, dword ptr [edx + 4]
// 005695de  8bce                 mov ecx, esi
// 005695e0  ffd0                 call eax
// 005695e2  8d4e08               lea ecx, [esi + 8]
// 005695e5  83caff               or edx, 0xffffffff
// 005695e8  f00fc111             lock xadd dword ptr [ecx], edx
// 005695ec  7509                 jne 0x5695f7
// 005695ee  8b06                 mov eax, dword ptr [esi]
// 005695f0  8b5008               mov edx, dword ptr [eax + 8]
// 005695f3  8bce                 mov ecx, esi
// 005695f5  ffd2                 call edx
// 005695f7  8bcf                 mov ecx, edi
// 005695f9  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00569601  ff15ace67700         call dword ptr [0x77e6ac]
// 00569607  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056960b  5f                   pop edi
// 0056960c  5e                   pop esi
// 0056960d  64890d00000000       mov dword ptr fs:[0], ecx
// 00569614  83c410               add esp, 0x10
// 00569617  c3                   ret 
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
