// roc 2008-06 00443c60  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00443c60
//
// 00443c60  53                   push ebx
// 00443c61  55                   push ebp
// 00443c62  8b2d90288000         mov ebp, dword ptr [0x802890]
// 00443c68  56                   push esi
// 00443c69  57                   push edi
// 00443c6a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00443c6e  8bf1                 mov esi, ecx
// 00443c70  c70700000000         mov dword ptr [edi], 0
// 00443c76  85f6                 test esi, esi
// 00443c78  740e                 je 0x443c88
// 00443c7a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00443c7e  39460c               cmp dword ptr [esi + 0xc], eax
// 00443c81  7705                 ja 0x443c88
// 00443c83  3b4610               cmp eax, dword ptr [esi + 0x10]
// 00443c86  7606                 jbe 0x443c8e
// 00443c88  ffd5                 call ebp
// 00443c8a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00443c8e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00443c92  8b0e                 mov ecx, dword ptr [esi]
// 00443c94  890f                 mov dword ptr [edi], ecx
// 00443c96  894704               mov dword ptr [edi + 4], eax
// 00443c99  395e0c               cmp dword ptr [esi + 0xc], ebx
// 00443c9c  7705                 ja 0x443ca3
// 00443c9e  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 00443ca1  7606                 jbe 0x443ca9
// 00443ca3  ffd5                 call ebp
// 00443ca5  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00443ca9  8b07                 mov eax, dword ptr [edi]
// 00443cab  8b0e                 mov ecx, dword ptr [esi]
// 00443cad  85c0                 test eax, eax
// 00443caf  7404                 je 0x443cb5
// 00443cb1  3bc1                 cmp eax, ecx
// 00443cb3  7402                 je 0x443cb7
// 00443cb5  ffd5                 call ebp
// 00443cb7  8b4704               mov eax, dword ptr [edi + 4]
// 00443cba  3bc3                 cmp eax, ebx
// 00443cbc  7426                 je 0x443ce4
// 00443cbe  8b5610               mov edx, dword ptr [esi + 0x10]
// 00443cc1  50                   push eax
// 00443cc2  52                   push edx
// 00443cc3  53                   push ebx
// 00443cc4  e847fdffff           call 0x443a10
// 00443cc9  8b5610               mov edx, dword ptr [esi + 0x10]
// 00443ccc  8bd8                 mov ebx, eax
// 00443cce  8b442420             mov eax, dword ptr [esp + 0x20]
// 00443cd2  50                   push eax
// 00443cd3  8d4e08               lea ecx, [esi + 8]
// 00443cd6  51                   push ecx
// 00443cd7  52                   push edx
// 00443cd8  53                   push ebx
// 00443cd9  e882fdffff           call 0x443a60
// 00443cde  83c41c               add esp, 0x1c
// 00443ce1  895e10               mov dword ptr [esi + 0x10], ebx
// 00443ce4  8bc7                 mov eax, edi
// 00443ce6  5f                   pop edi
// 00443ce7  5e                   pop esi
// 00443ce8  5d                   pop ebp
// 00443ce9  5b                   pop ebx
// 00443cea  c21400               ret 0x14
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?erase@?$vector@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@QAE?AV?$_Vector_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@V?$_Vector_const_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/SerializerV2.cpp
