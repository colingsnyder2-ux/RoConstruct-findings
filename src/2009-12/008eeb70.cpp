// roc 2009-12 008eeb70  unit: CXTPRibbonTabPopupToolBar  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008eeb70
//
// 008eeb70  8b8978020000         mov ecx, dword ptr [ecx + 0x278]
// 008eeb76  8b01                 mov eax, dword ptr [ecx]
// 008eeb78  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 008eeb7e  56                   push esi
// 008eeb7f  8b742408             mov esi, dword ptr [esp + 8]
// 008eeb83  56                   push esi
// 008eeb84  ffd2                 call edx
// 008eeb86  8bc6                 mov eax, esi
// 008eeb88  5e                   pop esi
// 008eeb89  c20400               ret 4
// copied from an identical function in another client (function ?GetIconSize@CXTPRibbonTabPopupToolBar@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp