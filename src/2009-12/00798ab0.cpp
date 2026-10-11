// roc 2009-12 00798ab0  unit: lua_exception  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00798ab0
//
// 00798ab0  53                   push ebx
// 00798ab1  55                   push ebp
// 00798ab2  8b2d60b79800         mov ebp, dword ptr [0x98b760]
// 00798ab8  56                   push esi
// 00798ab9  57                   push edi
// 00798aba  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00798abe  8bf1                 mov esi, ecx
// 00798ac0  c70700000000         mov dword ptr [edi], 0
// 00798ac6  85f6                 test esi, esi
// 00798ac8  740e                 je 0x798ad8
// 00798aca  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00798ace  39460c               cmp dword ptr [esi + 0xc], eax
// 00798ad1  7705                 ja 0x798ad8
// 00798ad3  3b4610               cmp eax, dword ptr [esi + 0x10]
// 00798ad6  7606                 jbe 0x798ade
// 00798ad8  ffd5                 call ebp
// 00798ada  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00798ade  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00798ae2  8b0e                 mov ecx, dword ptr [esi]
// 00798ae4  890f                 mov dword ptr [edi], ecx
// 00798ae6  894704               mov dword ptr [edi + 4], eax
// 00798ae9  395e0c               cmp dword ptr [esi + 0xc], ebx
// 00798aec  7705                 ja 0x798af3
// 00798aee  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 00798af1  7606                 jbe 0x798af9
// 00798af3  ffd5                 call ebp
// 00798af5  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00798af9  8b07                 mov eax, dword ptr [edi]
// 00798afb  8b0e                 mov ecx, dword ptr [esi]
// 00798afd  85c0                 test eax, eax
// 00798aff  7404                 je 0x798b05
// 00798b01  3bc1                 cmp eax, ecx
// 00798b03  7402                 je 0x798b07
// 00798b05  ffd5                 call ebp
// 00798b07  8b4704               mov eax, dword ptr [edi + 4]
// 00798b0a  3bc3                 cmp eax, ebx
// 00798b0c  7426                 je 0x798b34
// 00798b0e  8b5610               mov edx, dword ptr [esi + 0x10]
// 00798b11  50                   push eax
// 00798b12  52                   push edx
// 00798b13  53                   push ebx
// 00798b14  e827fdffff           call 0x798840
// 00798b19  8b5610               mov edx, dword ptr [esi + 0x10]
// 00798b1c  8bd8                 mov ebx, eax
// 00798b1e  8b442420             mov eax, dword ptr [esp + 0x20]
// 00798b22  50                   push eax
// 00798b23  8d4e08               lea ecx, [esi + 8]
// 00798b26  51                   push ecx
// 00798b27  52                   push edx
// 00798b28  53                   push ebx
// 00798b29  e822bdf0ff           call 0x6a4850
// 00798b2e  83c41c               add esp, 0x1c
// 00798b31  895e10               mov dword ptr [esi + 0x10], ebx
// 00798b34  8bc7                 mov eax, edi
// 00798b36  5f                   pop edi
// 00798b37  5e                   pop esi
// 00798b38  5d                   pop ebp
// 00798b39  5b                   pop ebx
// 00798b3a  c21400               ret 0x14
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?erase@?$vector@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@QAE?AV?$_Vector_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@V?$_Vector_const_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/SerializerV2.cpp
