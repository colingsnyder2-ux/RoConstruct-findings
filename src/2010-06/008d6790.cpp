// roc 2010-06 008d6790  unit: Ogre::VRbxTextureCompositorSceneManager::?$sp_counted_impl_p  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008d6790
//
// 008d6790  53                   push ebx
// 008d6791  55                   push ebp
// 008d6792  8b2d0ca99e00         mov ebp, dword ptr [0x9ea90c]
// 008d6798  56                   push esi
// 008d6799  57                   push edi
// 008d679a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008d679e  8bf1                 mov esi, ecx
// 008d67a0  c70700000000         mov dword ptr [edi], 0
// 008d67a6  85f6                 test esi, esi
// 008d67a8  740e                 je 0x8d67b8
// 008d67aa  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d67ae  39460c               cmp dword ptr [esi + 0xc], eax
// 008d67b1  7705                 ja 0x8d67b8
// 008d67b3  3b4610               cmp eax, dword ptr [esi + 0x10]
// 008d67b6  7606                 jbe 0x8d67be
// 008d67b8  ffd5                 call ebp
// 008d67ba  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d67be  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 008d67c2  8b0e                 mov ecx, dword ptr [esi]
// 008d67c4  890f                 mov dword ptr [edi], ecx
// 008d67c6  894704               mov dword ptr [edi + 4], eax
// 008d67c9  395e0c               cmp dword ptr [esi + 0xc], ebx
// 008d67cc  7705                 ja 0x8d67d3
// 008d67ce  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 008d67d1  7606                 jbe 0x8d67d9
// 008d67d3  ffd5                 call ebp
// 008d67d5  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 008d67d9  8b07                 mov eax, dword ptr [edi]
// 008d67db  8b0e                 mov ecx, dword ptr [esi]
// 008d67dd  85c0                 test eax, eax
// 008d67df  7404                 je 0x8d67e5
// 008d67e1  3bc1                 cmp eax, ecx
// 008d67e3  7402                 je 0x8d67e7
// 008d67e5  ffd5                 call ebp
// 008d67e7  8b4704               mov eax, dword ptr [edi + 4]
// 008d67ea  3bc3                 cmp eax, ebx
// 008d67ec  7426                 je 0x8d6814
// 008d67ee  8b5610               mov edx, dword ptr [esi + 0x10]
// 008d67f1  50                   push eax
// 008d67f2  52                   push edx
// 008d67f3  53                   push ebx
// 008d67f4  e857fbffff           call 0x8d6350
// 008d67f9  8b5610               mov edx, dword ptr [esi + 0x10]
// 008d67fc  8bd8                 mov ebx, eax
// 008d67fe  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d6802  50                   push eax
// 008d6803  8d4e08               lea ecx, [esi + 8]
// 008d6806  51                   push ecx
// 008d6807  52                   push edx
// 008d6808  53                   push ebx
// 008d6809  e8e2faffff           call 0x8d62f0
// 008d680e  83c41c               add esp, 0x1c
// 008d6811  895e10               mov dword ptr [esi + 0x10], ebx
// 008d6814  8bc7                 mov eax, edi
// 008d6816  5f                   pop edi
// 008d6817  5e                   pop esi
// 008d6818  5d                   pop ebp
// 008d6819  5b                   pop ebx
// 008d681a  c21400               ret 0x14
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?erase@?$vector@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@QAE?AV?$_Vector_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@V?$_Vector_const_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
