// roc 2009-12 007bc0e0  unit: RBX::SpatialFilter  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007bc0e0
//
// 007bc0e0  83ec08               sub esp, 8
// 007bc0e3  53                   push ebx
// 007bc0e4  55                   push ebp
// 007bc0e5  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 007bc0e9  56                   push esi
// 007bc0ea  8bf1                 mov esi, ecx
// 007bc0ec  57                   push edi
// 007bc0ed  8b3d60b79800         mov edi, dword ptr [0x98b760]
// 007bc0f3  c7450000000000       mov dword ptr [ebp], 0
// 007bc0fa  85f6                 test esi, esi
// 007bc0fc  740e                 je 0x7bc10c
// 007bc0fe  8b442424             mov eax, dword ptr [esp + 0x24]
// 007bc102  39460c               cmp dword ptr [esi + 0xc], eax
// 007bc105  7705                 ja 0x7bc10c
// 007bc107  3b4610               cmp eax, dword ptr [esi + 0x10]
// 007bc10a  7606                 jbe 0x7bc112
// 007bc10c  ffd7                 call edi
// 007bc10e  8b442424             mov eax, dword ptr [esp + 0x24]
// 007bc112  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 007bc116  8b0e                 mov ecx, dword ptr [esi]
// 007bc118  894d00               mov dword ptr [ebp], ecx
// 007bc11b  894504               mov dword ptr [ebp + 4], eax
// 007bc11e  395e0c               cmp dword ptr [esi + 0xc], ebx
// 007bc121  7705                 ja 0x7bc128
// 007bc123  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 007bc126  7606                 jbe 0x7bc12e
// 007bc128  ffd7                 call edi
// 007bc12a  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 007bc12e  8b4500               mov eax, dword ptr [ebp]
// 007bc131  8b0e                 mov ecx, dword ptr [esi]
// 007bc133  85c0                 test eax, eax
// 007bc135  7404                 je 0x7bc13b
// 007bc137  3bc1                 cmp eax, ecx
// 007bc139  7402                 je 0x7bc13d
// 007bc13b  ffd7                 call edi
// 007bc13d  8b4504               mov eax, dword ptr [ebp + 4]
// 007bc140  89442414             mov dword ptr [esp + 0x14], eax
// 007bc144  3bc3                 cmp eax, ebx
// 007bc146  7449                 je 0x7bc191
// 007bc148  8b7e10               mov edi, dword ptr [esi + 0x10]
// 007bc14b  c644241c00           mov byte ptr [esp + 0x1c], 0
// 007bc150  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007bc154  52                   push edx
// 007bc155  8b542420             mov edx, dword ptr [esp + 0x20]
// 007bc159  c644241400           mov byte ptr [esp + 0x14], 0
// 007bc15e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007bc162  51                   push ecx
// 007bc163  52                   push edx
// 007bc164  50                   push eax
// 007bc165  57                   push edi
// 007bc166  53                   push ebx
// 007bc167  e8d40ffaff           call 0x75d140
// 007bc16c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007bc170  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007bc174  2bfb                 sub edi, ebx
// 007bc176  51                   push ecx
// 007bc177  c1ff03               sar edi, 3
// 007bc17a  8d3cf8               lea edi, [eax + edi*8]
// 007bc17d  8b4610               mov eax, dword ptr [esi + 0x10]
// 007bc180  8d5608               lea edx, [esi + 8]
// 007bc183  52                   push edx
// 007bc184  50                   push eax
// 007bc185  57                   push edi
// 007bc186  e8250bf8ff           call 0x73ccb0
// 007bc18b  83c428               add esp, 0x28
// 007bc18e  897e10               mov dword ptr [esi + 0x10], edi
// 007bc191  5f                   pop edi
// 007bc192  5e                   pop esi
// 007bc193  8bc5                 mov eax, ebp
// 007bc195  5d                   pop ebp
// 007bc196  5b                   pop ebx
// 007bc197  83c408               add esp, 8
// 007bc19a  c21400               ret 0x14
// library openrbx-client/App\v8tree\Service.cpp (function ?erase@?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@QAE?AV?$_Vector_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@2@V?$_Vector_const_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Service.cpp
