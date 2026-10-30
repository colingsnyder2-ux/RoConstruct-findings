// roc 2009-12 008f10c0  unit: CXTPRibbonControlTab  size: 263 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f10c0
//
// 008f10c0  83ec18               sub esp, 0x18
// 008f10c3  56                   push esi
// 008f10c4  57                   push edi
// 008f10c5  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 008f10c9  8bf1                 mov esi, ecx
// 008f10cb  85ff                 test edi, edi
// 008f10cd  750d                 jne 0x8f10dc
// 008f10cf  5f                   pop edi
// 008f10d0  b857000780           mov eax, 0x80070057
// 008f10d5  5e                   pop esi
// 008f10d6  83c418               add esp, 0x18
// 008f10d9  c20c00               ret 0xc
// 008f10dc  33c0                 xor eax, eax
// 008f10de  668907               mov word ptr [edi], ax
// 008f10e1  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 008f10e7  85c0                 test eax, eax
// 008f10e9  7406                 je 0x8f10f1
// 008f10eb  83782000             cmp dword ptr [eax + 0x20], 0
// 008f10ef  750d                 jne 0x8f10fe
// 008f10f1  5f                   pop edi
// 008f10f2  b801000000           mov eax, 1
// 008f10f7  5e                   pop esi
// 008f10f8  83c418               add esp, 0x18
// 008f10fb  c20c00               ret 0xc
// 008f10fe  53                   push ebx
// 008f10ff  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 008f1103  55                   push ebp
// 008f1104  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 008f1108  50                   push eax
// 008f1109  8d4c241c             lea ecx, [esp + 0x1c]
// 008f110d  e85ea1f5ff           call 0x84b270
// 008f1112  55                   push ebp
// 008f1113  53                   push ebx
// 008f1114  50                   push eax
// 008f1115  ff155cca9800         call dword ptr [0x98ca5c]
// 008f111b  85c0                 test eax, eax
// 008f111d  746d                 je 0x8f118c
// 008f111f  b903000000           mov ecx, 3
// 008f1124  66890f               mov word ptr [edi], cx
// 008f1127  c7470800000000       mov dword ptr [edi + 8], 0
// 008f112e  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 008f1134  8d542410             lea edx, [esp + 0x10]
// 008f1138  895c2410             mov dword ptr [esp + 0x10], ebx
// 008f113c  896c2414             mov dword ptr [esp + 0x14], ebp
// 008f1140  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008f1143  52                   push edx
// 008f1144  51                   push ecx
// 008f1145  ff1534cc9800         call dword ptr [0x98cc34]
// 008f114b  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 008f1151  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 008f1157  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 008f115d  89542418             mov dword ptr [esp + 0x18], edx
// 008f1161  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 008f1167  8944241c             mov dword ptr [esp + 0x1c], eax
// 008f116b  8b442414             mov eax, dword ptr [esp + 0x14]
// 008f116f  894c2420             mov dword ptr [esp + 0x20], ecx
// 008f1173  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008f1177  50                   push eax
// 008f1178  89542428             mov dword ptr [esp + 0x28], edx
// 008f117c  51                   push ecx
// 008f117d  8d542420             lea edx, [esp + 0x20]
// 008f1181  52                   push edx
// 008f1182  ff155cca9800         call dword ptr [0x98ca5c]
// 008f1188  85c0                 test eax, eax
// 008f118a  750f                 jne 0x8f119b
// 008f118c  5d                   pop ebp
// 008f118d  5b                   pop ebx
// 008f118e  5f                   pop edi
// 008f118f  b801000000           mov eax, 1
// 008f1194  5e                   pop esi
// 008f1195  83c418               add esp, 0x18
// 008f1198  c20c00               ret 0xc
// 008f119b  8b442414             mov eax, dword ptr [esp + 0x14]
// 008f119f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008f11a3  50                   push eax
// 008f11a4  51                   push ecx
// 008f11a5  8d8e64010000         lea ecx, [esi + 0x164]
// 008f11ab  e8e0e4fdff           call 0x8cf690
// 008f11b0  85c0                 test eax, eax
// 008f11b2  7407                 je 0x8f11bb
// 008f11b4  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008f11b7  42                   inc edx
// 008f11b8  895708               mov dword ptr [edi + 8], edx
// 008f11bb  5d                   pop ebp
// 008f11bc  5b                   pop ebx
// 008f11bd  5f                   pop edi
// 008f11be  33c0                 xor eax, eax
// 008f11c0  5e                   pop esi
// 008f11c1  83c418               add esp, 0x18
// 008f11c4  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonControlTab.cpp (function ?AccessibleHitTest@CXTPRibbonControlTab@@MAEJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonControlTab.cpp
