// roc 2009-12 0087be70  unit: CXTPControlGallery  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087be70
//
// 0087be70  83ec18               sub esp, 0x18
// 0087be73  56                   push esi
// 0087be74  57                   push edi
// 0087be75  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0087be79  8bf1                 mov esi, ecx
// 0087be7b  85ff                 test edi, edi
// 0087be7d  750d                 jne 0x87be8c
// 0087be7f  5f                   pop edi
// 0087be80  b857000780           mov eax, 0x80070057
// 0087be85  5e                   pop esi
// 0087be86  83c418               add esp, 0x18
// 0087be89  c20c00               ret 0xc
// 0087be8c  33c0                 xor eax, eax
// 0087be8e  668907               mov word ptr [edi], ax
// 0087be91  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 0087be97  85c0                 test eax, eax
// 0087be99  7406                 je 0x87bea1
// 0087be9b  83782000             cmp dword ptr [eax + 0x20], 0
// 0087be9f  750d                 jne 0x87beae
// 0087bea1  5f                   pop edi
// 0087bea2  b801000000           mov eax, 1
// 0087bea7  5e                   pop esi
// 0087bea8  83c418               add esp, 0x18
// 0087beab  c20c00               ret 0xc
// 0087beae  53                   push ebx
// 0087beaf  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0087beb3  55                   push ebp
// 0087beb4  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0087beb8  50                   push eax
// 0087beb9  8d4c241c             lea ecx, [esp + 0x1c]
// 0087bebd  e8aef3fcff           call 0x84b270
// 0087bec2  55                   push ebp
// 0087bec3  53                   push ebx
// 0087bec4  50                   push eax
// 0087bec5  ff155cca9800         call dword ptr [0x98ca5c]
// 0087becb  85c0                 test eax, eax
// 0087becd  746d                 je 0x87bf3c
// 0087becf  b903000000           mov ecx, 3
// 0087bed4  66890f               mov word ptr [edi], cx
// 0087bed7  c7470800000000       mov dword ptr [edi + 8], 0
// 0087bede  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 0087bee4  8d542410             lea edx, [esp + 0x10]
// 0087bee8  895c2410             mov dword ptr [esp + 0x10], ebx
// 0087beec  896c2414             mov dword ptr [esp + 0x14], ebp
// 0087bef0  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0087bef3  52                   push edx
// 0087bef4  51                   push ecx
// 0087bef5  ff1534cc9800         call dword ptr [0x98cc34]
// 0087befb  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 0087bf01  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 0087bf07  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 0087bf0d  89542418             mov dword ptr [esp + 0x18], edx
// 0087bf11  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 0087bf17  8944241c             mov dword ptr [esp + 0x1c], eax
// 0087bf1b  8b442414             mov eax, dword ptr [esp + 0x14]
// 0087bf1f  894c2420             mov dword ptr [esp + 0x20], ecx
// 0087bf23  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0087bf27  50                   push eax
// 0087bf28  89542428             mov dword ptr [esp + 0x28], edx
// 0087bf2c  51                   push ecx
// 0087bf2d  8d542420             lea edx, [esp + 0x20]
// 0087bf31  52                   push edx
// 0087bf32  ff155cca9800         call dword ptr [0x98ca5c]
// 0087bf38  85c0                 test eax, eax
// 0087bf3a  750f                 jne 0x87bf4b
// 0087bf3c  5d                   pop ebp
// 0087bf3d  5b                   pop ebx
// 0087bf3e  5f                   pop edi
// 0087bf3f  b801000000           mov eax, 1
// 0087bf44  5e                   pop esi
// 0087bf45  83c418               add esp, 0x18
// 0087bf48  c20c00               ret 0xc
// 0087bf4b  8b442414             mov eax, dword ptr [esp + 0x14]
// 0087bf4f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0087bf53  6a00                 push 0
// 0087bf55  50                   push eax
// 0087bf56  51                   push ecx
// 0087bf57  8d4ee0               lea ecx, [esi - 0x20]
// 0087bf5a  e801eaffff           call 0x87a960
// 0087bf5f  83f8ff               cmp eax, -1
// 0087bf62  7404                 je 0x87bf68
// 0087bf64  40                   inc eax
// 0087bf65  894708               mov dword ptr [edi + 8], eax
// 0087bf68  5d                   pop ebp
// 0087bf69  5b                   pop ebx
// 0087bf6a  5f                   pop edi
// 0087bf6b  33c0                 xor eax, eax
// 0087bf6d  5e                   pop esi
// 0087bf6e  83c418               add esp, 0x18
// 0087bf71  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?AccessibleHitTest@CXTPControlGallery@@MAEJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
