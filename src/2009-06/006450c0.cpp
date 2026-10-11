// roc 2009-06 006450c0  unit: RBX::Soundscape::VSoundId::?$TypedPropertyDescriptor  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006450c0
//
// 006450c0  83ec10               sub esp, 0x10
// 006450c3  53                   push ebx
// 006450c4  55                   push ebp
// 006450c5  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 006450c9  56                   push esi
// 006450ca  55                   push ebp
// 006450cb  8bf1                 mov esi, ecx
// 006450cd  e8aee9ffff           call 0x643a80
// 006450d2  8bd8                 mov ebx, eax
// 006450d4  895c2410             mov dword ptr [esp + 0x10], ebx
// 006450d8  85f6                 test esi, esi
// 006450da  7506                 jne 0x6450e2
// 006450dc  ff15ace98900         call dword ptr [0x89e9ac]
// 006450e2  8b06                 mov eax, dword ptr [esi]
// 006450e4  57                   push edi
// 006450e5  8b7e18               mov edi, dword ptr [esi + 0x18]
// 006450e8  89442410             mov dword ptr [esp + 0x10], eax
// 006450ec  85c0                 test eax, eax
// 006450ee  7404                 je 0x6450f4
// 006450f0  3bc0                 cmp eax, eax
// 006450f2  7406                 je 0x6450fa
// 006450f4  ff15ace98900         call dword ptr [0x89e9ac]
// 006450fa  3bdf                 cmp ebx, edi
// 006450fc  5f                   pop edi
// 006450fd  7417                 je 0x645116
// 006450ff  83c30c               add ebx, 0xc
// 00645102  53                   push ebx
// 00645103  55                   push ebp
// 00645104  e8573bf9ff           call 0x5d8c60
// 00645109  83c408               add esp, 8
// 0064510c  84c0                 test al, al
// 0064510e  7506                 jne 0x645116
// 00645110  8d4c240c             lea ecx, [esp + 0xc]
// 00645114  eb11                 jmp 0x645127
// 00645116  8b0e                 mov ecx, dword ptr [esi]
// 00645118  8b4618               mov eax, dword ptr [esi + 0x18]
// 0064511b  894c2414             mov dword ptr [esp + 0x14], ecx
// 0064511f  89442418             mov dword ptr [esp + 0x18], eax
// 00645123  8d4c2414             lea ecx, [esp + 0x14]
// 00645127  8b11                 mov edx, dword ptr [ecx]
// 00645129  8b442420             mov eax, dword ptr [esp + 0x20]
// 0064512d  8b4904               mov ecx, dword ptr [ecx + 4]
// 00645130  5e                   pop esi
// 00645131  5d                   pop ebp
// 00645132  8910                 mov dword ptr [eax], edx
// 00645134  894804               mov dword ptr [eax + 4], ecx
// 00645137  5b                   pop ebx
// 00645138  83c410               add esp, 0x10
// 0064513b  c20800               ret 8
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?find@?$_Tree@V?$_Tset_traits@VContentId@RBX@@U?$less@VContentId@RBX@@@std@@V?$allocator@VContentId@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@ABVContentId@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp
