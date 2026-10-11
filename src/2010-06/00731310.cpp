// roc 2010-06 00731310  unit: lua_exception  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00731310
//
// 00731310  53                   push ebx
// 00731311  55                   push ebp
// 00731312  8b2d0ca99e00         mov ebp, dword ptr [0x9ea90c]
// 00731318  56                   push esi
// 00731319  57                   push edi
// 0073131a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0073131e  8bf1                 mov esi, ecx
// 00731320  c70700000000         mov dword ptr [edi], 0
// 00731326  85f6                 test esi, esi
// 00731328  740e                 je 0x731338
// 0073132a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0073132e  39460c               cmp dword ptr [esi + 0xc], eax
// 00731331  7705                 ja 0x731338
// 00731333  3b4610               cmp eax, dword ptr [esi + 0x10]
// 00731336  7606                 jbe 0x73133e
// 00731338  ffd5                 call ebp
// 0073133a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0073133e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00731342  8b0e                 mov ecx, dword ptr [esi]
// 00731344  890f                 mov dword ptr [edi], ecx
// 00731346  894704               mov dword ptr [edi + 4], eax
// 00731349  395e0c               cmp dword ptr [esi + 0xc], ebx
// 0073134c  7705                 ja 0x731353
// 0073134e  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 00731351  7606                 jbe 0x731359
// 00731353  ffd5                 call ebp
// 00731355  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00731359  8b07                 mov eax, dword ptr [edi]
// 0073135b  8b0e                 mov ecx, dword ptr [esi]
// 0073135d  85c0                 test eax, eax
// 0073135f  7404                 je 0x731365
// 00731361  3bc1                 cmp eax, ecx
// 00731363  7402                 je 0x731367
// 00731365  ffd5                 call ebp
// 00731367  8b4704               mov eax, dword ptr [edi + 4]
// 0073136a  3bc3                 cmp eax, ebx
// 0073136c  7426                 je 0x731394
// 0073136e  8b5610               mov edx, dword ptr [esi + 0x10]
// 00731371  50                   push eax
// 00731372  52                   push edx
// 00731373  53                   push ebx
// 00731374  e827fdffff           call 0x7310a0
// 00731379  8b5610               mov edx, dword ptr [esi + 0x10]
// 0073137c  8bd8                 mov ebx, eax
// 0073137e  8b442420             mov eax, dword ptr [esp + 0x20]
// 00731382  50                   push eax
// 00731383  8d4e08               lea ecx, [esi + 8]
// 00731386  51                   push ecx
// 00731387  52                   push edx
// 00731388  53                   push ebx
// 00731389  e812ffedff           call 0x6112a0
// 0073138e  83c41c               add esp, 0x1c
// 00731391  895e10               mov dword ptr [esi + 0x10], ebx
// 00731394  8bc7                 mov eax, edi
// 00731396  5f                   pop edi
// 00731397  5e                   pop esi
// 00731398  5d                   pop ebp
// 00731399  5b                   pop ebx
// 0073139a  c21400               ret 0x14
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?erase@?$vector@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@QAE?AV?$_Vector_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@V?$_Vector_const_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
