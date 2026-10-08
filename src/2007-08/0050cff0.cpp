// from server: 100% by auto
// roc 2007-08 0050cff0  unit: G3D::BinaryInput  size: 290 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050cff0
//
// 0050cff0  53                   push ebx
// 0050cff1  55                   push ebp
// 0050cff2  56                   push esi
// 0050cff3  8bf1                 mov esi, ecx
// 0050cff5  57                   push edi
// 0050cff6  8b7e08               mov edi, dword ptr [esi + 8]
// 0050cff9  3b7e0c               cmp edi, dword ptr [esi + 0xc]
// 0050cffc  7606                 jbe 0x50d004
// 0050cffe  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050d004  85f6                 test esi, esi
// 0050d006  7506                 jne 0x50d00e
// 0050d008  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050d00e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0050d012  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0050d016  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0050d01a  8bd8                 mov ebx, eax
// 0050d01c  2bdf                 sub ebx, edi
// 0050d01e  c1fb02               sar ebx, 2
// 0050d021  c1e305               shl ebx, 5
// 0050d024  83ec0c               sub esp, 0xc
// 0050d027  8bfc                 mov edi, esp
// 0050d029  03d9                 add ebx, ecx
// 0050d02b  85ed                 test ebp, ebp
// 0050d02d  c70700000000         mov dword ptr [edi], 0
// 0050d033  894704               mov dword ptr [edi + 4], eax
// 0050d036  894f08               mov dword ptr [edi + 8], ecx
// 0050d039  7506                 jne 0x50d041
// 0050d03b  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050d041  892f                 mov dword ptr [edi], ebp
// 0050d043  8b6e08               mov ebp, dword ptr [esi + 8]
// 0050d046  83ec0c               sub esp, 0xc
// 0050d049  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 0050d04c  8bfc                 mov edi, esp
// 0050d04e  7606                 jbe 0x50d056
// 0050d050  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050d056  85f6                 test esi, esi
// 0050d058  c70700000000         mov dword ptr [edi], 0
// 0050d05e  896f04               mov dword ptr [edi + 4], ebp
// 0050d061  c7470800000000       mov dword ptr [edi + 8], 0
// 0050d068  7506                 jne 0x50d070
// 0050d06a  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050d070  8937                 mov dword ptr [edi], esi
// 0050d072  8b06                 mov eax, dword ptr [esi]
// 0050d074  85c0                 test eax, eax
// 0050d076  7608                 jbe 0x50d080
// 0050d078  50                   push eax
// 0050d079  8bcf                 mov ecx, edi
// 0050d07b  e860f4ffff           call 0x50c4e0
// 0050d080  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 0050d084  8b442440             mov eax, dword ptr [esp + 0x40]
// 0050d088  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0050d08c  83ec0c               sub esp, 0xc
// 0050d08f  85ed                 test ebp, ebp
// 0050d091  8bfc                 mov edi, esp
// 0050d093  c70700000000         mov dword ptr [edi], 0
// 0050d099  894704               mov dword ptr [edi + 4], eax
// 0050d09c  894f08               mov dword ptr [edi + 8], ecx
// 0050d09f  7506                 jne 0x50d0a7
// 0050d0a1  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050d0a7  8d54243c             lea edx, [esp + 0x3c]
// 0050d0ab  52                   push edx
// 0050d0ac  892f                 mov dword ptr [edi], ebp
// 0050d0ae  e8fdfdffff           call 0x50ceb0
// 0050d0b3  8b7e08               mov edi, dword ptr [esi + 8]
// 0050d0b6  83c428               add esp, 0x28
// 0050d0b9  3b7e0c               cmp edi, dword ptr [esi + 0xc]
// 0050d0bc  7606                 jbe 0x50d0c4
// 0050d0be  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050d0c4  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0050d0c8  2bc7                 sub eax, edi
// 0050d0ca  c1f802               sar eax, 2
// 0050d0cd  c1e005               shl eax, 5
// 0050d0d0  03442420             add eax, dword ptr [esp + 0x20]
// 0050d0d4  8bce                 mov ecx, esi
// 0050d0d6  50                   push eax
// 0050d0d7  e834f3ffff           call 0x50c410
// 0050d0dc  8b7e08               mov edi, dword ptr [esi + 8]
// 0050d0df  3b7e0c               cmp edi, dword ptr [esi + 0xc]
// 0050d0e2  7606                 jbe 0x50d0ea
// 0050d0e4  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050d0ea  89742418             mov dword ptr [esp + 0x18], esi
// 0050d0ee  8b742414             mov esi, dword ptr [esp + 0x14]
// 0050d0f2  53                   push ebx
// 0050d0f3  56                   push esi
// 0050d0f4  8d4c2420             lea ecx, [esp + 0x20]
// 0050d0f8  897c2424             mov dword ptr [esp + 0x24], edi
// 0050d0fc  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0050d104  e8a7f5ffff           call 0x50c6b0
// 0050d109  5f                   pop edi
// 0050d10a  8bc6                 mov eax, esi
// 0050d10c  5e                   pop esi
// 0050d10d  5d                   pop ebp
// 0050d10e  5b                   pop ebx
// 0050d10f  c21c00               ret 0x1c
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?erase@?$vector@_NV?$allocator@_N@std@@@std@@QAE?AV?$_Vb_iterator@V?$vector@_NV?$allocator@_N@std@@@std@@@2@V32@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
