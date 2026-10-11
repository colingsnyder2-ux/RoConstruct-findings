// roc 2010-06 008feac0  unit: Ogre::RbxSceneUpdater  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008feac0
//
// 008feac0  53                   push ebx
// 008feac1  55                   push ebp
// 008feac2  8b2d0ca99e00         mov ebp, dword ptr [0x9ea90c]
// 008feac8  56                   push esi
// 008feac9  57                   push edi
// 008feaca  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008feace  8bf1                 mov esi, ecx
// 008fead0  c70700000000         mov dword ptr [edi], 0
// 008fead6  85f6                 test esi, esi
// 008fead8  740e                 je 0x8feae8
// 008feada  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008feade  39460c               cmp dword ptr [esi + 0xc], eax
// 008feae1  7705                 ja 0x8feae8
// 008feae3  3b4610               cmp eax, dword ptr [esi + 0x10]
// 008feae6  7606                 jbe 0x8feaee
// 008feae8  ffd5                 call ebp
// 008feaea  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008feaee  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 008feaf2  8b0e                 mov ecx, dword ptr [esi]
// 008feaf4  890f                 mov dword ptr [edi], ecx
// 008feaf6  894704               mov dword ptr [edi + 4], eax
// 008feaf9  395e0c               cmp dword ptr [esi + 0xc], ebx
// 008feafc  7705                 ja 0x8feb03
// 008feafe  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 008feb01  7606                 jbe 0x8feb09
// 008feb03  ffd5                 call ebp
// 008feb05  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 008feb09  8b07                 mov eax, dword ptr [edi]
// 008feb0b  8b0e                 mov ecx, dword ptr [esi]
// 008feb0d  85c0                 test eax, eax
// 008feb0f  7404                 je 0x8feb15
// 008feb11  3bc1                 cmp eax, ecx
// 008feb13  7402                 je 0x8feb17
// 008feb15  ffd5                 call ebp
// 008feb17  8b4704               mov eax, dword ptr [edi + 4]
// 008feb1a  3bc3                 cmp eax, ebx
// 008feb1c  7426                 je 0x8feb44
// 008feb1e  8b5610               mov edx, dword ptr [esi + 0x10]
// 008feb21  50                   push eax
// 008feb22  52                   push edx
// 008feb23  53                   push ebx
// 008feb24  e847fbffff           call 0x8fe670
// 008feb29  8b5610               mov edx, dword ptr [esi + 0x10]
// 008feb2c  8bd8                 mov ebx, eax
// 008feb2e  8b442420             mov eax, dword ptr [esp + 0x20]
// 008feb32  50                   push eax
// 008feb33  8d4e08               lea ecx, [esi + 8]
// 008feb36  51                   push ecx
// 008feb37  52                   push edx
// 008feb38  53                   push ebx
// 008feb39  e89203c3ff           call 0x52eed0
// 008feb3e  83c41c               add esp, 0x1c
// 008feb41  895e10               mov dword ptr [esi + 0x10], ebx
// 008feb44  8bc7                 mov eax, edi
// 008feb46  5f                   pop edi
// 008feb47  5e                   pop esi
// 008feb48  5d                   pop ebp
// 008feb49  5b                   pop ebx
// 008feb4a  c21400               ret 0x14
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?erase@?$vector@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@QAE?AV?$_Vector_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@V?$_Vector_const_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
