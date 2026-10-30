// roc 2009-12 008749a0  unit: CXTPRibbonTheme  size: 345 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008749a0
//
// 008749a0  83ec20               sub esp, 0x20
// 008749a3  56                   push esi
// 008749a4  57                   push edi
// 008749a5  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 008749a9  8bf1                 mov esi, ecx
// 008749ab  b902000000           mov ecx, 2
// 008749b0  398ff8000000         cmp dword ptr [edi + 0xf8], ecx
// 008749b6  0f8517010000         jne 0x874ad3
// 008749bc  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 008749c1  7511                 jne 0x8749d4
// 008749c3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008749c7  5f                   pop edi
// 008749c8  8908                 mov dword ptr [eax], ecx
// 008749ca  894804               mov dword ptr [eax + 4], ecx
// 008749cd  5e                   pop esi
// 008749ce  83c420               add esp, 0x20
// 008749d1  c21400               ret 0x14
// 008749d4  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 008749d7  53                   push ebx
// 008749d8  55                   push ebp
// 008749d9  8d442420             lea eax, [esp + 0x20]
// 008749dd  50                   push eax
// 008749de  51                   push ecx
// 008749df  ff1550cc9800         call dword ptr [0x98cc50]
// 008749e5  8b442440             mov eax, dword ptr [esp + 0x40]
// 008749e9  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 008749f0  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 008749f6  8b88cc000000         mov ecx, dword ptr [eax + 0xcc]
// 008749fc  8b98c4000000         mov ebx, dword ptr [eax + 0xc4]
// 00874a02  8ba8c8000000         mov ebp, dword ptr [eax + 0xc8]
// 00874a08  89542410             mov dword ptr [esp + 0x10], edx
// 00874a0c  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00874a10  7549                 jne 0x874a5b
// 00874a12  8b16                 mov edx, dword ptr [esi]
// 00874a14  8b8204010000         mov eax, dword ptr [edx + 0x104]
// 00874a1a  57                   push edi
// 00874a1b  8bce                 mov ecx, esi
// 00874a1d  ffd0                 call eax
// 00874a1f  038680000000         add eax, dword ptr [esi + 0x80]
// 00874a25  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00874a29  68c5c5c500           push 0xc5c5c5
// 00874a2e  55                   push ebp
// 00874a2f  8d7c08ff             lea edi, [eax + ecx - 1]
// 00874a33  8b442440             mov eax, dword ptr [esp + 0x40]
// 00874a37  8d53fe               lea edx, [ebx - 2]
// 00874a3a  52                   push edx
// 00874a3b  57                   push edi
// 00874a3c  50                   push eax
// 00874a3d  8bce                 mov ecx, esi
// 00874a3f  e82c8ef8ff           call 0x7fd870
// 00874a44  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00874a48  68f5f5f500           push 0xf5f5f5
// 00874a4d  55                   push ebp
// 00874a4e  4b                   dec ebx
// 00874a4f  53                   push ebx
// 00874a50  57                   push edi
// 00874a51  51                   push ecx
// 00874a52  8bce                 mov ecx, esi
// 00874a54  e8178ef8ff           call 0x7fd870
// 00874a59  eb5d                 jmp 0x874ab8
// 00874a5b  8b88b0000000         mov ecx, dword ptr [eax + 0xb0]
// 00874a61  8bb8b0000000         mov edi, dword ptr [eax + 0xb0]
// 00874a67  8b98b8000000         mov ebx, dword ptr [eax + 0xb8]
// 00874a6d  894c2410             mov dword ptr [esp + 0x10], ecx
// 00874a71  8b88b4000000         mov ecx, dword ptr [eax + 0xb4]
// 00874a77  894c2414             mov dword ptr [esp + 0x14], ecx
// 00874a7b  8b88b8000000         mov ecx, dword ptr [eax + 0xb8]
// 00874a81  894c2418             mov dword ptr [esp + 0x18], ecx
// 00874a85  8b88bc000000         mov ecx, dword ptr [eax + 0xbc]
// 00874a8b  897c2410             mov dword ptr [esp + 0x10], edi
// 00874a8f  8bb8b4000000         mov edi, dword ptr [eax + 0xb4]
// 00874a95  8bc1                 mov eax, ecx
// 00874a97  68c5c5c500           push 0xc5c5c5
// 00874a9c  41                   inc ecx
// 00874a9d  51                   push ecx
// 00874a9e  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00874aa2  4f                   dec edi
// 00874aa3  57                   push edi
// 00874aa4  83c2fe               add edx, -2
// 00874aa7  52                   push edx
// 00874aa8  51                   push ecx
// 00874aa9  8bce                 mov ecx, esi
// 00874aab  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00874aaf  89442430             mov dword ptr [esp + 0x30], eax
// 00874ab3  e8e88df8ff           call 0x7fd8a0
// 00874ab8  8b442434             mov eax, dword ptr [esp + 0x34]
// 00874abc  5d                   pop ebp
// 00874abd  5b                   pop ebx
// 00874abe  5f                   pop edi
// 00874abf  c70002000000         mov dword ptr [eax], 2
// 00874ac5  c7400402000000       mov dword ptr [eax + 4], 2
// 00874acc  5e                   pop esi
// 00874acd  83c420               add esp, 0x20
// 00874ad0  c21400               ret 0x14
// 00874ad3  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00874ad7  8b442438             mov eax, dword ptr [esp + 0x38]
// 00874adb  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00874adf  52                   push edx
// 00874ae0  50                   push eax
// 00874ae1  57                   push edi
// 00874ae2  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00874ae6  51                   push ecx
// 00874ae7  57                   push edi
// 00874ae8  8bce                 mov ecx, esi
// 00874aea  e8f1f30000           call 0x883ee0
// 00874aef  8bc7                 mov eax, edi
// 00874af1  5f                   pop edi
// 00874af2  5e                   pop esi
// 00874af3  83c420               add esp, 0x20
// 00874af6  c21400               ret 0x14
// copied from an identical function in another client (function ?DrawCommandBarSeparator@CXTPRibbonTheme@@MAE?AVCSize@@PAVCDC@@PAVCXTPCommandBar@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp