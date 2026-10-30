// roc 2011-06 0080de60  unit: CPatchedControlComboBox  size: 230 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080de60
//
// 0080de60  83ec18               sub esp, 0x18
// 0080de63  56                   push esi
// 0080de64  57                   push edi
// 0080de65  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0080de69  8bf1                 mov esi, ecx
// 0080de6b  85ff                 test edi, edi
// 0080de6d  750d                 jne 0x80de7c
// 0080de6f  5f                   pop edi
// 0080de70  b857000780           mov eax, 0x80070057
// 0080de75  5e                   pop esi
// 0080de76  83c418               add esp, 0x18
// 0080de79  c20c00               ret 0xc
// 0080de7c  33c0                 xor eax, eax
// 0080de7e  668907               mov word ptr [edi], ax
// 0080de81  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 0080de87  85c0                 test eax, eax
// 0080de89  7406                 je 0x80de91
// 0080de8b  83782000             cmp dword ptr [eax + 0x20], 0
// 0080de8f  750d                 jne 0x80de9e
// 0080de91  5f                   pop edi
// 0080de92  b801000000           mov eax, 1
// 0080de97  5e                   pop esi
// 0080de98  83c418               add esp, 0x18
// 0080de9b  c20c00               ret 0xc
// 0080de9e  53                   push ebx
// 0080de9f  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0080dea3  55                   push ebp
// 0080dea4  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0080dea8  50                   push eax
// 0080dea9  8d4c241c             lea ecx, [esp + 0x1c]
// 0080dead  e87eee0400           call 0x85cd30
// 0080deb2  55                   push ebp
// 0080deb3  53                   push ebx
// 0080deb4  50                   push eax
// 0080deb5  ff15101ca400         call dword ptr [0xa41c10]
// 0080debb  85c0                 test eax, eax
// 0080debd  750f                 jne 0x80dece
// 0080debf  5d                   pop ebp
// 0080dec0  5b                   pop ebx
// 0080dec1  5f                   pop edi
// 0080dec2  b801000000           mov eax, 1
// 0080dec7  5e                   pop esi
// 0080dec8  83c418               add esp, 0x18
// 0080decb  c20c00               ret 0xc
// 0080dece  b903000000           mov ecx, 3
// 0080ded3  66890f               mov word ptr [edi], cx
// 0080ded6  c7470800000000       mov dword ptr [edi + 8], 0
// 0080dedd  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 0080dee3  8d542410             lea edx, [esp + 0x10]
// 0080dee7  895c2410             mov dword ptr [esp + 0x10], ebx
// 0080deeb  896c2414             mov dword ptr [esp + 0x14], ebp
// 0080deef  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0080def2  52                   push edx
// 0080def3  51                   push ecx
// 0080def4  ff15f419a400         call dword ptr [0xa419f4]
// 0080defa  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 0080df00  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 0080df06  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 0080df0c  89542418             mov dword ptr [esp + 0x18], edx
// 0080df10  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 0080df16  8944241c             mov dword ptr [esp + 0x1c], eax
// 0080df1a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0080df1e  894c2420             mov dword ptr [esp + 0x20], ecx
// 0080df22  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0080df26  50                   push eax
// 0080df27  89542428             mov dword ptr [esp + 0x28], edx
// 0080df2b  51                   push ecx
// 0080df2c  8d542420             lea edx, [esp + 0x20]
// 0080df30  52                   push edx
// 0080df31  ff15101ca400         call dword ptr [0xa41c10]
// 0080df37  5d                   pop ebp
// 0080df38  f7d8                 neg eax
// 0080df3a  5b                   pop ebx
// 0080df3b  1bc0                 sbb eax, eax
// 0080df3d  5f                   pop edi
// 0080df3e  40                   inc eax
// 0080df3f  5e                   pop esi
// 0080df40  83c418               add esp, 0x18
// 0080df43  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?AccessibleHitTest@CXTPControl@@MAEJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
