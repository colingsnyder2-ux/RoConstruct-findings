// roc 2008-06 0077e1a0  unit: CXTPTabPaintManager  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077e1a0
//
// 0077e1a0  83b9ac00000000       cmp dword ptr [ecx + 0xac], 0
// 0077e1a7  7443                 je 0x77e1ec
// 0077e1a9  b803000000           mov eax, 3
// 0077e1ae  0144240c             add dword ptr [esp + 0xc], eax
// 0077e1b2  01442410             add dword ptr [esp + 0x10], eax
// 0077e1b6  29442414             sub dword ptr [esp + 0x14], eax
// 0077e1ba  29442418             sub dword ptr [esp + 0x18], eax
// 0077e1be  56                   push esi
// 0077e1bf  8b742408             mov esi, dword ptr [esp + 8]
// 0077e1c3  8b06                 mov eax, dword ptr [esi]
// 0077e1c5  8b5038               mov edx, dword ptr [eax + 0x38]
// 0077e1c8  6a00                 push 0
// 0077e1ca  8bce                 mov ecx, esi
// 0077e1cc  ffd2                 call edx
// 0077e1ce  8b06                 mov eax, dword ptr [esi]
// 0077e1d0  8b5034               mov edx, dword ptr [eax + 0x34]
// 0077e1d3  68ffffff00           push 0xffffff
// 0077e1d8  8bce                 mov ecx, esi
// 0077e1da  ffd2                 call edx
// 0077e1dc  8b4e04               mov ecx, dword ptr [esi + 4]
// 0077e1df  8d442410             lea eax, [esp + 0x10]
// 0077e1e3  50                   push eax
// 0077e1e4  51                   push ecx
// 0077e1e5  ff15542b8000         call dword ptr [0x802b54]
// 0077e1eb  5e                   pop esi
// 0077e1ec  c21800               ret 0x18
// library xtp-11.2.2-shared-mfc/Source\TabManager\XTPTabPaintManager.cpp (function ?DrawFocusRect@CXTPTabPaintManager@@MAEXPAVCDC@@PAVCXTPTabManagerItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManager.cpp
