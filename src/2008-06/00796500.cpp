// roc 2008-06 00796500  unit: CXTPRibbonBarMorePopupToolBar  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00796500
//
// 00796500  8b895c020000         mov ecx, dword ptr [ecx + 0x25c]
// 00796506  8b01                 mov eax, dword ptr [ecx]
// 00796508  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 0079650e  56                   push esi
// 0079650f  8b742408             mov esi, dword ptr [esp + 8]
// 00796513  56                   push esi
// 00796514  ffd2                 call edx
// 00796516  8bc6                 mov eax, esi
// 00796518  5e                   pop esi
// 00796519  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonPopups.cpp (function ?GetIconSize@CXTPRibbonBarMorePopupToolBar@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp
