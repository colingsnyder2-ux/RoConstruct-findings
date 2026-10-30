// roc 2009-12 008eee10  unit: CXTPRibbonTabPopupToolBar  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008eee10
//
// 008eee10  8b8978020000         mov ecx, dword ptr [ecx + 0x278]
// 008eee16  8b01                 mov eax, dword ptr [ecx]
// 008eee18  8b905c010000         mov edx, dword ptr [eax + 0x15c]
// 008eee1e  56                   push esi
// 008eee1f  8b742408             mov esi, dword ptr [esp + 8]
// 008eee23  56                   push esi
// 008eee24  ffd2                 call edx
// 008eee26  8bc6                 mov eax, esi
// 008eee28  5e                   pop esi
// 008eee29  c20400               ret 4
// copied from an identical function in another client (function ?GetButtonSize@CXTPRibbonTabPopupToolBar@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp