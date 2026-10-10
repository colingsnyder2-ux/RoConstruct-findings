// roc 2008-06 0079ec00  unit: CXTPToolBar::CControlButtonHide  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079ec00
//
// 0079ec00  83b90001000000       cmp dword ptr [ecx + 0x100], 0
// 0079ec07  7412                 je 0x79ec1b
// 0079ec09  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 0079ec0f  8b01                 mov eax, dword ptr [ecx]
// 0079ec11  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 0079ec17  6a00                 push 0
// 0079ec19  ffd2                 call edx
// 0079ec1b  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPDialogBar.cpp (function ?OnExecute@CControlButtonHide@CXTPDialogBar@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDialogBar.cpp
