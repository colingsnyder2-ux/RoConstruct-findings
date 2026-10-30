// from server: 100% by auto
// roc 2008-06 006ac9a0  unit: CPatchedControlComboBox  size: 230 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ac9a0
//
// 006ac9a0  83ec18               sub esp, 0x18
// 006ac9a3  56                   push esi
// 006ac9a4  57                   push edi
// 006ac9a5  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 006ac9a9  8bf1                 mov esi, ecx
// 006ac9ab  85ff                 test edi, edi
// 006ac9ad  750d                 jne 0x6ac9bc
// 006ac9af  5f                   pop edi
// 006ac9b0  b857000780           mov eax, 0x80070057
// 006ac9b5  5e                   pop esi
// 006ac9b6  83c418               add esp, 0x18
// 006ac9b9  c20c00               ret 0xc
// 006ac9bc  33c0                 xor eax, eax
// 006ac9be  668907               mov word ptr [edi], ax
// 006ac9c1  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 006ac9c7  85c0                 test eax, eax
// 006ac9c9  7406                 je 0x6ac9d1
// 006ac9cb  83782000             cmp dword ptr [eax + 0x20], 0
// 006ac9cf  750d                 jne 0x6ac9de
// 006ac9d1  5f                   pop edi
// 006ac9d2  b801000000           mov eax, 1
// 006ac9d7  5e                   pop esi
// 006ac9d8  83c418               add esp, 0x18
// 006ac9db  c20c00               ret 0xc
// 006ac9de  53                   push ebx
// 006ac9df  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 006ac9e3  55                   push ebp
// 006ac9e4  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 006ac9e8  50                   push eax
// 006ac9e9  8d4c241c             lea ecx, [esp + 0x1c]
// 006ac9ed  e8deb00400           call 0x6f7ad0
// 006ac9f2  55                   push ebp
// 006ac9f3  53                   push ebx
// 006ac9f4  50                   push eax
// 006ac9f5  ff152c2d8000         call dword ptr [0x802d2c]
// 006ac9fb  85c0                 test eax, eax
// 006ac9fd  750f                 jne 0x6aca0e
// 006ac9ff  5d                   pop ebp
// 006aca00  5b                   pop ebx
// 006aca01  5f                   pop edi
// 006aca02  b801000000           mov eax, 1
// 006aca07  5e                   pop esi
// 006aca08  83c418               add esp, 0x18
// 006aca0b  c20c00               ret 0xc
// 006aca0e  b903000000           mov ecx, 3
// 006aca13  66890f               mov word ptr [edi], cx
// 006aca16  c7470800000000       mov dword ptr [edi + 8], 0
// 006aca1d  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 006aca23  8d542410             lea edx, [esp + 0x10]
// 006aca27  895c2410             mov dword ptr [esp + 0x10], ebx
// 006aca2b  896c2414             mov dword ptr [esp + 0x14], ebp
// 006aca2f  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006aca32  52                   push edx
// 006aca33  51                   push ecx
// 006aca34  ff15a02d8000         call dword ptr [0x802da0]
// 006aca3a  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 006aca40  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 006aca46  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 006aca4c  89542418             mov dword ptr [esp + 0x18], edx
// 006aca50  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 006aca56  8944241c             mov dword ptr [esp + 0x1c], eax
// 006aca5a  8b442414             mov eax, dword ptr [esp + 0x14]
// 006aca5e  894c2420             mov dword ptr [esp + 0x20], ecx
// 006aca62  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006aca66  50                   push eax
// 006aca67  89542428             mov dword ptr [esp + 0x28], edx
// 006aca6b  51                   push ecx
// 006aca6c  8d542420             lea edx, [esp + 0x20]
// 006aca70  52                   push edx
// 006aca71  ff152c2d8000         call dword ptr [0x802d2c]
// 006aca77  5d                   pop ebp
// 006aca78  f7d8                 neg eax
// 006aca7a  5b                   pop ebx
// 006aca7b  1bc0                 sbb eax, eax
// 006aca7d  5f                   pop edi
// 006aca7e  40                   inc eax
// 006aca7f  5e                   pop esi
// 006aca80  83c418               add esp, 0x18
// 006aca83  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?AccessibleHitTest@CXTPControl@@MAEJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
