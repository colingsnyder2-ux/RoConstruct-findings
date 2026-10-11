// roc 2009-12 004772c0  unit: RBX::Reflection::VValue::$$CBV?$vector::V?$shared_ptr::?$holder  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004772c0
//
// 004772c0  6aff                 push -1
// 004772c2  68598c9300           push 0x938c59
// 004772c7  64a100000000         mov eax, dword ptr fs:[0]
// 004772cd  50                   push eax
// 004772ce  64892500000000       mov dword ptr fs:[0], esp
// 004772d5  51                   push ecx
// 004772d6  56                   push esi
// 004772d7  57                   push edi
// 004772d8  8bf9                 mov edi, ecx
// 004772da  897c2408             mov dword ptr [esp + 8], edi
// 004772de  8b7720               mov esi, dword ptr [edi + 0x20]
// 004772e1  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004772e9  85f6                 test esi, esi
// 004772eb  742a                 je 0x477317
// 004772ed  8d4604               lea eax, [esi + 4]
// 004772f0  83c9ff               or ecx, 0xffffffff
// 004772f3  f00fc108             lock xadd dword ptr [eax], ecx
// 004772f7  751e                 jne 0x477317
// 004772f9  8b16                 mov edx, dword ptr [esi]
// 004772fb  8b4204               mov eax, dword ptr [edx + 4]
// 004772fe  8bce                 mov ecx, esi
// 00477300  ffd0                 call eax
// 00477302  8d4e08               lea ecx, [esi + 8]
// 00477305  83caff               or edx, 0xffffffff
// 00477308  f00fc111             lock xadd dword ptr [ecx], edx
// 0047730c  7509                 jne 0x477317
// 0047730e  8b06                 mov eax, dword ptr [esi]
// 00477310  8b5008               mov edx, dword ptr [eax + 8]
// 00477313  8bce                 mov ecx, esi
// 00477315  ffd2                 call edx
// 00477317  8bcf                 mov ecx, edi
// 00477319  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00477321  ff15e4b69800         call dword ptr [0x98b6e4]
// 00477327  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0047732b  5f                   pop edi
// 0047732c  5e                   pop esi
// 0047732d  64890d00000000       mov dword ptr fs:[0], ecx
// 00477334  83c410               add esp, 0x10
// 00477337  c3                   ret 
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
