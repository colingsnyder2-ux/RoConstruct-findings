// roc 2009-06 007f9a30  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f9a30
//
// 007f9a30  83ec10               sub esp, 0x10
// 007f9a33  53                   push ebx
// 007f9a34  56                   push esi
// 007f9a35  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 007f9a39  57                   push edi
// 007f9a3a  8bf9                 mov edi, ecx
// 007f9a3c  8b471c               mov eax, dword ptr [edi + 0x1c]
// 007f9a3f  33c9                 xor ecx, ecx
// 007f9a41  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007f9a49  894c2418             mov dword ptr [esp + 0x18], ecx
// 007f9a4d  8b586c               mov ebx, dword ptr [eax + 0x6c]
// 007f9a50  035864               add ebx, dword ptr [eax + 0x64]
// 007f9a53  85f6                 test esi, esi
// 007f9a55  7415                 je 0x7f9a6c
// 007f9a57  8b06                 mov eax, dword ptr [esi]
// 007f9a59  8b5028               mov edx, dword ptr [eax + 0x28]
// 007f9a5c  51                   push ecx
// 007f9a5d  8d4c2418             lea ecx, [esp + 0x18]
// 007f9a61  51                   push ecx
// 007f9a62  6a00                 push 0
// 007f9a64  8bce                 mov ecx, esi
// 007f9a66  ffd2                 call edx
// 007f9a68  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007f9a6c  8b4718               mov eax, dword ptr [edi + 0x18]
// 007f9a6f  03c3                 add eax, ebx
// 007f9a71  3bc1                 cmp eax, ecx
// 007f9a73  89442420             mov dword ptr [esp + 0x20], eax
// 007f9a77  7f04                 jg 0x7f9a7d
// 007f9a79  894c2420             mov dword ptr [esp + 0x20], ecx
// 007f9a7d  8b471c               mov eax, dword ptr [edi + 0x1c]
// 007f9a80  83782400             cmp dword ptr [eax + 0x24], 0
// 007f9a84  750d                 jne 0x7f9a93
// 007f9a86  8b442420             mov eax, dword ptr [esp + 0x20]
// 007f9a8a  5f                   pop edi
// 007f9a8b  5e                   pop esi
// 007f9a8c  5b                   pop ebx
// 007f9a8d  83c410               add esp, 0x10
// 007f9a90  c20400               ret 4
// 007f9a93  8b8888000000         mov ecx, dword ptr [eax + 0x88]
// 007f9a99  894c240c             mov dword ptr [esp + 0xc], ecx
// 007f9a9d  8b808c000000         mov eax, dword ptr [eax + 0x8c]
// 007f9aa3  89442410             mov dword ptr [esp + 0x10], eax
// 007f9aa7  85f6                 test esi, esi
// 007f9aa9  742e                 je 0x7f9ad9
// 007f9aab  8d4c240c             lea ecx, [esp + 0xc]
// 007f9aaf  51                   push ecx
// 007f9ab0  6a00                 push 0
// 007f9ab2  6a00                 push 0
// 007f9ab4  83ec08               sub esp, 8
// 007f9ab7  8bc4                 mov eax, esp
// 007f9ab9  c70000000000         mov dword ptr [eax], 0
// 007f9abf  c7400400000000       mov dword ptr [eax + 4], 0
// 007f9ac6  8b16                 mov edx, dword ptr [esi]
// 007f9ac8  8b4244               mov eax, dword ptr [edx + 0x44]
// 007f9acb  6a00                 push 0
// 007f9acd  8bce                 mov ecx, esi
// 007f9acf  ffd0                 call eax
// 007f9ad1  8b442410             mov eax, dword ptr [esp + 0x10]
// 007f9ad5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007f9ad9  3bc8                 cmp ecx, eax
// 007f9adb  8bd1                 mov edx, ecx
// 007f9add  7f02                 jg 0x7f9ae1
// 007f9adf  8bd0                 mov edx, eax
// 007f9ae1  8d741a04             lea esi, [edx + ebx + 4]
// 007f9ae5  8b542420             mov edx, dword ptr [esp + 0x20]
// 007f9ae9  3bf2                 cmp esi, edx
// 007f9aeb  7e13                 jle 0x7f9b00
// 007f9aed  3bc8                 cmp ecx, eax
// 007f9aef  7e02                 jle 0x7f9af3
// 007f9af1  8bc1                 mov eax, ecx
// 007f9af3  8d441804             lea eax, [eax + ebx + 4]
// 007f9af7  5f                   pop edi
// 007f9af8  5e                   pop esi
// 007f9af9  5b                   pop ebx
// 007f9afa  83c410               add esp, 0x10
// 007f9afd  c20400               ret 4
// 007f9b00  5f                   pop edi
// 007f9b01  5e                   pop esi
// 007f9b02  8bc2                 mov eax, edx
// 007f9b04  5b                   pop ebx
// 007f9b05  83c410               add esp, 0x10
// 007f9b08  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetButtonHeight@CAppearanceSet@CXTPTabPaintManager@@UAEHPBVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
