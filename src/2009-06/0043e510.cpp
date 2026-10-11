// roc 2009-06 0043e510  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0043e510
//
// 0043e510  53                   push ebx
// 0043e511  55                   push ebp
// 0043e512  8b2dace98900         mov ebp, dword ptr [0x89e9ac]
// 0043e518  56                   push esi
// 0043e519  57                   push edi
// 0043e51a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0043e51e  8bf1                 mov esi, ecx
// 0043e520  c70700000000         mov dword ptr [edi], 0
// 0043e526  85f6                 test esi, esi
// 0043e528  740e                 je 0x43e538
// 0043e52a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0043e52e  39460c               cmp dword ptr [esi + 0xc], eax
// 0043e531  7705                 ja 0x43e538
// 0043e533  3b4610               cmp eax, dword ptr [esi + 0x10]
// 0043e536  7606                 jbe 0x43e53e
// 0043e538  ffd5                 call ebp
// 0043e53a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0043e53e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0043e542  8b0e                 mov ecx, dword ptr [esi]
// 0043e544  890f                 mov dword ptr [edi], ecx
// 0043e546  894704               mov dword ptr [edi + 4], eax
// 0043e549  395e0c               cmp dword ptr [esi + 0xc], ebx
// 0043e54c  7705                 ja 0x43e553
// 0043e54e  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 0043e551  7606                 jbe 0x43e559
// 0043e553  ffd5                 call ebp
// 0043e555  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0043e559  8b07                 mov eax, dword ptr [edi]
// 0043e55b  8b0e                 mov ecx, dword ptr [esi]
// 0043e55d  85c0                 test eax, eax
// 0043e55f  7404                 je 0x43e565
// 0043e561  3bc1                 cmp eax, ecx
// 0043e563  7402                 je 0x43e567
// 0043e565  ffd5                 call ebp
// 0043e567  8b4704               mov eax, dword ptr [edi + 4]
// 0043e56a  3bc3                 cmp eax, ebx
// 0043e56c  7426                 je 0x43e594
// 0043e56e  8b5610               mov edx, dword ptr [esi + 0x10]
// 0043e571  50                   push eax
// 0043e572  52                   push edx
// 0043e573  53                   push ebx
// 0043e574  e897faffff           call 0x43e010
// 0043e579  8b5610               mov edx, dword ptr [esi + 0x10]
// 0043e57c  8bd8                 mov ebx, eax
// 0043e57e  8b442420             mov eax, dword ptr [esp + 0x20]
// 0043e582  50                   push eax
// 0043e583  8d4e08               lea ecx, [esi + 8]
// 0043e586  51                   push ecx
// 0043e587  52                   push edx
// 0043e588  53                   push ebx
// 0043e589  e852fdffff           call 0x43e2e0
// 0043e58e  83c41c               add esp, 0x1c
// 0043e591  895e10               mov dword ptr [esi + 0x10], ebx
// 0043e594  8bc7                 mov eax, edi
// 0043e596  5f                   pop edi
// 0043e597  5e                   pop esi
// 0043e598  5d                   pop ebp
// 0043e599  5b                   pop ebx
// 0043e59a  c21400               ret 0x14
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?erase@?$vector@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@QAE?AV?$_Vector_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@V?$_Vector_const_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
