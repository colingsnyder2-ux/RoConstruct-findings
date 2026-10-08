// roc 2007-08 0056b4b0  unit: ArchiveBinder  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056b4b0
//
// 0056b4b0  6aff                 push -1
// 0056b4b2  6838467500           push 0x754638
// 0056b4b7  64a100000000         mov eax, dword ptr fs:[0]
// 0056b4bd  50                   push eax
// 0056b4be  64892500000000       mov dword ptr fs:[0], esp
// 0056b4c5  83ec0c               sub esp, 0xc
// 0056b4c8  53                   push ebx
// 0056b4c9  56                   push esi
// 0056b4ca  57                   push edi
// 0056b4cb  8bf9                 mov edi, ecx
// 0056b4cd  897c240c             mov dword ptr [esp + 0xc], edi
// 0056b4d1  33db                 xor ebx, ebx
// 0056b4d3  8d4f20               lea ecx, [edi + 0x20]
// 0056b4d6  895c2420             mov dword ptr [esp + 0x20], ebx
// 0056b4da  e8a1b91b00           call 0x726e80
// 0056b4df  8b4718               mov eax, dword ptr [edi + 0x18]
// 0056b4e2  8b08                 mov ecx, dword ptr [eax]
// 0056b4e4  8d7714               lea esi, [edi + 0x14]
// 0056b4e7  50                   push eax
// 0056b4e8  56                   push esi
// 0056b4e9  51                   push ecx
// 0056b4ea  56                   push esi
// 0056b4eb  8d442420             lea eax, [esp + 0x20]
// 0056b4ef  50                   push eax
// 0056b4f0  8bce                 mov ecx, esi
// 0056b4f2  e8e9efffff           call 0x56a4e0
// 0056b4f7  8b4604               mov eax, dword ptr [esi + 4]
// 0056b4fa  50                   push eax
// 0056b4fb  e862470c00           call 0x62fc62
// 0056b500  895e04               mov dword ptr [esi + 4], ebx
// 0056b503  895e08               mov dword ptr [esi + 8], ebx
// 0056b506  8b4708               mov eax, dword ptr [edi + 8]
// 0056b509  8d7704               lea esi, [edi + 4]
// 0056b50c  83c404               add esp, 4
// 0056b50f  3bc3                 cmp eax, ebx
// 0056b511  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0056b519  741c                 je 0x56b537
// 0056b51b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056b51f  8b5608               mov edx, dword ptr [esi + 8]
// 0056b522  51                   push ecx
// 0056b523  56                   push esi
// 0056b524  52                   push edx
// 0056b525  50                   push eax
// 0056b526  e8257fedff           call 0x443450
// 0056b52b  8b4604               mov eax, dword ptr [esi + 4]
// 0056b52e  50                   push eax
// 0056b52f  e82e470c00           call 0x62fc62
// 0056b534  83c414               add esp, 0x14
// 0056b537  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0056b53b  895e04               mov dword ptr [esi + 4], ebx
// 0056b53e  895e08               mov dword ptr [esi + 8], ebx
// 0056b541  895e0c               mov dword ptr [esi + 0xc], ebx
// 0056b544  5f                   pop edi
// 0056b545  5e                   pop esi
// 0056b546  5b                   pop ebx
// 0056b547  64890d00000000       mov dword ptr fs:[0], ecx
// 0056b54e  83c418               add esp, 0x18
// 0056b551  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??1ArchiveBinder@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
