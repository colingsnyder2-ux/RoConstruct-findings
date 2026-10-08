// roc 2009-06 00721080  unit: CPatchedControlComboBox  size: 230 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00721080
//
// 00721080  83ec18               sub esp, 0x18
// 00721083  56                   push esi
// 00721084  57                   push edi
// 00721085  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00721089  8bf1                 mov esi, ecx
// 0072108b  85ff                 test edi, edi
// 0072108d  750d                 jne 0x72109c
// 0072108f  5f                   pop edi
// 00721090  b857000780           mov eax, 0x80070057
// 00721095  5e                   pop esi
// 00721096  83c418               add esp, 0x18
// 00721099  c20c00               ret 0xc
// 0072109c  33c0                 xor eax, eax
// 0072109e  668907               mov word ptr [edi], ax
// 007210a1  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 007210a7  85c0                 test eax, eax
// 007210a9  7406                 je 0x7210b1
// 007210ab  83782000             cmp dword ptr [eax + 0x20], 0
// 007210af  750d                 jne 0x7210be
// 007210b1  5f                   pop edi
// 007210b2  b801000000           mov eax, 1
// 007210b7  5e                   pop esi
// 007210b8  83c418               add esp, 0x18
// 007210bb  c20c00               ret 0xc
// 007210be  53                   push ebx
// 007210bf  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 007210c3  55                   push ebp
// 007210c4  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 007210c8  50                   push eax
// 007210c9  8d4c241c             lea ecx, [esp + 0x1c]
// 007210cd  e89ef30400           call 0x770470
// 007210d2  55                   push ebp
// 007210d3  53                   push ebx
// 007210d4  50                   push eax
// 007210d5  ff15c0ed8900         call dword ptr [0x89edc0]
// 007210db  85c0                 test eax, eax
// 007210dd  750f                 jne 0x7210ee
// 007210df  5d                   pop ebp
// 007210e0  5b                   pop ebx
// 007210e1  5f                   pop edi
// 007210e2  b801000000           mov eax, 1
// 007210e7  5e                   pop esi
// 007210e8  83c418               add esp, 0x18
// 007210eb  c20c00               ret 0xc
// 007210ee  b903000000           mov ecx, 3
// 007210f3  66890f               mov word ptr [edi], cx
// 007210f6  c7470800000000       mov dword ptr [edi + 8], 0
// 007210fd  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 00721103  8d542410             lea edx, [esp + 0x10]
// 00721107  895c2410             mov dword ptr [esp + 0x10], ebx
// 0072110b  896c2414             mov dword ptr [esp + 0x14], ebp
// 0072110f  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00721112  52                   push edx
// 00721113  51                   push ecx
// 00721114  ff1530ee8900         call dword ptr [0x89ee30]
// 0072111a  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 00721120  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 00721126  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 0072112c  89542418             mov dword ptr [esp + 0x18], edx
// 00721130  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 00721136  8944241c             mov dword ptr [esp + 0x1c], eax
// 0072113a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0072113e  894c2420             mov dword ptr [esp + 0x20], ecx
// 00721142  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00721146  50                   push eax
// 00721147  89542428             mov dword ptr [esp + 0x28], edx
// 0072114b  51                   push ecx
// 0072114c  8d542420             lea edx, [esp + 0x20]
// 00721150  52                   push edx
// 00721151  ff15c0ed8900         call dword ptr [0x89edc0]
// 00721157  5d                   pop ebp
// 00721158  f7d8                 neg eax
// 0072115a  5b                   pop ebx
// 0072115b  1bc0                 sbb eax, eax
// 0072115d  5f                   pop edi
// 0072115e  40                   inc eax
// 0072115f  5e                   pop esi
// 00721160  83c418               add esp, 0x18
// 00721163  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?AccessibleHitTest@CXTPControl@@MAEJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
