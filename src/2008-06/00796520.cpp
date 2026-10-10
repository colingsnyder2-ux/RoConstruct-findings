// roc 2008-06 00796520  unit: CXTPRibbonBarMorePopupToolBar  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00796520
//
// 00796520  8b895c020000         mov ecx, dword ptr [ecx + 0x25c]
// 00796526  8b01                 mov eax, dword ptr [ecx]
// 00796528  8b905c010000         mov edx, dword ptr [eax + 0x15c]
// 0079652e  56                   push esi
// 0079652f  8b742408             mov esi, dword ptr [esp + 8]
// 00796533  56                   push esi
// 00796534  ffd2                 call edx
// 00796536  8bc6                 mov eax, esi
// 00796538  5e                   pop esi
// 00796539  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonPopups.cpp (function ?GetButtonSize@CXTPRibbonBarMorePopupToolBar@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp
