// roc 2012-06 00a4e800  unit: CXTPTabPaintManager  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4e800
//
// 00a4e800  83b9ac00000000       cmp dword ptr [ecx + 0xac], 0
// 00a4e807  7443                 je 0xa4e84c
// 00a4e809  b803000000           mov eax, 3
// 00a4e80e  0144240c             add dword ptr [esp + 0xc], eax
// 00a4e812  01442410             add dword ptr [esp + 0x10], eax
// 00a4e816  29442414             sub dword ptr [esp + 0x14], eax
// 00a4e81a  29442418             sub dword ptr [esp + 0x18], eax
// 00a4e81e  56                   push esi
// 00a4e81f  8b742408             mov esi, dword ptr [esp + 8]
// 00a4e823  8b06                 mov eax, dword ptr [esi]
// 00a4e825  8b5038               mov edx, dword ptr [eax + 0x38]
// 00a4e828  6a00                 push 0
// 00a4e82a  8bce                 mov ecx, esi
// 00a4e82c  ffd2                 call edx
// 00a4e82e  8b06                 mov eax, dword ptr [esi]
// 00a4e830  8b5034               mov edx, dword ptr [eax + 0x34]
// 00a4e833  68ffffff00           push 0xffffff
// 00a4e838  8bce                 mov ecx, esi
// 00a4e83a  ffd2                 call edx
// 00a4e83c  8b4e04               mov ecx, dword ptr [esi + 4]
// 00a4e83f  8d442410             lea eax, [esp + 0x10]
// 00a4e843  50                   push eax
// 00a4e844  51                   push ecx
// 00a4e845  ff15d43cb200         call dword ptr [0xb23cd4]
// 00a4e84b  5e                   pop esi
// 00a4e84c  c21800               ret 0x18
// library xtp-15.2.1-shared-mfc/Source\TabManager\XTPTabPaintManager.cpp (function ?DrawFocusRect@CXTPTabPaintManager@@MAEXPAVCDC@@PAVCXTPTabManagerItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/TabManager/XTPTabPaintManager.cpp
