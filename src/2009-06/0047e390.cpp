// roc 2009-06 0047e390  unit: Ogre::RbxPart  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0047e390
//
// 0047e390  53                   push ebx
// 0047e391  55                   push ebp
// 0047e392  8b2dace98900         mov ebp, dword ptr [0x89e9ac]
// 0047e398  56                   push esi
// 0047e399  57                   push edi
// 0047e39a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0047e39e  8bf1                 mov esi, ecx
// 0047e3a0  c70700000000         mov dword ptr [edi], 0
// 0047e3a6  85f6                 test esi, esi
// 0047e3a8  740e                 je 0x47e3b8
// 0047e3aa  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0047e3ae  39460c               cmp dword ptr [esi + 0xc], eax
// 0047e3b1  7705                 ja 0x47e3b8
// 0047e3b3  3b4610               cmp eax, dword ptr [esi + 0x10]
// 0047e3b6  7606                 jbe 0x47e3be
// 0047e3b8  ffd5                 call ebp
// 0047e3ba  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0047e3be  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0047e3c2  8b0e                 mov ecx, dword ptr [esi]
// 0047e3c4  890f                 mov dword ptr [edi], ecx
// 0047e3c6  894704               mov dword ptr [edi + 4], eax
// 0047e3c9  395e0c               cmp dword ptr [esi + 0xc], ebx
// 0047e3cc  7705                 ja 0x47e3d3
// 0047e3ce  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 0047e3d1  7606                 jbe 0x47e3d9
// 0047e3d3  ffd5                 call ebp
// 0047e3d5  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0047e3d9  8b07                 mov eax, dword ptr [edi]
// 0047e3db  8b0e                 mov ecx, dword ptr [esi]
// 0047e3dd  85c0                 test eax, eax
// 0047e3df  7404                 je 0x47e3e5
// 0047e3e1  3bc1                 cmp eax, ecx
// 0047e3e3  7402                 je 0x47e3e7
// 0047e3e5  ffd5                 call ebp
// 0047e3e7  8b4704               mov eax, dword ptr [edi + 4]
// 0047e3ea  3bc3                 cmp eax, ebx
// 0047e3ec  7426                 je 0x47e414
// 0047e3ee  8b5610               mov edx, dword ptr [esi + 0x10]
// 0047e3f1  50                   push eax
// 0047e3f2  52                   push edx
// 0047e3f3  53                   push ebx
// 0047e3f4  e897f8ffff           call 0x47dc90
// 0047e3f9  8b5610               mov edx, dword ptr [esi + 0x10]
// 0047e3fc  8bd8                 mov ebx, eax
// 0047e3fe  8b442420             mov eax, dword ptr [esp + 0x20]
// 0047e402  50                   push eax
// 0047e403  8d4e08               lea ecx, [esi + 8]
// 0047e406  51                   push ecx
// 0047e407  52                   push edx
// 0047e408  53                   push ebx
// 0047e409  e822fcffff           call 0x47e030
// 0047e40e  83c41c               add esp, 0x1c
// 0047e411  895e10               mov dword ptr [esi + 0x10], ebx
// 0047e414  8bc7                 mov eax, edi
// 0047e416  5f                   pop edi
// 0047e417  5e                   pop esi
// 0047e418  5d                   pop ebp
// 0047e419  5b                   pop ebx
// 0047e41a  c21400               ret 0x14
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?erase@?$vector@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@QAE?AV?$_Vector_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@V?$_Vector_const_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
