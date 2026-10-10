// roc 2008-06 0072b390  unit: CXTPRibbonTheme  size: 345 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072b390
//
// 0072b390  83ec20               sub esp, 0x20
// 0072b393  56                   push esi
// 0072b394  57                   push edi
// 0072b395  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0072b399  8bf1                 mov esi, ecx
// 0072b39b  b902000000           mov ecx, 2
// 0072b3a0  398ff8000000         cmp dword ptr [edi + 0xf8], ecx
// 0072b3a6  0f8517010000         jne 0x72b4c3
// 0072b3ac  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 0072b3b1  7511                 jne 0x72b3c4
// 0072b3b3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0072b3b7  5f                   pop edi
// 0072b3b8  8908                 mov dword ptr [eax], ecx
// 0072b3ba  894804               mov dword ptr [eax + 4], ecx
// 0072b3bd  5e                   pop esi
// 0072b3be  83c420               add esp, 0x20
// 0072b3c1  c21400               ret 0x14
// 0072b3c4  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0072b3c7  53                   push ebx
// 0072b3c8  55                   push ebp
// 0072b3c9  8d442420             lea eax, [esp + 0x20]
// 0072b3cd  50                   push eax
// 0072b3ce  51                   push ecx
// 0072b3cf  ff15842d8000         call dword ptr [0x802d84]
// 0072b3d5  8b442440             mov eax, dword ptr [esp + 0x40]
// 0072b3d9  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 0072b3e0  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 0072b3e6  8b88cc000000         mov ecx, dword ptr [eax + 0xcc]
// 0072b3ec  8b98c4000000         mov ebx, dword ptr [eax + 0xc4]
// 0072b3f2  8ba8c8000000         mov ebp, dword ptr [eax + 0xc8]
// 0072b3f8  89542410             mov dword ptr [esp + 0x10], edx
// 0072b3fc  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0072b400  7549                 jne 0x72b44b
// 0072b402  8b16                 mov edx, dword ptr [esi]
// 0072b404  8b8204010000         mov eax, dword ptr [edx + 0x104]
// 0072b40a  57                   push edi
// 0072b40b  8bce                 mov ecx, esi
// 0072b40d  ffd0                 call eax
// 0072b40f  038680000000         add eax, dword ptr [esi + 0x80]
// 0072b415  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0072b419  68c5c5c500           push 0xc5c5c5
// 0072b41e  55                   push ebp
// 0072b41f  8d7c08ff             lea edi, [eax + ecx - 1]
// 0072b423  8b442440             mov eax, dword ptr [esp + 0x40]
// 0072b427  8d53fe               lea edx, [ebx - 2]
// 0072b42a  52                   push edx
// 0072b42b  57                   push edi
// 0072b42c  50                   push eax
// 0072b42d  8bce                 mov ecx, esi
// 0072b42f  e86c2ef8ff           call 0x6ae2a0
// 0072b434  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0072b438  68f5f5f500           push 0xf5f5f5
// 0072b43d  55                   push ebp
// 0072b43e  4b                   dec ebx
// 0072b43f  53                   push ebx
// 0072b440  57                   push edi
// 0072b441  51                   push ecx
// 0072b442  8bce                 mov ecx, esi
// 0072b444  e8572ef8ff           call 0x6ae2a0
// 0072b449  eb5d                 jmp 0x72b4a8
// 0072b44b  8b88b0000000         mov ecx, dword ptr [eax + 0xb0]
// 0072b451  8bb8b0000000         mov edi, dword ptr [eax + 0xb0]
// 0072b457  8b98b8000000         mov ebx, dword ptr [eax + 0xb8]
// 0072b45d  894c2410             mov dword ptr [esp + 0x10], ecx
// 0072b461  8b88b4000000         mov ecx, dword ptr [eax + 0xb4]
// 0072b467  894c2414             mov dword ptr [esp + 0x14], ecx
// 0072b46b  8b88b8000000         mov ecx, dword ptr [eax + 0xb8]
// 0072b471  894c2418             mov dword ptr [esp + 0x18], ecx
// 0072b475  8b88bc000000         mov ecx, dword ptr [eax + 0xbc]
// 0072b47b  897c2410             mov dword ptr [esp + 0x10], edi
// 0072b47f  8bb8b4000000         mov edi, dword ptr [eax + 0xb4]
// 0072b485  8bc1                 mov eax, ecx
// 0072b487  68c5c5c500           push 0xc5c5c5
// 0072b48c  41                   inc ecx
// 0072b48d  51                   push ecx
// 0072b48e  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0072b492  4f                   dec edi
// 0072b493  57                   push edi
// 0072b494  83c2fe               add edx, -2
// 0072b497  52                   push edx
// 0072b498  51                   push ecx
// 0072b499  8bce                 mov ecx, esi
// 0072b49b  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0072b49f  89442430             mov dword ptr [esp + 0x30], eax
// 0072b4a3  e8282ef8ff           call 0x6ae2d0
// 0072b4a8  8b442434             mov eax, dword ptr [esp + 0x34]
// 0072b4ac  5d                   pop ebp
// 0072b4ad  5b                   pop ebx
// 0072b4ae  5f                   pop edi
// 0072b4af  c70002000000         mov dword ptr [eax], 2
// 0072b4b5  c7400402000000       mov dword ptr [eax + 4], 2
// 0072b4bc  5e                   pop esi
// 0072b4bd  83c420               add esp, 0x20
// 0072b4c0  c21400               ret 0x14
// 0072b4c3  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0072b4c7  8b442438             mov eax, dword ptr [esp + 0x38]
// 0072b4cb  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0072b4cf  52                   push edx
// 0072b4d0  50                   push eax
// 0072b4d1  57                   push edi
// 0072b4d2  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0072b4d6  51                   push ecx
// 0072b4d7  57                   push edi
// 0072b4d8  8bce                 mov ecx, esi
// 0072b4da  e871f40000           call 0x73a950
// 0072b4df  8bc7                 mov eax, edi
// 0072b4e1  5f                   pop edi
// 0072b4e2  5e                   pop esi
// 0072b4e3  83c420               add esp, 0x20
// 0072b4e6  c21400               ret 0x14
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawCommandBarSeparator@CXTPRibbonTheme@@MAE?AVCSize@@PAVCDC@@PAVCXTPCommandBar@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonTheme.cpp
