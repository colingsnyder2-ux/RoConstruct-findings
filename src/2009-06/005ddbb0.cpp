// roc 2009-06 005ddbb0  unit: RBX::VInstance::?$NonFactoryProduct  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ddbb0
//
// 005ddbb0  53                   push ebx
// 005ddbb1  55                   push ebp
// 005ddbb2  8b2dace98900         mov ebp, dword ptr [0x89e9ac]
// 005ddbb8  56                   push esi
// 005ddbb9  57                   push edi
// 005ddbba  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005ddbbe  8bf1                 mov esi, ecx
// 005ddbc0  c70700000000         mov dword ptr [edi], 0
// 005ddbc6  85f6                 test esi, esi
// 005ddbc8  740e                 je 0x5ddbd8
// 005ddbca  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005ddbce  39460c               cmp dword ptr [esi + 0xc], eax
// 005ddbd1  7705                 ja 0x5ddbd8
// 005ddbd3  3b4610               cmp eax, dword ptr [esi + 0x10]
// 005ddbd6  7606                 jbe 0x5ddbde
// 005ddbd8  ffd5                 call ebp
// 005ddbda  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005ddbde  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 005ddbe2  8b0e                 mov ecx, dword ptr [esi]
// 005ddbe4  890f                 mov dword ptr [edi], ecx
// 005ddbe6  894704               mov dword ptr [edi + 4], eax
// 005ddbe9  395e0c               cmp dword ptr [esi + 0xc], ebx
// 005ddbec  7705                 ja 0x5ddbf3
// 005ddbee  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 005ddbf1  7606                 jbe 0x5ddbf9
// 005ddbf3  ffd5                 call ebp
// 005ddbf5  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 005ddbf9  8b07                 mov eax, dword ptr [edi]
// 005ddbfb  8b0e                 mov ecx, dword ptr [esi]
// 005ddbfd  85c0                 test eax, eax
// 005ddbff  7404                 je 0x5ddc05
// 005ddc01  3bc1                 cmp eax, ecx
// 005ddc03  7402                 je 0x5ddc07
// 005ddc05  ffd5                 call ebp
// 005ddc07  8b4704               mov eax, dword ptr [edi + 4]
// 005ddc0a  3bc3                 cmp eax, ebx
// 005ddc0c  7426                 je 0x5ddc34
// 005ddc0e  8b5610               mov edx, dword ptr [esi + 0x10]
// 005ddc11  50                   push eax
// 005ddc12  52                   push edx
// 005ddc13  53                   push ebx
// 005ddc14  e837dfffff           call 0x5dbb50
// 005ddc19  8b5610               mov edx, dword ptr [esi + 0x10]
// 005ddc1c  8bd8                 mov ebx, eax
// 005ddc1e  8b442420             mov eax, dword ptr [esp + 0x20]
// 005ddc22  50                   push eax
// 005ddc23  8d4e08               lea ecx, [esi + 8]
// 005ddc26  51                   push ecx
// 005ddc27  52                   push edx
// 005ddc28  53                   push ebx
// 005ddc29  e8f2eaffff           call 0x5dc720
// 005ddc2e  83c41c               add esp, 0x1c
// 005ddc31  895e10               mov dword ptr [esi + 0x10], ebx
// 005ddc34  8bc7                 mov eax, edi
// 005ddc36  5f                   pop edi
// 005ddc37  5e                   pop esi
// 005ddc38  5d                   pop ebp
// 005ddc39  5b                   pop ebx
// 005ddc3a  c21400               ret 0x14
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?erase@?$vector@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@QAE?AV?$_Vector_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@V?$_Vector_const_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/SerializerV2.cpp
