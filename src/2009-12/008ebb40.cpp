// roc 2009-12 008ebb40  unit: CXTPToolBar::CControlButtonHide  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ebb40
//
// 008ebb40  83b90001000000       cmp dword ptr [ecx + 0x100], 0
// 008ebb47  7412                 je 0x8ebb5b
// 008ebb49  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 008ebb4f  8b01                 mov eax, dword ptr [ecx]
// 008ebb51  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 008ebb57  6a00                 push 0
// 008ebb59  ffd2                 call edx
// 008ebb5b  c3                   ret 
// copied from an identical function in another client (function ?OnExecute@CControlButtonHide@CXTPDialogBar@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDialogBar.cpp