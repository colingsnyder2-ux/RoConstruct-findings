// roc 2010-06 00788b90  unit: RBX::HUMAN::GettingUp  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00788b90
//
// 00788b90  53                   push ebx
// 00788b91  55                   push ebp
// 00788b92  8b2d0ca99e00         mov ebp, dword ptr [0x9ea90c]
// 00788b98  56                   push esi
// 00788b99  57                   push edi
// 00788b9a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00788b9e  8bf1                 mov esi, ecx
// 00788ba0  c70700000000         mov dword ptr [edi], 0
// 00788ba6  85f6                 test esi, esi
// 00788ba8  740e                 je 0x788bb8
// 00788baa  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00788bae  39460c               cmp dword ptr [esi + 0xc], eax
// 00788bb1  7705                 ja 0x788bb8
// 00788bb3  3b4610               cmp eax, dword ptr [esi + 0x10]
// 00788bb6  7606                 jbe 0x788bbe
// 00788bb8  ffd5                 call ebp
// 00788bba  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00788bbe  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00788bc2  8b0e                 mov ecx, dword ptr [esi]
// 00788bc4  890f                 mov dword ptr [edi], ecx
// 00788bc6  894704               mov dword ptr [edi + 4], eax
// 00788bc9  395e0c               cmp dword ptr [esi + 0xc], ebx
// 00788bcc  7705                 ja 0x788bd3
// 00788bce  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 00788bd1  7606                 jbe 0x788bd9
// 00788bd3  ffd5                 call ebp
// 00788bd5  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00788bd9  8b07                 mov eax, dword ptr [edi]
// 00788bdb  8b0e                 mov ecx, dword ptr [esi]
// 00788bdd  85c0                 test eax, eax
// 00788bdf  7404                 je 0x788be5
// 00788be1  3bc1                 cmp eax, ecx
// 00788be3  7402                 je 0x788be7
// 00788be5  ffd5                 call ebp
// 00788be7  8b4704               mov eax, dword ptr [edi + 4]
// 00788bea  3bc3                 cmp eax, ebx
// 00788bec  7426                 je 0x788c14
// 00788bee  8b5610               mov edx, dword ptr [esi + 0x10]
// 00788bf1  50                   push eax
// 00788bf2  52                   push edx
// 00788bf3  53                   push ebx
// 00788bf4  e8d7fdffff           call 0x7889d0
// 00788bf9  8b5610               mov edx, dword ptr [esi + 0x10]
// 00788bfc  8bd8                 mov ebx, eax
// 00788bfe  8b442420             mov eax, dword ptr [esp + 0x20]
// 00788c02  50                   push eax
// 00788c03  8d4e08               lea ecx, [esi + 8]
// 00788c06  51                   push ecx
// 00788c07  52                   push edx
// 00788c08  53                   push ebx
// 00788c09  e8e2d3fcff           call 0x755ff0
// 00788c0e  83c41c               add esp, 0x1c
// 00788c11  895e10               mov dword ptr [esi + 0x10], ebx
// 00788c14  8bc7                 mov eax, edi
// 00788c16  5f                   pop edi
// 00788c17  5e                   pop esi
// 00788c18  5d                   pop ebp
// 00788c19  5b                   pop ebx
// 00788c1a  c21400               ret 0x14
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?erase@?$vector@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@QAE?AV?$_Vector_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@V?$_Vector_const_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/SerializerV2.cpp
