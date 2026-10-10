// roc 2008-06 007966b0  unit: CXTPRibbonTabPopupToolBar  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007966b0
//
// 007966b0  8b8978020000         mov ecx, dword ptr [ecx + 0x278]
// 007966b6  8b01                 mov eax, dword ptr [ecx]
// 007966b8  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 007966be  56                   push esi
// 007966bf  8b742408             mov esi, dword ptr [esp + 8]
// 007966c3  56                   push esi
// 007966c4  ffd2                 call edx
// 007966c6  8bc6                 mov eax, esi
// 007966c8  5e                   pop esi
// 007966c9  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonPopups.cpp (function ?GetIconSize@CXTPRibbonTabPopupToolBar@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp
