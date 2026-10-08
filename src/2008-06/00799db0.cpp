// from server: 100% by auto
// roc 2008-06 00799db0  unit: CXTPRibbonControlTab  size: 263 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00799db0
//
// 00799db0  83ec18               sub esp, 0x18
// 00799db3  56                   push esi
// 00799db4  57                   push edi
// 00799db5  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00799db9  8bf1                 mov esi, ecx
// 00799dbb  85ff                 test edi, edi
// 00799dbd  750d                 jne 0x799dcc
// 00799dbf  5f                   pop edi
// 00799dc0  b857000780           mov eax, 0x80070057
// 00799dc5  5e                   pop esi
// 00799dc6  83c418               add esp, 0x18
// 00799dc9  c20c00               ret 0xc
// 00799dcc  33c0                 xor eax, eax
// 00799dce  668907               mov word ptr [edi], ax
// 00799dd1  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 00799dd7  85c0                 test eax, eax
// 00799dd9  7406                 je 0x799de1
// 00799ddb  83782000             cmp dword ptr [eax + 0x20], 0
// 00799ddf  750d                 jne 0x799dee
// 00799de1  5f                   pop edi
// 00799de2  b801000000           mov eax, 1
// 00799de7  5e                   pop esi
// 00799de8  83c418               add esp, 0x18
// 00799deb  c20c00               ret 0xc
// 00799dee  53                   push ebx
// 00799def  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00799df3  55                   push ebp
// 00799df4  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00799df8  50                   push eax
// 00799df9  8d4c241c             lea ecx, [esp + 0x1c]
// 00799dfd  e8cedcf5ff           call 0x6f7ad0
// 00799e02  55                   push ebp
// 00799e03  53                   push ebx
// 00799e04  50                   push eax
// 00799e05  ff152c2d8000         call dword ptr [0x802d2c]
// 00799e0b  85c0                 test eax, eax
// 00799e0d  746d                 je 0x799e7c
// 00799e0f  b903000000           mov ecx, 3
// 00799e14  66890f               mov word ptr [edi], cx
// 00799e17  c7470800000000       mov dword ptr [edi + 8], 0
// 00799e1e  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 00799e24  8d542410             lea edx, [esp + 0x10]
// 00799e28  895c2410             mov dword ptr [esp + 0x10], ebx
// 00799e2c  896c2414             mov dword ptr [esp + 0x14], ebp
// 00799e30  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00799e33  52                   push edx
// 00799e34  51                   push ecx
// 00799e35  ff15a02d8000         call dword ptr [0x802da0]
// 00799e3b  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 00799e41  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 00799e47  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 00799e4d  89542418             mov dword ptr [esp + 0x18], edx
// 00799e51  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 00799e57  8944241c             mov dword ptr [esp + 0x1c], eax
// 00799e5b  8b442414             mov eax, dword ptr [esp + 0x14]
// 00799e5f  894c2420             mov dword ptr [esp + 0x20], ecx
// 00799e63  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00799e67  50                   push eax
// 00799e68  89542428             mov dword ptr [esp + 0x28], edx
// 00799e6c  51                   push ecx
// 00799e6d  8d542420             lea edx, [esp + 0x20]
// 00799e71  52                   push edx
// 00799e72  ff152c2d8000         call dword ptr [0x802d2c]
// 00799e78  85c0                 test eax, eax
// 00799e7a  750f                 jne 0x799e8b
// 00799e7c  5d                   pop ebp
// 00799e7d  5b                   pop ebx
// 00799e7e  5f                   pop edi
// 00799e7f  b801000000           mov eax, 1
// 00799e84  5e                   pop esi
// 00799e85  83c418               add esp, 0x18
// 00799e88  c20c00               ret 0xc
// 00799e8b  8b442414             mov eax, dword ptr [esp + 0x14]
// 00799e8f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00799e93  50                   push eax
// 00799e94  51                   push ecx
// 00799e95  8d8e64010000         lea ecx, [esi + 0x164]
// 00799e9b  e88025feff           call 0x77c420
// 00799ea0  85c0                 test eax, eax
// 00799ea2  7407                 je 0x799eab
// 00799ea4  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00799ea7  42                   inc edx
// 00799ea8  895708               mov dword ptr [edi + 8], edx
// 00799eab  5d                   pop ebp
// 00799eac  5b                   pop ebx
// 00799ead  5f                   pop edi
// 00799eae  33c0                 xor eax, eax
// 00799eb0  5e                   pop esi
// 00799eb1  83c418               add esp, 0x18
// 00799eb4  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonControlTab.cpp (function ?AccessibleHitTest@CXTPRibbonControlTab@@MAEJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonControlTab.cpp
