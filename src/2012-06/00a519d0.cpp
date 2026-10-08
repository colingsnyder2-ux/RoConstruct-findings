// roc 2012-06 00a519d0  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a519d0
//
// 00a519d0  83ec10               sub esp, 0x10
// 00a519d3  53                   push ebx
// 00a519d4  56                   push esi
// 00a519d5  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00a519d9  57                   push edi
// 00a519da  8bf9                 mov edi, ecx
// 00a519dc  8b471c               mov eax, dword ptr [edi + 0x1c]
// 00a519df  33c9                 xor ecx, ecx
// 00a519e1  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00a519e9  894c2418             mov dword ptr [esp + 0x18], ecx
// 00a519ed  8b586c               mov ebx, dword ptr [eax + 0x6c]
// 00a519f0  035864               add ebx, dword ptr [eax + 0x64]
// 00a519f3  85f6                 test esi, esi
// 00a519f5  7415                 je 0xa51a0c
// 00a519f7  8b06                 mov eax, dword ptr [esi]
// 00a519f9  8b5028               mov edx, dword ptr [eax + 0x28]
// 00a519fc  51                   push ecx
// 00a519fd  8d4c2418             lea ecx, [esp + 0x18]
// 00a51a01  51                   push ecx
// 00a51a02  6a00                 push 0
// 00a51a04  8bce                 mov ecx, esi
// 00a51a06  ffd2                 call edx
// 00a51a08  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a51a0c  8b4718               mov eax, dword ptr [edi + 0x18]
// 00a51a0f  03c3                 add eax, ebx
// 00a51a11  3bc1                 cmp eax, ecx
// 00a51a13  89442420             mov dword ptr [esp + 0x20], eax
// 00a51a17  7f04                 jg 0xa51a1d
// 00a51a19  894c2420             mov dword ptr [esp + 0x20], ecx
// 00a51a1d  8b471c               mov eax, dword ptr [edi + 0x1c]
// 00a51a20  83782400             cmp dword ptr [eax + 0x24], 0
// 00a51a24  750d                 jne 0xa51a33
// 00a51a26  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a51a2a  5f                   pop edi
// 00a51a2b  5e                   pop esi
// 00a51a2c  5b                   pop ebx
// 00a51a2d  83c410               add esp, 0x10
// 00a51a30  c20400               ret 4
// 00a51a33  8b8888000000         mov ecx, dword ptr [eax + 0x88]
// 00a51a39  894c240c             mov dword ptr [esp + 0xc], ecx
// 00a51a3d  8b808c000000         mov eax, dword ptr [eax + 0x8c]
// 00a51a43  89442410             mov dword ptr [esp + 0x10], eax
// 00a51a47  85f6                 test esi, esi
// 00a51a49  742e                 je 0xa51a79
// 00a51a4b  8d4c240c             lea ecx, [esp + 0xc]
// 00a51a4f  51                   push ecx
// 00a51a50  6a00                 push 0
// 00a51a52  6a00                 push 0
// 00a51a54  83ec08               sub esp, 8
// 00a51a57  8bc4                 mov eax, esp
// 00a51a59  c70000000000         mov dword ptr [eax], 0
// 00a51a5f  c7400400000000       mov dword ptr [eax + 4], 0
// 00a51a66  8b16                 mov edx, dword ptr [esi]
// 00a51a68  8b4244               mov eax, dword ptr [edx + 0x44]
// 00a51a6b  6a00                 push 0
// 00a51a6d  8bce                 mov ecx, esi
// 00a51a6f  ffd0                 call eax
// 00a51a71  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a51a75  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a51a79  3bc8                 cmp ecx, eax
// 00a51a7b  8bd1                 mov edx, ecx
// 00a51a7d  7f02                 jg 0xa51a81
// 00a51a7f  8bd0                 mov edx, eax
// 00a51a81  8d741a04             lea esi, [edx + ebx + 4]
// 00a51a85  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a51a89  3bf2                 cmp esi, edx
// 00a51a8b  7e13                 jle 0xa51aa0
// 00a51a8d  3bc8                 cmp ecx, eax
// 00a51a8f  7e02                 jle 0xa51a93
// 00a51a91  8bc1                 mov eax, ecx
// 00a51a93  8d441804             lea eax, [eax + ebx + 4]
// 00a51a97  5f                   pop edi
// 00a51a98  5e                   pop esi
// 00a51a99  5b                   pop ebx
// 00a51a9a  83c410               add esp, 0x10
// 00a51a9d  c20400               ret 4
// 00a51aa0  5f                   pop edi
// 00a51aa1  5e                   pop esi
// 00a51aa2  8bc2                 mov eax, edx
// 00a51aa4  5b                   pop ebx
// 00a51aa5  83c410               add esp, 0x10
// 00a51aa8  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetButtonHeight@CAppearanceSet@CXTPTabPaintManager@@UAEHPBVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
