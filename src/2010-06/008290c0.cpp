// roc 2010-06 008290c0  unit: CXTPControlGallery  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008290c0
//
// 008290c0  83ec18               sub esp, 0x18
// 008290c3  56                   push esi
// 008290c4  57                   push edi
// 008290c5  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 008290c9  8bf1                 mov esi, ecx
// 008290cb  85ff                 test edi, edi
// 008290cd  750d                 jne 0x8290dc
// 008290cf  5f                   pop edi
// 008290d0  b857000780           mov eax, 0x80070057
// 008290d5  5e                   pop esi
// 008290d6  83c418               add esp, 0x18
// 008290d9  c20c00               ret 0xc
// 008290dc  33c0                 xor eax, eax
// 008290de  668907               mov word ptr [edi], ax
// 008290e1  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 008290e7  85c0                 test eax, eax
// 008290e9  7406                 je 0x8290f1
// 008290eb  83782000             cmp dword ptr [eax + 0x20], 0
// 008290ef  750d                 jne 0x8290fe
// 008290f1  5f                   pop edi
// 008290f2  b801000000           mov eax, 1
// 008290f7  5e                   pop esi
// 008290f8  83c418               add esp, 0x18
// 008290fb  c20c00               ret 0xc
// 008290fe  53                   push ebx
// 008290ff  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00829103  55                   push ebp
// 00829104  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00829108  50                   push eax
// 00829109  8d4c241c             lea ecx, [esp + 0x1c]
// 0082910d  e89e61fdff           call 0x7ff2b0
// 00829112  55                   push ebp
// 00829113  53                   push ebx
// 00829114  50                   push eax
// 00829115  ff15e0bb9e00         call dword ptr [0x9ebbe0]
// 0082911b  85c0                 test eax, eax
// 0082911d  746d                 je 0x82918c
// 0082911f  b903000000           mov ecx, 3
// 00829124  66890f               mov word ptr [edi], cx
// 00829127  c7470800000000       mov dword ptr [edi + 8], 0
// 0082912e  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 00829134  8d542410             lea edx, [esp + 0x10]
// 00829138  895c2410             mov dword ptr [esp + 0x10], ebx
// 0082913c  896c2414             mov dword ptr [esp + 0x14], ebp
// 00829140  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00829143  52                   push edx
// 00829144  51                   push ecx
// 00829145  ff1578bc9e00         call dword ptr [0x9ebc78]
// 0082914b  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 00829151  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 00829157  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 0082915d  89542418             mov dword ptr [esp + 0x18], edx
// 00829161  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 00829167  8944241c             mov dword ptr [esp + 0x1c], eax
// 0082916b  8b442414             mov eax, dword ptr [esp + 0x14]
// 0082916f  894c2420             mov dword ptr [esp + 0x20], ecx
// 00829173  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00829177  50                   push eax
// 00829178  89542428             mov dword ptr [esp + 0x28], edx
// 0082917c  51                   push ecx
// 0082917d  8d542420             lea edx, [esp + 0x20]
// 00829181  52                   push edx
// 00829182  ff15e0bb9e00         call dword ptr [0x9ebbe0]
// 00829188  85c0                 test eax, eax
// 0082918a  750f                 jne 0x82919b
// 0082918c  5d                   pop ebp
// 0082918d  5b                   pop ebx
// 0082918e  5f                   pop edi
// 0082918f  b801000000           mov eax, 1
// 00829194  5e                   pop esi
// 00829195  83c418               add esp, 0x18
// 00829198  c20c00               ret 0xc
// 0082919b  8b442414             mov eax, dword ptr [esp + 0x14]
// 0082919f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008291a3  6a00                 push 0
// 008291a5  50                   push eax
// 008291a6  51                   push ecx
// 008291a7  8d4ee0               lea ecx, [esi - 0x20]
// 008291aa  e801eaffff           call 0x827bb0
// 008291af  83f8ff               cmp eax, -1
// 008291b2  7404                 je 0x8291b8
// 008291b4  40                   inc eax
// 008291b5  894708               mov dword ptr [edi + 8], eax
// 008291b8  5d                   pop ebp
// 008291b9  5b                   pop ebx
// 008291ba  5f                   pop edi
// 008291bb  33c0                 xor eax, eax
// 008291bd  5e                   pop esi
// 008291be  83c418               add esp, 0x18
// 008291c1  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?AccessibleHitTest@CXTPControlGallery@@MAEJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
