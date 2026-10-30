// roc 2010-06 007ab870  unit: CPatchedControlComboBox  size: 230 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ab870
//
// 007ab870  83ec18               sub esp, 0x18
// 007ab873  56                   push esi
// 007ab874  57                   push edi
// 007ab875  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 007ab879  8bf1                 mov esi, ecx
// 007ab87b  85ff                 test edi, edi
// 007ab87d  750d                 jne 0x7ab88c
// 007ab87f  5f                   pop edi
// 007ab880  b857000780           mov eax, 0x80070057
// 007ab885  5e                   pop esi
// 007ab886  83c418               add esp, 0x18
// 007ab889  c20c00               ret 0xc
// 007ab88c  33c0                 xor eax, eax
// 007ab88e  668907               mov word ptr [edi], ax
// 007ab891  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 007ab897  85c0                 test eax, eax
// 007ab899  7406                 je 0x7ab8a1
// 007ab89b  83782000             cmp dword ptr [eax + 0x20], 0
// 007ab89f  750d                 jne 0x7ab8ae
// 007ab8a1  5f                   pop edi
// 007ab8a2  b801000000           mov eax, 1
// 007ab8a7  5e                   pop esi
// 007ab8a8  83c418               add esp, 0x18
// 007ab8ab  c20c00               ret 0xc
// 007ab8ae  53                   push ebx
// 007ab8af  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 007ab8b3  55                   push ebp
// 007ab8b4  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 007ab8b8  50                   push eax
// 007ab8b9  8d4c241c             lea ecx, [esp + 0x1c]
// 007ab8bd  e8ee390500           call 0x7ff2b0
// 007ab8c2  55                   push ebp
// 007ab8c3  53                   push ebx
// 007ab8c4  50                   push eax
// 007ab8c5  ff15e0bb9e00         call dword ptr [0x9ebbe0]
// 007ab8cb  85c0                 test eax, eax
// 007ab8cd  750f                 jne 0x7ab8de
// 007ab8cf  5d                   pop ebp
// 007ab8d0  5b                   pop ebx
// 007ab8d1  5f                   pop edi
// 007ab8d2  b801000000           mov eax, 1
// 007ab8d7  5e                   pop esi
// 007ab8d8  83c418               add esp, 0x18
// 007ab8db  c20c00               ret 0xc
// 007ab8de  b903000000           mov ecx, 3
// 007ab8e3  66890f               mov word ptr [edi], cx
// 007ab8e6  c7470800000000       mov dword ptr [edi + 8], 0
// 007ab8ed  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 007ab8f3  8d542410             lea edx, [esp + 0x10]
// 007ab8f7  895c2410             mov dword ptr [esp + 0x10], ebx
// 007ab8fb  896c2414             mov dword ptr [esp + 0x14], ebp
// 007ab8ff  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007ab902  52                   push edx
// 007ab903  51                   push ecx
// 007ab904  ff1578bc9e00         call dword ptr [0x9ebc78]
// 007ab90a  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 007ab910  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 007ab916  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 007ab91c  89542418             mov dword ptr [esp + 0x18], edx
// 007ab920  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 007ab926  8944241c             mov dword ptr [esp + 0x1c], eax
// 007ab92a  8b442414             mov eax, dword ptr [esp + 0x14]
// 007ab92e  894c2420             mov dword ptr [esp + 0x20], ecx
// 007ab932  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007ab936  50                   push eax
// 007ab937  89542428             mov dword ptr [esp + 0x28], edx
// 007ab93b  51                   push ecx
// 007ab93c  8d542420             lea edx, [esp + 0x20]
// 007ab940  52                   push edx
// 007ab941  ff15e0bb9e00         call dword ptr [0x9ebbe0]
// 007ab947  5d                   pop ebp
// 007ab948  f7d8                 neg eax
// 007ab94a  5b                   pop ebx
// 007ab94b  1bc0                 sbb eax, eax
// 007ab94d  5f                   pop edi
// 007ab94e  40                   inc eax
// 007ab94f  5e                   pop esi
// 007ab950  83c418               add esp, 0x18
// 007ab953  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?AccessibleHitTest@CXTPControl@@MAEJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
