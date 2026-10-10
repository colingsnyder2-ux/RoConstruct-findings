// roc 2008-06 00727b70  unit: CXTPRibbonTheme::CRibbonAppearanceSet  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00727b70
//
// 00727b70  53                   push ebx
// 00727b71  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00727b75  56                   push esi
// 00727b76  57                   push edi
// 00727b77  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00727b7b  8bf1                 mov esi, ecx
// 00727b7d  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00727b80  8b01                 mov eax, dword ptr [ecx]
// 00727b82  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 00727b88  57                   push edi
// 00727b89  53                   push ebx
// 00727b8a  ffd2                 call edx
// 00727b8c  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00727b8f  8b7744               mov esi, dword ptr [edi + 0x44]
// 00727b92  8b11                 mov edx, dword ptr [ecx]
// 00727b94  6a01                 push 1
// 00727b96  83ec10               sub esp, 0x10
// 00727b99  8bc4                 mov eax, esp
// 00727b9b  8930                 mov dword ptr [eax], esi
// 00727b9d  8b7748               mov esi, dword ptr [edi + 0x48]
// 00727ba0  897004               mov dword ptr [eax + 4], esi
// 00727ba3  8b774c               mov esi, dword ptr [edi + 0x4c]
// 00727ba6  897008               mov dword ptr [eax + 8], esi
// 00727ba9  8b7750               mov esi, dword ptr [edi + 0x50]
// 00727bac  57                   push edi
// 00727bad  89700c               mov dword ptr [eax + 0xc], esi
// 00727bb0  8b4268               mov eax, dword ptr [edx + 0x68]
// 00727bb3  53                   push ebx
// 00727bb4  ffd0                 call eax
// 00727bb6  5f                   pop edi
// 00727bb7  5e                   pop esi
// 00727bb8  5b                   pop ebx
// 00727bb9  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawSingleButton@CRibbonAppearanceSet@CXTPRibbonTheme@@MAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonTheme.cpp
