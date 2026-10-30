// roc 2009-12 008ee9e0  unit: CXTPRibbonBarMorePopupToolBar  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ee9e0
//
// 008ee9e0  8b895c020000         mov ecx, dword ptr [ecx + 0x25c]
// 008ee9e6  8b01                 mov eax, dword ptr [ecx]
// 008ee9e8  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 008ee9ee  56                   push esi
// 008ee9ef  8b742408             mov esi, dword ptr [esp + 8]
// 008ee9f3  56                   push esi
// 008ee9f4  ffd2                 call edx
// 008ee9f6  8bc6                 mov eax, esi
// 008ee9f8  5e                   pop esi
// 008ee9f9  c20400               ret 4
// copied from an identical function in another client (function ?GetIconSize@CXTPRibbonBarMorePopupToolBar@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp