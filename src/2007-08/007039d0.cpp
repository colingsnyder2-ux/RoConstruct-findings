// from server: 100% by auto
// roc 2007-08 007039d0  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007039d0
//
// 007039d0  83ec10               sub esp, 0x10
// 007039d3  53                   push ebx
// 007039d4  56                   push esi
// 007039d5  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 007039d9  57                   push edi
// 007039da  8bf9                 mov edi, ecx
// 007039dc  8b471c               mov eax, dword ptr [edi + 0x1c]
// 007039df  33c9                 xor ecx, ecx
// 007039e1  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007039e9  894c2418             mov dword ptr [esp + 0x18], ecx
// 007039ed  8b586c               mov ebx, dword ptr [eax + 0x6c]
// 007039f0  035864               add ebx, dword ptr [eax + 0x64]
// 007039f3  85f6                 test esi, esi
// 007039f5  7415                 je 0x703a0c
// 007039f7  8b06                 mov eax, dword ptr [esi]
// 007039f9  8b5028               mov edx, dword ptr [eax + 0x28]
// 007039fc  51                   push ecx
// 007039fd  8d4c2418             lea ecx, [esp + 0x18]
// 00703a01  51                   push ecx
// 00703a02  6a00                 push 0
// 00703a04  8bce                 mov ecx, esi
// 00703a06  ffd2                 call edx
// 00703a08  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00703a0c  8b4718               mov eax, dword ptr [edi + 0x18]
// 00703a0f  03c3                 add eax, ebx
// 00703a11  3bc1                 cmp eax, ecx
// 00703a13  89442420             mov dword ptr [esp + 0x20], eax
// 00703a17  7f04                 jg 0x703a1d
// 00703a19  894c2420             mov dword ptr [esp + 0x20], ecx
// 00703a1d  8b471c               mov eax, dword ptr [edi + 0x1c]
// 00703a20  83782400             cmp dword ptr [eax + 0x24], 0
// 00703a24  750d                 jne 0x703a33
// 00703a26  8b442420             mov eax, dword ptr [esp + 0x20]
// 00703a2a  5f                   pop edi
// 00703a2b  5e                   pop esi
// 00703a2c  5b                   pop ebx
// 00703a2d  83c410               add esp, 0x10
// 00703a30  c20400               ret 4
// 00703a33  85f6                 test esi, esi
// 00703a35  8b8888000000         mov ecx, dword ptr [eax + 0x88]
// 00703a3b  894c240c             mov dword ptr [esp + 0xc], ecx
// 00703a3f  8b808c000000         mov eax, dword ptr [eax + 0x8c]
// 00703a45  89442410             mov dword ptr [esp + 0x10], eax
// 00703a49  742e                 je 0x703a79
// 00703a4b  8d4c240c             lea ecx, [esp + 0xc]
// 00703a4f  51                   push ecx
// 00703a50  6a00                 push 0
// 00703a52  6a00                 push 0
// 00703a54  83ec08               sub esp, 8
// 00703a57  8bc4                 mov eax, esp
// 00703a59  c70000000000         mov dword ptr [eax], 0
// 00703a5f  c7400400000000       mov dword ptr [eax + 4], 0
// 00703a66  8b16                 mov edx, dword ptr [esi]
// 00703a68  8b4244               mov eax, dword ptr [edx + 0x44]
// 00703a6b  6a00                 push 0
// 00703a6d  8bce                 mov ecx, esi
// 00703a6f  ffd0                 call eax
// 00703a71  8b442410             mov eax, dword ptr [esp + 0x10]
// 00703a75  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00703a79  3bc8                 cmp ecx, eax
// 00703a7b  8bd1                 mov edx, ecx
// 00703a7d  7f02                 jg 0x703a81
// 00703a7f  8bd0                 mov edx, eax
// 00703a81  8d741a04             lea esi, [edx + ebx + 4]
// 00703a85  8b542420             mov edx, dword ptr [esp + 0x20]
// 00703a89  3bf2                 cmp esi, edx
// 00703a8b  7e13                 jle 0x703aa0
// 00703a8d  3bc8                 cmp ecx, eax
// 00703a8f  7e02                 jle 0x703a93
// 00703a91  8bc1                 mov eax, ecx
// 00703a93  8d441804             lea eax, [eax + ebx + 4]
// 00703a97  5f                   pop edi
// 00703a98  5e                   pop esi
// 00703a99  5b                   pop ebx
// 00703a9a  83c410               add esp, 0x10
// 00703a9d  c20400               ret 4
// 00703aa0  5f                   pop edi
// 00703aa1  5e                   pop esi
// 00703aa2  8bc2                 mov eax, edx
// 00703aa4  5b                   pop ebx
// 00703aa5  83c410               add esp, 0x10
// 00703aa8  c20400               ret 4
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetButtonHeight@CAppearanceSet@CXTPTabPaintManager@@UAEHPBVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerAppearance.cpp
