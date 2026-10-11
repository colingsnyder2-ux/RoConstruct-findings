// roc 2009-12 004af1c0  unit: Ogre::VRbxTextureCompositorSceneManager::?$sp_counted_impl_p  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004af1c0
//
// 004af1c0  53                   push ebx
// 004af1c1  55                   push ebp
// 004af1c2  8b2d60b79800         mov ebp, dword ptr [0x98b760]
// 004af1c8  56                   push esi
// 004af1c9  57                   push edi
// 004af1ca  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004af1ce  8bf1                 mov esi, ecx
// 004af1d0  c70700000000         mov dword ptr [edi], 0
// 004af1d6  85f6                 test esi, esi
// 004af1d8  740e                 je 0x4af1e8
// 004af1da  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004af1de  39460c               cmp dword ptr [esi + 0xc], eax
// 004af1e1  7705                 ja 0x4af1e8
// 004af1e3  3b4610               cmp eax, dword ptr [esi + 0x10]
// 004af1e6  7606                 jbe 0x4af1ee
// 004af1e8  ffd5                 call ebp
// 004af1ea  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004af1ee  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004af1f2  8b0e                 mov ecx, dword ptr [esi]
// 004af1f4  890f                 mov dword ptr [edi], ecx
// 004af1f6  894704               mov dword ptr [edi + 4], eax
// 004af1f9  395e0c               cmp dword ptr [esi + 0xc], ebx
// 004af1fc  7705                 ja 0x4af203
// 004af1fe  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 004af201  7606                 jbe 0x4af209
// 004af203  ffd5                 call ebp
// 004af205  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004af209  8b07                 mov eax, dword ptr [edi]
// 004af20b  8b0e                 mov ecx, dword ptr [esi]
// 004af20d  85c0                 test eax, eax
// 004af20f  7404                 je 0x4af215
// 004af211  3bc1                 cmp eax, ecx
// 004af213  7402                 je 0x4af217
// 004af215  ffd5                 call ebp
// 004af217  8b4704               mov eax, dword ptr [edi + 4]
// 004af21a  3bc3                 cmp eax, ebx
// 004af21c  7426                 je 0x4af244
// 004af21e  8b5610               mov edx, dword ptr [esi + 0x10]
// 004af221  50                   push eax
// 004af222  52                   push edx
// 004af223  53                   push ebx
// 004af224  e847fcffff           call 0x4aee70
// 004af229  8b5610               mov edx, dword ptr [esi + 0x10]
// 004af22c  8bd8                 mov ebx, eax
// 004af22e  8b442420             mov eax, dword ptr [esp + 0x20]
// 004af232  50                   push eax
// 004af233  8d4e08               lea ecx, [esi + 8]
// 004af236  51                   push ecx
// 004af237  52                   push edx
// 004af238  53                   push ebx
// 004af239  e8d2fbffff           call 0x4aee10
// 004af23e  83c41c               add esp, 0x1c
// 004af241  895e10               mov dword ptr [esi + 0x10], ebx
// 004af244  8bc7                 mov eax, edi
// 004af246  5f                   pop edi
// 004af247  5e                   pop esi
// 004af248  5d                   pop ebp
// 004af249  5b                   pop ebx
// 004af24a  c21400               ret 0x14
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?erase@?$vector@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@QAE?AV?$_Vector_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@V?$_Vector_const_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/SerializerV2.cpp
