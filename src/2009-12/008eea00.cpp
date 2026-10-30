// roc 2009-12 008eea00  unit: CXTPRibbonBarMorePopupToolBar  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008eea00
//
// 008eea00  8b895c020000         mov ecx, dword ptr [ecx + 0x25c]
// 008eea06  8b01                 mov eax, dword ptr [ecx]
// 008eea08  8b905c010000         mov edx, dword ptr [eax + 0x15c]
// 008eea0e  56                   push esi
// 008eea0f  8b742408             mov esi, dword ptr [esp + 8]
// 008eea13  56                   push esi
// 008eea14  ffd2                 call edx
// 008eea16  8bc6                 mov eax, esi
// 008eea18  5e                   pop esi
// 008eea19  c20400               ret 4
// copied from an identical function in another client (function ?GetButtonSize@CXTPRibbonBarMorePopupToolBar@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp