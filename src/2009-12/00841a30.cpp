// roc 2009-12 00841a30  unit: CXTPPopupBar  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00841a30
//
// 00841a30  83c8ff               or eax, 0xffffffff
// 00841a33  8981cc000000         mov dword ptr [ecx + 0xcc], eax
// 00841a39  8981d0000000         mov dword ptr [ecx + 0xd0], eax
// 00841a3f  8b01                 mov eax, dword ptr [ecx]
// 00841a41  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 00841a47  ffe2                 jmp edx
// copied from an identical function in another client (function ?OnControlsChanged@CXTPPopupBar@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp