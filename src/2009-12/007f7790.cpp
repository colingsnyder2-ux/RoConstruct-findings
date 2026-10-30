// roc 2009-12 007f7790  unit: CPatchedControlComboBox  size: 230 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f7790
//
// 007f7790  83ec18               sub esp, 0x18
// 007f7793  56                   push esi
// 007f7794  57                   push edi
// 007f7795  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 007f7799  8bf1                 mov esi, ecx
// 007f779b  85ff                 test edi, edi
// 007f779d  750d                 jne 0x7f77ac
// 007f779f  5f                   pop edi
// 007f77a0  b857000780           mov eax, 0x80070057
// 007f77a5  5e                   pop esi
// 007f77a6  83c418               add esp, 0x18
// 007f77a9  c20c00               ret 0xc
// 007f77ac  33c0                 xor eax, eax
// 007f77ae  668907               mov word ptr [edi], ax
// 007f77b1  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 007f77b7  85c0                 test eax, eax
// 007f77b9  7406                 je 0x7f77c1
// 007f77bb  83782000             cmp dword ptr [eax + 0x20], 0
// 007f77bf  750d                 jne 0x7f77ce
// 007f77c1  5f                   pop edi
// 007f77c2  b801000000           mov eax, 1
// 007f77c7  5e                   pop esi
// 007f77c8  83c418               add esp, 0x18
// 007f77cb  c20c00               ret 0xc
// 007f77ce  53                   push ebx
// 007f77cf  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 007f77d3  55                   push ebp
// 007f77d4  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 007f77d8  50                   push eax
// 007f77d9  8d4c241c             lea ecx, [esp + 0x1c]
// 007f77dd  e88e3a0500           call 0x84b270
// 007f77e2  55                   push ebp
// 007f77e3  53                   push ebx
// 007f77e4  50                   push eax
// 007f77e5  ff155cca9800         call dword ptr [0x98ca5c]
// 007f77eb  85c0                 test eax, eax
// 007f77ed  750f                 jne 0x7f77fe
// 007f77ef  5d                   pop ebp
// 007f77f0  5b                   pop ebx
// 007f77f1  5f                   pop edi
// 007f77f2  b801000000           mov eax, 1
// 007f77f7  5e                   pop esi
// 007f77f8  83c418               add esp, 0x18
// 007f77fb  c20c00               ret 0xc
// 007f77fe  b903000000           mov ecx, 3
// 007f7803  66890f               mov word ptr [edi], cx
// 007f7806  c7470800000000       mov dword ptr [edi + 8], 0
// 007f780d  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 007f7813  8d542410             lea edx, [esp + 0x10]
// 007f7817  895c2410             mov dword ptr [esp + 0x10], ebx
// 007f781b  896c2414             mov dword ptr [esp + 0x14], ebp
// 007f781f  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007f7822  52                   push edx
// 007f7823  51                   push ecx
// 007f7824  ff1534cc9800         call dword ptr [0x98cc34]
// 007f782a  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 007f7830  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 007f7836  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 007f783c  89542418             mov dword ptr [esp + 0x18], edx
// 007f7840  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 007f7846  8944241c             mov dword ptr [esp + 0x1c], eax
// 007f784a  8b442414             mov eax, dword ptr [esp + 0x14]
// 007f784e  894c2420             mov dword ptr [esp + 0x20], ecx
// 007f7852  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007f7856  50                   push eax
// 007f7857  89542428             mov dword ptr [esp + 0x28], edx
// 007f785b  51                   push ecx
// 007f785c  8d542420             lea edx, [esp + 0x20]
// 007f7860  52                   push edx
// 007f7861  ff155cca9800         call dword ptr [0x98ca5c]
// 007f7867  5d                   pop ebp
// 007f7868  f7d8                 neg eax
// 007f786a  5b                   pop ebx
// 007f786b  1bc0                 sbb eax, eax
// 007f786d  5f                   pop edi
// 007f786e  40                   inc eax
// 007f786f  5e                   pop esi
// 007f7870  83c418               add esp, 0x18
// 007f7873  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?AccessibleHitTest@CXTPControl@@MAEJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
