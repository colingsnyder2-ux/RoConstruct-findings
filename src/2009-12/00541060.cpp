// roc 2009-12 00541060  unit: RBX::Network::Replicator::EventInvocationItem  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00541060
//
// 00541060  83ec08               sub esp, 8
// 00541063  56                   push esi
// 00541064  8bf1                 mov esi, ecx
// 00541066  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00541069  57                   push edi
// 0054106a  85c9                 test ecx, ecx
// 0054106c  7504                 jne 0x541072
// 0054106e  33c0                 xor eax, eax
// 00541070  eb08                 jmp 0x54107a
// 00541072  8b4614               mov eax, dword ptr [esi + 0x14]
// 00541075  2bc1                 sub eax, ecx
// 00541077  c1f802               sar eax, 2
// 0054107a  8b7e10               mov edi, dword ptr [esi + 0x10]
// 0054107d  8bd7                 mov edx, edi
// 0054107f  2bd1                 sub edx, ecx
// 00541081  c1fa02               sar edx, 2
// 00541084  3bd0                 cmp edx, eax
// 00541086  7331                 jae 0x5410b9
// 00541088  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0054108c  c644240800           mov byte ptr [esp + 8], 0
// 00541091  8b442408             mov eax, dword ptr [esp + 8]
// 00541095  50                   push eax
// 00541096  8b442418             mov eax, dword ptr [esp + 0x18]
// 0054109a  51                   push ecx
// 0054109b  8d5608               lea edx, [esi + 8]
// 0054109e  52                   push edx
// 0054109f  50                   push eax
// 005410a0  6a01                 push 1
// 005410a2  57                   push edi
// 005410a3  e8a888fbff           call 0x4f9950
// 005410a8  83c418               add esp, 0x18
// 005410ab  83c704               add edi, 4
// 005410ae  897e10               mov dword ptr [esi + 0x10], edi
// 005410b1  5f                   pop edi
// 005410b2  5e                   pop esi
// 005410b3  83c408               add esp, 8
// 005410b6  c20400               ret 4
// 005410b9  3bcf                 cmp ecx, edi
// 005410bb  7606                 jbe 0x5410c3
// 005410bd  ff1560b79800         call dword ptr [0x98b760]
// 005410c3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005410c7  8b06                 mov eax, dword ptr [esi]
// 005410c9  51                   push ecx
// 005410ca  57                   push edi
// 005410cb  50                   push eax
// 005410cc  8d542414             lea edx, [esp + 0x14]
// 005410d0  52                   push edx
// 005410d1  8bce                 mov ecx, esi
// 005410d3  e878f5ffff           call 0x540650
// 005410d8  5f                   pop edi
// 005410d9  5e                   pop esi
// 005410da  83c408               add esp, 8
// 005410dd  c20400               ret 4
// library openrbx-client/App\v8datamodel\Enums.cpp (function ?push_back@?$vector@W4PartType@Part@RBX@@V?$allocator@W4PartType@Part@RBX@@@std@@@std@@QAEXABW4PartType@Part@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Enums.cpp
