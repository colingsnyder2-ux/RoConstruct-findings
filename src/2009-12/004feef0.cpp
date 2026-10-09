// roc 2009-12 004feef0  unit: RBX::Network::Player::W4BuildPermission::?$EnumDesc  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004feef0
//
// 004feef0  83ec08               sub esp, 8
// 004feef3  56                   push esi
// 004feef4  8bf1                 mov esi, ecx
// 004feef6  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004feef9  57                   push edi
// 004feefa  85c9                 test ecx, ecx
// 004feefc  7504                 jne 0x4fef02
// 004feefe  33c0                 xor eax, eax
// 004fef00  eb08                 jmp 0x4fef0a
// 004fef02  8b4614               mov eax, dword ptr [esi + 0x14]
// 004fef05  2bc1                 sub eax, ecx
// 004fef07  c1f802               sar eax, 2
// 004fef0a  8b7e10               mov edi, dword ptr [esi + 0x10]
// 004fef0d  8bd7                 mov edx, edi
// 004fef0f  2bd1                 sub edx, ecx
// 004fef11  c1fa02               sar edx, 2
// 004fef14  3bd0                 cmp edx, eax
// 004fef16  7331                 jae 0x4fef49
// 004fef18  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004fef1c  c644240800           mov byte ptr [esp + 8], 0
// 004fef21  8b442408             mov eax, dword ptr [esp + 8]
// 004fef25  50                   push eax
// 004fef26  8b442418             mov eax, dword ptr [esp + 0x18]
// 004fef2a  51                   push ecx
// 004fef2b  8d5608               lea edx, [esi + 8]
// 004fef2e  52                   push edx
// 004fef2f  50                   push eax
// 004fef30  6a01                 push 1
// 004fef32  57                   push edi
// 004fef33  e8f85df4ff           call 0x444d30
// 004fef38  83c418               add esp, 0x18
// 004fef3b  83c704               add edi, 4
// 004fef3e  897e10               mov dword ptr [esi + 0x10], edi
// 004fef41  5f                   pop edi
// 004fef42  5e                   pop esi
// 004fef43  83c408               add esp, 8
// 004fef46  c20400               ret 4
// 004fef49  3bcf                 cmp ecx, edi
// 004fef4b  7606                 jbe 0x4fef53
// 004fef4d  ff1560b79800         call dword ptr [0x98b760]
// 004fef53  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004fef57  8b06                 mov eax, dword ptr [esi]
// 004fef59  51                   push ecx
// 004fef5a  57                   push edi
// 004fef5b  50                   push eax
// 004fef5c  8d542414             lea edx, [esp + 0x14]
// 004fef60  52                   push edx
// 004fef61  8bce                 mov ecx, esi
// 004fef63  e818f1ffff           call 0x4fe080
// 004fef68  5f                   pop edi
// 004fef69  5e                   pop esi
// 004fef6a  83c408               add esp, 8
// 004fef6d  c20400               ret 4
// library openrbx-client/App\v8datamodel\Enums.cpp (function ?push_back@?$vector@W4PartType@Part@RBX@@V?$allocator@W4PartType@Part@RBX@@@std@@@std@@QAEXABW4PartType@Part@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Enums.cpp
