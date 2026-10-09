// roc 2010-06 004ef460  unit: RBX::Network::Replicator::EventInvocationItem  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004ef460
//
// 004ef460  83ec08               sub esp, 8
// 004ef463  56                   push esi
// 004ef464  8bf1                 mov esi, ecx
// 004ef466  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004ef469  57                   push edi
// 004ef46a  85c9                 test ecx, ecx
// 004ef46c  7504                 jne 0x4ef472
// 004ef46e  33c0                 xor eax, eax
// 004ef470  eb08                 jmp 0x4ef47a
// 004ef472  8b4614               mov eax, dword ptr [esi + 0x14]
// 004ef475  2bc1                 sub eax, ecx
// 004ef477  c1f802               sar eax, 2
// 004ef47a  8b7e10               mov edi, dword ptr [esi + 0x10]
// 004ef47d  8bd7                 mov edx, edi
// 004ef47f  2bd1                 sub edx, ecx
// 004ef481  c1fa02               sar edx, 2
// 004ef484  3bd0                 cmp edx, eax
// 004ef486  7331                 jae 0x4ef4b9
// 004ef488  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ef48c  c644240800           mov byte ptr [esp + 8], 0
// 004ef491  8b442408             mov eax, dword ptr [esp + 8]
// 004ef495  50                   push eax
// 004ef496  8b442418             mov eax, dword ptr [esp + 0x18]
// 004ef49a  51                   push ecx
// 004ef49b  8d5608               lea edx, [esi + 8]
// 004ef49e  52                   push edx
// 004ef49f  50                   push eax
// 004ef4a0  6a01                 push 1
// 004ef4a2  57                   push edi
// 004ef4a3  e81882fbff           call 0x4a76c0
// 004ef4a8  83c418               add esp, 0x18
// 004ef4ab  83c704               add edi, 4
// 004ef4ae  897e10               mov dword ptr [esi + 0x10], edi
// 004ef4b1  5f                   pop edi
// 004ef4b2  5e                   pop esi
// 004ef4b3  83c408               add esp, 8
// 004ef4b6  c20400               ret 4
// 004ef4b9  3bcf                 cmp ecx, edi
// 004ef4bb  7606                 jbe 0x4ef4c3
// 004ef4bd  ff150ca99e00         call dword ptr [0x9ea90c]
// 004ef4c3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ef4c7  8b06                 mov eax, dword ptr [esi]
// 004ef4c9  51                   push ecx
// 004ef4ca  57                   push edi
// 004ef4cb  50                   push eax
// 004ef4cc  8d542414             lea edx, [esp + 0x14]
// 004ef4d0  52                   push edx
// 004ef4d1  8bce                 mov ecx, esi
// 004ef4d3  e878f5ffff           call 0x4eea50
// 004ef4d8  5f                   pop edi
// 004ef4d9  5e                   pop esi
// 004ef4da  83c408               add esp, 8
// 004ef4dd  c20400               ret 4
// library openrbx-client/App\v8datamodel\Enums.cpp (function ?push_back@?$vector@W4PartType@Part@RBX@@V?$allocator@W4PartType@Part@RBX@@@std@@@std@@QAEXABW4PartType@Part@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Enums.cpp
