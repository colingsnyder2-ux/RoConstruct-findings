// from server: 100% by auto
// roc 2008-06 007813b0  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007813b0
//
// 007813b0  83ec10               sub esp, 0x10
// 007813b3  53                   push ebx
// 007813b4  56                   push esi
// 007813b5  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 007813b9  57                   push edi
// 007813ba  8bf9                 mov edi, ecx
// 007813bc  8b471c               mov eax, dword ptr [edi + 0x1c]
// 007813bf  33c9                 xor ecx, ecx
// 007813c1  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007813c9  894c2418             mov dword ptr [esp + 0x18], ecx
// 007813cd  8b586c               mov ebx, dword ptr [eax + 0x6c]
// 007813d0  035864               add ebx, dword ptr [eax + 0x64]
// 007813d3  85f6                 test esi, esi
// 007813d5  7415                 je 0x7813ec
// 007813d7  8b06                 mov eax, dword ptr [esi]
// 007813d9  8b5028               mov edx, dword ptr [eax + 0x28]
// 007813dc  51                   push ecx
// 007813dd  8d4c2418             lea ecx, [esp + 0x18]
// 007813e1  51                   push ecx
// 007813e2  6a00                 push 0
// 007813e4  8bce                 mov ecx, esi
// 007813e6  ffd2                 call edx
// 007813e8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007813ec  8b4718               mov eax, dword ptr [edi + 0x18]
// 007813ef  03c3                 add eax, ebx
// 007813f1  3bc1                 cmp eax, ecx
// 007813f3  89442420             mov dword ptr [esp + 0x20], eax
// 007813f7  7f04                 jg 0x7813fd
// 007813f9  894c2420             mov dword ptr [esp + 0x20], ecx
// 007813fd  8b471c               mov eax, dword ptr [edi + 0x1c]
// 00781400  83782400             cmp dword ptr [eax + 0x24], 0
// 00781404  750d                 jne 0x781413
// 00781406  8b442420             mov eax, dword ptr [esp + 0x20]
// 0078140a  5f                   pop edi
// 0078140b  5e                   pop esi
// 0078140c  5b                   pop ebx
// 0078140d  83c410               add esp, 0x10
// 00781410  c20400               ret 4
// 00781413  8b8888000000         mov ecx, dword ptr [eax + 0x88]
// 00781419  894c240c             mov dword ptr [esp + 0xc], ecx
// 0078141d  8b808c000000         mov eax, dword ptr [eax + 0x8c]
// 00781423  89442410             mov dword ptr [esp + 0x10], eax
// 00781427  85f6                 test esi, esi
// 00781429  742e                 je 0x781459
// 0078142b  8d4c240c             lea ecx, [esp + 0xc]
// 0078142f  51                   push ecx
// 00781430  6a00                 push 0
// 00781432  6a00                 push 0
// 00781434  83ec08               sub esp, 8
// 00781437  8bc4                 mov eax, esp
// 00781439  c70000000000         mov dword ptr [eax], 0
// 0078143f  c7400400000000       mov dword ptr [eax + 4], 0
// 00781446  8b16                 mov edx, dword ptr [esi]
// 00781448  8b4244               mov eax, dword ptr [edx + 0x44]
// 0078144b  6a00                 push 0
// 0078144d  8bce                 mov ecx, esi
// 0078144f  ffd0                 call eax
// 00781451  8b442410             mov eax, dword ptr [esp + 0x10]
// 00781455  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00781459  3bc8                 cmp ecx, eax
// 0078145b  8bd1                 mov edx, ecx
// 0078145d  7f02                 jg 0x781461
// 0078145f  8bd0                 mov edx, eax
// 00781461  8d741a04             lea esi, [edx + ebx + 4]
// 00781465  8b542420             mov edx, dword ptr [esp + 0x20]
// 00781469  3bf2                 cmp esi, edx
// 0078146b  7e13                 jle 0x781480
// 0078146d  3bc8                 cmp ecx, eax
// 0078146f  7e02                 jle 0x781473
// 00781471  8bc1                 mov eax, ecx
// 00781473  8d441804             lea eax, [eax + ebx + 4]
// 00781477  5f                   pop edi
// 00781478  5e                   pop esi
// 00781479  5b                   pop ebx
// 0078147a  83c410               add esp, 0x10
// 0078147d  c20400               ret 4
// 00781480  5f                   pop edi
// 00781481  5e                   pop esi
// 00781482  8bc2                 mov eax, edx
// 00781484  5b                   pop ebx
// 00781485  83c410               add esp, 0x10
// 00781488  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetButtonHeight@CAppearanceSet@CXTPTabPaintManager@@UAEHPBVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
