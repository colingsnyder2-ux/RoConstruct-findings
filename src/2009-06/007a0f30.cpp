// roc 2009-06 007a0f30  unit: CXTPControlGallery  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007a0f30
//
// 007a0f30  83ec18               sub esp, 0x18
// 007a0f33  56                   push esi
// 007a0f34  57                   push edi
// 007a0f35  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 007a0f39  8bf1                 mov esi, ecx
// 007a0f3b  85ff                 test edi, edi
// 007a0f3d  750d                 jne 0x7a0f4c
// 007a0f3f  5f                   pop edi
// 007a0f40  b857000780           mov eax, 0x80070057
// 007a0f45  5e                   pop esi
// 007a0f46  83c418               add esp, 0x18
// 007a0f49  c20c00               ret 0xc
// 007a0f4c  33c0                 xor eax, eax
// 007a0f4e  668907               mov word ptr [edi], ax
// 007a0f51  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 007a0f57  85c0                 test eax, eax
// 007a0f59  7406                 je 0x7a0f61
// 007a0f5b  83782000             cmp dword ptr [eax + 0x20], 0
// 007a0f5f  750d                 jne 0x7a0f6e
// 007a0f61  5f                   pop edi
// 007a0f62  b801000000           mov eax, 1
// 007a0f67  5e                   pop esi
// 007a0f68  83c418               add esp, 0x18
// 007a0f6b  c20c00               ret 0xc
// 007a0f6e  53                   push ebx
// 007a0f6f  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 007a0f73  55                   push ebp
// 007a0f74  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 007a0f78  50                   push eax
// 007a0f79  8d4c241c             lea ecx, [esp + 0x1c]
// 007a0f7d  e8eef4fcff           call 0x770470
// 007a0f82  55                   push ebp
// 007a0f83  53                   push ebx
// 007a0f84  50                   push eax
// 007a0f85  ff15c0ed8900         call dword ptr [0x89edc0]
// 007a0f8b  85c0                 test eax, eax
// 007a0f8d  746d                 je 0x7a0ffc
// 007a0f8f  b903000000           mov ecx, 3
// 007a0f94  66890f               mov word ptr [edi], cx
// 007a0f97  c7470800000000       mov dword ptr [edi + 8], 0
// 007a0f9e  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 007a0fa4  8d542410             lea edx, [esp + 0x10]
// 007a0fa8  895c2410             mov dword ptr [esp + 0x10], ebx
// 007a0fac  896c2414             mov dword ptr [esp + 0x14], ebp
// 007a0fb0  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007a0fb3  52                   push edx
// 007a0fb4  51                   push ecx
// 007a0fb5  ff1530ee8900         call dword ptr [0x89ee30]
// 007a0fbb  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 007a0fc1  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 007a0fc7  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 007a0fcd  89542418             mov dword ptr [esp + 0x18], edx
// 007a0fd1  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 007a0fd7  8944241c             mov dword ptr [esp + 0x1c], eax
// 007a0fdb  8b442414             mov eax, dword ptr [esp + 0x14]
// 007a0fdf  894c2420             mov dword ptr [esp + 0x20], ecx
// 007a0fe3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007a0fe7  50                   push eax
// 007a0fe8  89542428             mov dword ptr [esp + 0x28], edx
// 007a0fec  51                   push ecx
// 007a0fed  8d542420             lea edx, [esp + 0x20]
// 007a0ff1  52                   push edx
// 007a0ff2  ff15c0ed8900         call dword ptr [0x89edc0]
// 007a0ff8  85c0                 test eax, eax
// 007a0ffa  750f                 jne 0x7a100b
// 007a0ffc  5d                   pop ebp
// 007a0ffd  5b                   pop ebx
// 007a0ffe  5f                   pop edi
// 007a0fff  b801000000           mov eax, 1
// 007a1004  5e                   pop esi
// 007a1005  83c418               add esp, 0x18
// 007a1008  c20c00               ret 0xc
// 007a100b  8b442414             mov eax, dword ptr [esp + 0x14]
// 007a100f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007a1013  6a00                 push 0
// 007a1015  50                   push eax
// 007a1016  51                   push ecx
// 007a1017  8d4ee0               lea ecx, [esi - 0x20]
// 007a101a  e801eaffff           call 0x79fa20
// 007a101f  83f8ff               cmp eax, -1
// 007a1022  7404                 je 0x7a1028
// 007a1024  40                   inc eax
// 007a1025  894708               mov dword ptr [edi + 8], eax
// 007a1028  5d                   pop ebp
// 007a1029  5b                   pop ebx
// 007a102a  5f                   pop edi
// 007a102b  33c0                 xor eax, eax
// 007a102d  5e                   pop esi
// 007a102e  83c418               add esp, 0x18
// 007a1031  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?AccessibleHitTest@CXTPControlGallery@@MAEJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
