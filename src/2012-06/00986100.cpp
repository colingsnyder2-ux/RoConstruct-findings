// roc 2012-06 00986100  unit: CPatchedControlComboBox  size: 230 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00986100
//
// 00986100  83ec18               sub esp, 0x18
// 00986103  56                   push esi
// 00986104  57                   push edi
// 00986105  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00986109  8bf1                 mov esi, ecx
// 0098610b  85ff                 test edi, edi
// 0098610d  750d                 jne 0x98611c
// 0098610f  5f                   pop edi
// 00986110  b857000780           mov eax, 0x80070057
// 00986115  5e                   pop esi
// 00986116  83c418               add esp, 0x18
// 00986119  c20c00               ret 0xc
// 0098611c  33c0                 xor eax, eax
// 0098611e  668907               mov word ptr [edi], ax
// 00986121  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 00986127  85c0                 test eax, eax
// 00986129  7406                 je 0x986131
// 0098612b  83782000             cmp dword ptr [eax + 0x20], 0
// 0098612f  750d                 jne 0x98613e
// 00986131  5f                   pop edi
// 00986132  b801000000           mov eax, 1
// 00986137  5e                   pop esi
// 00986138  83c418               add esp, 0x18
// 0098613b  c20c00               ret 0xc
// 0098613e  53                   push ebx
// 0098613f  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00986143  55                   push ebp
// 00986144  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00986148  50                   push eax
// 00986149  8d4c241c             lea ecx, [esp + 0x1c]
// 0098614d  e8eeef0400           call 0x9d5140
// 00986152  55                   push ebp
// 00986153  53                   push ebx
// 00986154  50                   push eax
// 00986155  ff15483bb200         call dword ptr [0xb23b48]
// 0098615b  85c0                 test eax, eax
// 0098615d  750f                 jne 0x98616e
// 0098615f  5d                   pop ebp
// 00986160  5b                   pop ebx
// 00986161  5f                   pop edi
// 00986162  b801000000           mov eax, 1
// 00986167  5e                   pop esi
// 00986168  83c418               add esp, 0x18
// 0098616b  c20c00               ret 0xc
// 0098616e  b903000000           mov ecx, 3
// 00986173  66890f               mov word ptr [edi], cx
// 00986176  c7470800000000       mov dword ptr [edi + 8], 0
// 0098617d  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 00986183  8d542410             lea edx, [esp + 0x10]
// 00986187  895c2410             mov dword ptr [esp + 0x10], ebx
// 0098618b  896c2414             mov dword ptr [esp + 0x14], ebp
// 0098618f  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00986192  52                   push edx
// 00986193  51                   push ecx
// 00986194  ff15883ab200         call dword ptr [0xb23a88]
// 0098619a  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 009861a0  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 009861a6  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 009861ac  89542418             mov dword ptr [esp + 0x18], edx
// 009861b0  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 009861b6  8944241c             mov dword ptr [esp + 0x1c], eax
// 009861ba  8b442414             mov eax, dword ptr [esp + 0x14]
// 009861be  894c2420             mov dword ptr [esp + 0x20], ecx
// 009861c2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009861c6  50                   push eax
// 009861c7  89542428             mov dword ptr [esp + 0x28], edx
// 009861cb  51                   push ecx
// 009861cc  8d542420             lea edx, [esp + 0x20]
// 009861d0  52                   push edx
// 009861d1  ff15483bb200         call dword ptr [0xb23b48]
// 009861d7  5d                   pop ebp
// 009861d8  f7d8                 neg eax
// 009861da  5b                   pop ebx
// 009861db  1bc0                 sbb eax, eax
// 009861dd  5f                   pop edi
// 009861de  40                   inc eax
// 009861df  5e                   pop esi
// 009861e0  83c418               add esp, 0x18
// 009861e3  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?AccessibleHitTest@CXTPControl@@MAEJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
