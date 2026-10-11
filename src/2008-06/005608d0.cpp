// roc 2008-06 005608d0  unit: RBX::VContentProvider::?$DescribedNonCreatable  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005608d0
//
// 005608d0  53                   push ebx
// 005608d1  55                   push ebp
// 005608d2  8b2d90288000         mov ebp, dword ptr [0x802890]
// 005608d8  56                   push esi
// 005608d9  57                   push edi
// 005608da  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005608de  8bf1                 mov esi, ecx
// 005608e0  c70700000000         mov dword ptr [edi], 0
// 005608e6  85f6                 test esi, esi
// 005608e8  740e                 je 0x5608f8
// 005608ea  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005608ee  39460c               cmp dword ptr [esi + 0xc], eax
// 005608f1  7705                 ja 0x5608f8
// 005608f3  3b4610               cmp eax, dword ptr [esi + 0x10]
// 005608f6  7606                 jbe 0x5608fe
// 005608f8  ffd5                 call ebp
// 005608fa  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005608fe  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00560902  8b0e                 mov ecx, dword ptr [esi]
// 00560904  890f                 mov dword ptr [edi], ecx
// 00560906  894704               mov dword ptr [edi + 4], eax
// 00560909  395e0c               cmp dword ptr [esi + 0xc], ebx
// 0056090c  7705                 ja 0x560913
// 0056090e  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 00560911  7606                 jbe 0x560919
// 00560913  ffd5                 call ebp
// 00560915  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00560919  8b07                 mov eax, dword ptr [edi]
// 0056091b  8b0e                 mov ecx, dword ptr [esi]
// 0056091d  85c0                 test eax, eax
// 0056091f  7404                 je 0x560925
// 00560921  3bc1                 cmp eax, ecx
// 00560923  7402                 je 0x560927
// 00560925  ffd5                 call ebp
// 00560927  8b4704               mov eax, dword ptr [edi + 4]
// 0056092a  3bc3                 cmp eax, ebx
// 0056092c  7426                 je 0x560954
// 0056092e  8b5610               mov edx, dword ptr [esi + 0x10]
// 00560931  50                   push eax
// 00560932  52                   push edx
// 00560933  53                   push ebx
// 00560934  e877e2ffff           call 0x55ebb0
// 00560939  8b5610               mov edx, dword ptr [esi + 0x10]
// 0056093c  8bd8                 mov ebx, eax
// 0056093e  8b442420             mov eax, dword ptr [esp + 0x20]
// 00560942  50                   push eax
// 00560943  8d4e08               lea ecx, [esi + 8]
// 00560946  51                   push ecx
// 00560947  52                   push edx
// 00560948  53                   push ebx
// 00560949  e862ecffff           call 0x55f5b0
// 0056094e  83c41c               add esp, 0x1c
// 00560951  895e10               mov dword ptr [esi + 0x10], ebx
// 00560954  8bc7                 mov eax, edi
// 00560956  5f                   pop edi
// 00560957  5e                   pop esi
// 00560958  5d                   pop ebp
// 00560959  5b                   pop ebx
// 0056095a  c21400               ret 0x14
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?erase@?$vector@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@QAE?AV?$_Vector_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@V?$_Vector_const_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
