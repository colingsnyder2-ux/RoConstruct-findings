// roc 2008-06 006ee270  unit: CXTPPopupBar  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ee270
//
// 006ee270  83c8ff               or eax, 0xffffffff
// 006ee273  8981cc000000         mov dword ptr [ecx + 0xcc], eax
// 006ee279  8981d0000000         mov dword ptr [ecx + 0xd0], eax
// 006ee27f  8b01                 mov eax, dword ptr [ecx]
// 006ee281  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 006ee287  ffe2                 jmp edx
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPPopupBar.cpp (function ?OnControlsChanged@CXTPPopupBar@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp
