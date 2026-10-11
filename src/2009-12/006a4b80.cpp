// roc 2009-12 006a4b80  unit: RBX::VScriptContext::?$FactoryProduct  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a4b80
//
// 006a4b80  83ec08               sub esp, 8
// 006a4b83  53                   push ebx
// 006a4b84  55                   push ebp
// 006a4b85  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006a4b89  56                   push esi
// 006a4b8a  8bf1                 mov esi, ecx
// 006a4b8c  57                   push edi
// 006a4b8d  8b3d60b79800         mov edi, dword ptr [0x98b760]
// 006a4b93  c7450000000000       mov dword ptr [ebp], 0
// 006a4b9a  85f6                 test esi, esi
// 006a4b9c  740e                 je 0x6a4bac
// 006a4b9e  8b442424             mov eax, dword ptr [esp + 0x24]
// 006a4ba2  39460c               cmp dword ptr [esi + 0xc], eax
// 006a4ba5  7705                 ja 0x6a4bac
// 006a4ba7  3b4610               cmp eax, dword ptr [esi + 0x10]
// 006a4baa  7606                 jbe 0x6a4bb2
// 006a4bac  ffd7                 call edi
// 006a4bae  8b442424             mov eax, dword ptr [esp + 0x24]
// 006a4bb2  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 006a4bb6  8b0e                 mov ecx, dword ptr [esi]
// 006a4bb8  894d00               mov dword ptr [ebp], ecx
// 006a4bbb  894504               mov dword ptr [ebp + 4], eax
// 006a4bbe  395e0c               cmp dword ptr [esi + 0xc], ebx
// 006a4bc1  7705                 ja 0x6a4bc8
// 006a4bc3  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 006a4bc6  7606                 jbe 0x6a4bce
// 006a4bc8  ffd7                 call edi
// 006a4bca  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 006a4bce  8b4500               mov eax, dword ptr [ebp]
// 006a4bd1  8b0e                 mov ecx, dword ptr [esi]
// 006a4bd3  85c0                 test eax, eax
// 006a4bd5  7404                 je 0x6a4bdb
// 006a4bd7  3bc1                 cmp eax, ecx
// 006a4bd9  7402                 je 0x6a4bdd
// 006a4bdb  ffd7                 call edi
// 006a4bdd  8b4504               mov eax, dword ptr [ebp + 4]
// 006a4be0  89442414             mov dword ptr [esp + 0x14], eax
// 006a4be4  3bc3                 cmp eax, ebx
// 006a4be6  7449                 je 0x6a4c31
// 006a4be8  8b7e10               mov edi, dword ptr [esi + 0x10]
// 006a4beb  c644241c00           mov byte ptr [esp + 0x1c], 0
// 006a4bf0  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006a4bf4  52                   push edx
// 006a4bf5  8b542420             mov edx, dword ptr [esp + 0x20]
// 006a4bf9  c644241400           mov byte ptr [esp + 0x14], 0
// 006a4bfe  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006a4c02  51                   push ecx
// 006a4c03  52                   push edx
// 006a4c04  50                   push eax
// 006a4c05  57                   push edi
// 006a4c06  53                   push ebx
// 006a4c07  e814cfffff           call 0x6a1b20
// 006a4c0c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006a4c10  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006a4c14  2bfb                 sub edi, ebx
// 006a4c16  51                   push ecx
// 006a4c17  c1ff03               sar edi, 3
// 006a4c1a  8d3cf8               lea edi, [eax + edi*8]
// 006a4c1d  8b4610               mov eax, dword ptr [esi + 0x10]
// 006a4c20  8d5608               lea edx, [esi + 8]
// 006a4c23  52                   push edx
// 006a4c24  50                   push eax
// 006a4c25  57                   push edi
// 006a4c26  e875eae1ff           call 0x4c36a0
// 006a4c2b  83c428               add esp, 0x28
// 006a4c2e  897e10               mov dword ptr [esi + 0x10], edi
// 006a4c31  5f                   pop edi
// 006a4c32  5e                   pop esi
// 006a4c33  8bc5                 mov eax, ebp
// 006a4c35  5d                   pop ebp
// 006a4c36  5b                   pop ebx
// 006a4c37  83c408               add esp, 8
// 006a4c3a  c21400               ret 0x14
// library openrbx-client/App\v8tree\Service.cpp (function ?erase@?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@QAE?AV?$_Vector_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@2@V?$_Vector_const_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Service.cpp
