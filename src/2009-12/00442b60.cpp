// roc 2009-12 00442b60  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00442b60
//
// 00442b60  53                   push ebx
// 00442b61  55                   push ebp
// 00442b62  8b2d60b79800         mov ebp, dword ptr [0x98b760]
// 00442b68  56                   push esi
// 00442b69  57                   push edi
// 00442b6a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00442b6e  8bf1                 mov esi, ecx
// 00442b70  c70700000000         mov dword ptr [edi], 0
// 00442b76  85f6                 test esi, esi
// 00442b78  740e                 je 0x442b88
// 00442b7a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00442b7e  39460c               cmp dword ptr [esi + 0xc], eax
// 00442b81  7705                 ja 0x442b88
// 00442b83  3b4610               cmp eax, dword ptr [esi + 0x10]
// 00442b86  7606                 jbe 0x442b8e
// 00442b88  ffd5                 call ebp
// 00442b8a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00442b8e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00442b92  8b0e                 mov ecx, dword ptr [esi]
// 00442b94  890f                 mov dword ptr [edi], ecx
// 00442b96  894704               mov dword ptr [edi + 4], eax
// 00442b99  395e0c               cmp dword ptr [esi + 0xc], ebx
// 00442b9c  7705                 ja 0x442ba3
// 00442b9e  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 00442ba1  7606                 jbe 0x442ba9
// 00442ba3  ffd5                 call ebp
// 00442ba5  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00442ba9  8b07                 mov eax, dword ptr [edi]
// 00442bab  8b0e                 mov ecx, dword ptr [esi]
// 00442bad  85c0                 test eax, eax
// 00442baf  7404                 je 0x442bb5
// 00442bb1  3bc1                 cmp eax, ecx
// 00442bb3  7402                 je 0x442bb7
// 00442bb5  ffd5                 call ebp
// 00442bb7  8b4704               mov eax, dword ptr [edi + 4]
// 00442bba  3bc3                 cmp eax, ebx
// 00442bbc  7426                 je 0x442be4
// 00442bbe  8b5610               mov edx, dword ptr [esi + 0x10]
// 00442bc1  50                   push eax
// 00442bc2  52                   push edx
// 00442bc3  53                   push ebx
// 00442bc4  e897faffff           call 0x442660
// 00442bc9  8b5610               mov edx, dword ptr [esi + 0x10]
// 00442bcc  8bd8                 mov ebx, eax
// 00442bce  8b442420             mov eax, dword ptr [esp + 0x20]
// 00442bd2  50                   push eax
// 00442bd3  8d4e08               lea ecx, [esi + 8]
// 00442bd6  51                   push ecx
// 00442bd7  52                   push edx
// 00442bd8  53                   push ebx
// 00442bd9  e852fdffff           call 0x442930
// 00442bde  83c41c               add esp, 0x1c
// 00442be1  895e10               mov dword ptr [esi + 0x10], ebx
// 00442be4  8bc7                 mov eax, edi
// 00442be6  5f                   pop edi
// 00442be7  5e                   pop esi
// 00442be8  5d                   pop ebp
// 00442be9  5b                   pop ebx
// 00442bea  c21400               ret 0x14
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?erase@?$vector@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@QAE?AV?$_Vector_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@V?$_Vector_const_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
