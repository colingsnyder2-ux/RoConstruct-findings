// roc 2008-06 00796690  unit: CXTPRibbonTabPopupToolBar  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00796690
//
// 00796690  8b8978020000         mov ecx, dword ptr [ecx + 0x278]
// 00796696  8b01                 mov eax, dword ptr [ecx]
// 00796698  8b905c010000         mov edx, dword ptr [eax + 0x15c]
// 0079669e  56                   push esi
// 0079669f  8b742408             mov esi, dword ptr [esp + 8]
// 007966a3  56                   push esi
// 007966a4  ffd2                 call edx
// 007966a6  8bc6                 mov eax, esi
// 007966a8  5e                   pop esi
// 007966a9  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonPopups.cpp (function ?GetButtonSize@CXTPRibbonTabPopupToolBar@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp
