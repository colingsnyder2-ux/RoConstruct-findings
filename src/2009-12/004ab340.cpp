// roc 2009-12 004ab340  unit: Ogre::RbxSceneUpdater  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ab340
//
// 004ab340  53                   push ebx
// 004ab341  55                   push ebp
// 004ab342  8b2d60b79800         mov ebp, dword ptr [0x98b760]
// 004ab348  56                   push esi
// 004ab349  57                   push edi
// 004ab34a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004ab34e  8bf1                 mov esi, ecx
// 004ab350  c70700000000         mov dword ptr [edi], 0
// 004ab356  85f6                 test esi, esi
// 004ab358  740e                 je 0x4ab368
// 004ab35a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004ab35e  39460c               cmp dword ptr [esi + 0xc], eax
// 004ab361  7705                 ja 0x4ab368
// 004ab363  3b4610               cmp eax, dword ptr [esi + 0x10]
// 004ab366  7606                 jbe 0x4ab36e
// 004ab368  ffd5                 call ebp
// 004ab36a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004ab36e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004ab372  8b0e                 mov ecx, dword ptr [esi]
// 004ab374  890f                 mov dword ptr [edi], ecx
// 004ab376  894704               mov dword ptr [edi + 4], eax
// 004ab379  395e0c               cmp dword ptr [esi + 0xc], ebx
// 004ab37c  7705                 ja 0x4ab383
// 004ab37e  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 004ab381  7606                 jbe 0x4ab389
// 004ab383  ffd5                 call ebp
// 004ab385  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004ab389  8b07                 mov eax, dword ptr [edi]
// 004ab38b  8b0e                 mov ecx, dword ptr [esi]
// 004ab38d  85c0                 test eax, eax
// 004ab38f  7404                 je 0x4ab395
// 004ab391  3bc1                 cmp eax, ecx
// 004ab393  7402                 je 0x4ab397
// 004ab395  ffd5                 call ebp
// 004ab397  8b4704               mov eax, dword ptr [edi + 4]
// 004ab39a  3bc3                 cmp eax, ebx
// 004ab39c  7426                 je 0x4ab3c4
// 004ab39e  8b5610               mov edx, dword ptr [esi + 0x10]
// 004ab3a1  50                   push eax
// 004ab3a2  52                   push edx
// 004ab3a3  53                   push ebx
// 004ab3a4  e8e7f9ffff           call 0x4aad90
// 004ab3a9  8b5610               mov edx, dword ptr [esi + 0x10]
// 004ab3ac  8bd8                 mov ebx, eax
// 004ab3ae  8b442420             mov eax, dword ptr [esp + 0x20]
// 004ab3b2  50                   push eax
// 004ab3b3  8d4e08               lea ecx, [esi + 8]
// 004ab3b6  51                   push ecx
// 004ab3b7  52                   push edx
// 004ab3b8  53                   push ebx
// 004ab3b9  e872faffff           call 0x4aae30
// 004ab3be  83c41c               add esp, 0x1c
// 004ab3c1  895e10               mov dword ptr [esi + 0x10], ebx
// 004ab3c4  8bc7                 mov eax, edi
// 004ab3c6  5f                   pop edi
// 004ab3c7  5e                   pop esi
// 004ab3c8  5d                   pop ebp
// 004ab3c9  5b                   pop ebx
// 004ab3ca  c21400               ret 0x14
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?erase@?$vector@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@QAE?AV?$_Vector_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@V?$_Vector_const_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
