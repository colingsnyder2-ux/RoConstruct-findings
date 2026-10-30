// roc 2009-12 008d1400  unit: CXTPTabPaintManager  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d1400
//
// 008d1400  83b9ac00000000       cmp dword ptr [ecx + 0xac], 0
// 008d1407  7443                 je 0x8d144c
// 008d1409  b803000000           mov eax, 3
// 008d140e  0144240c             add dword ptr [esp + 0xc], eax
// 008d1412  01442410             add dword ptr [esp + 0x10], eax
// 008d1416  29442414             sub dword ptr [esp + 0x14], eax
// 008d141a  29442418             sub dword ptr [esp + 0x18], eax
// 008d141e  56                   push esi
// 008d141f  8b742408             mov esi, dword ptr [esp + 8]
// 008d1423  8b06                 mov eax, dword ptr [esi]
// 008d1425  8b5038               mov edx, dword ptr [eax + 0x38]
// 008d1428  6a00                 push 0
// 008d142a  8bce                 mov ecx, esi
// 008d142c  ffd2                 call edx
// 008d142e  8b06                 mov eax, dword ptr [esi]
// 008d1430  8b5034               mov edx, dword ptr [eax + 0x34]
// 008d1433  68ffffff00           push 0xffffff
// 008d1438  8bce                 mov ecx, esi
// 008d143a  ffd2                 call edx
// 008d143c  8b4e04               mov ecx, dword ptr [esi + 4]
// 008d143f  8d442410             lea eax, [esp + 0x10]
// 008d1443  50                   push eax
// 008d1444  51                   push ecx
// 008d1445  ff15d4ca9800         call dword ptr [0x98cad4]
// 008d144b  5e                   pop esi
// 008d144c  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawFocusRect@CXTPTabPaintManager@@MAEXPAVCDC@@PAVCXTPTabManagerItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManager.cpp