// roc 2009-06 0069e540  unit: RBX::VLocalBackpack::?$FactoryProduct  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0069e540
//
// 0069e540  83ec08               sub esp, 8
// 0069e543  53                   push ebx
// 0069e544  55                   push ebp
// 0069e545  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0069e549  56                   push esi
// 0069e54a  8bf1                 mov esi, ecx
// 0069e54c  57                   push edi
// 0069e54d  8b3dace98900         mov edi, dword ptr [0x89e9ac]
// 0069e553  c7450000000000       mov dword ptr [ebp], 0
// 0069e55a  85f6                 test esi, esi
// 0069e55c  740e                 je 0x69e56c
// 0069e55e  8b442424             mov eax, dword ptr [esp + 0x24]
// 0069e562  39460c               cmp dword ptr [esi + 0xc], eax
// 0069e565  7705                 ja 0x69e56c
// 0069e567  3b4610               cmp eax, dword ptr [esi + 0x10]
// 0069e56a  7606                 jbe 0x69e572
// 0069e56c  ffd7                 call edi
// 0069e56e  8b442424             mov eax, dword ptr [esp + 0x24]
// 0069e572  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0069e576  8b0e                 mov ecx, dword ptr [esi]
// 0069e578  894d00               mov dword ptr [ebp], ecx
// 0069e57b  894504               mov dword ptr [ebp + 4], eax
// 0069e57e  395e0c               cmp dword ptr [esi + 0xc], ebx
// 0069e581  7705                 ja 0x69e588
// 0069e583  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 0069e586  7606                 jbe 0x69e58e
// 0069e588  ffd7                 call edi
// 0069e58a  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0069e58e  8b4500               mov eax, dword ptr [ebp]
// 0069e591  8b0e                 mov ecx, dword ptr [esi]
// 0069e593  85c0                 test eax, eax
// 0069e595  7404                 je 0x69e59b
// 0069e597  3bc1                 cmp eax, ecx
// 0069e599  7402                 je 0x69e59d
// 0069e59b  ffd7                 call edi
// 0069e59d  8b4504               mov eax, dword ptr [ebp + 4]
// 0069e5a0  89442414             mov dword ptr [esp + 0x14], eax
// 0069e5a4  3bc3                 cmp eax, ebx
// 0069e5a6  7449                 je 0x69e5f1
// 0069e5a8  8b7e10               mov edi, dword ptr [esi + 0x10]
// 0069e5ab  c644241c00           mov byte ptr [esp + 0x1c], 0
// 0069e5b0  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0069e5b4  52                   push edx
// 0069e5b5  8b542420             mov edx, dword ptr [esp + 0x20]
// 0069e5b9  c644241400           mov byte ptr [esp + 0x14], 0
// 0069e5be  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0069e5c2  51                   push ecx
// 0069e5c3  52                   push edx
// 0069e5c4  50                   push eax
// 0069e5c5  57                   push edi
// 0069e5c6  53                   push ebx
// 0069e5c7  e8c417d7ff           call 0x40fd90
// 0069e5cc  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0069e5d0  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0069e5d4  2bfb                 sub edi, ebx
// 0069e5d6  51                   push ecx
// 0069e5d7  c1ff03               sar edi, 3
// 0069e5da  8d3cf8               lea edi, [eax + edi*8]
// 0069e5dd  8b4610               mov eax, dword ptr [esi + 0x10]
// 0069e5e0  8d5608               lea edx, [esi + 8]
// 0069e5e3  52                   push edx
// 0069e5e4  50                   push eax
// 0069e5e5  57                   push edi
// 0069e5e6  e8b586f9ff           call 0x636ca0
// 0069e5eb  83c428               add esp, 0x28
// 0069e5ee  897e10               mov dword ptr [esi + 0x10], edi
// 0069e5f1  5f                   pop edi
// 0069e5f2  5e                   pop esi
// 0069e5f3  8bc5                 mov eax, ebp
// 0069e5f5  5d                   pop ebp
// 0069e5f6  5b                   pop ebx
// 0069e5f7  83c408               add esp, 8
// 0069e5fa  c21400               ret 0x14
// library openrbx-client/App\v8tree\Service.cpp (function ?erase@?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@QAE?AV?$_Vector_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@2@V?$_Vector_const_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Service.cpp
