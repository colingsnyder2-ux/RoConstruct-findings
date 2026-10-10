// roc 2008-06 006a6ef0  unit: CXTPPopupBar  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a6ef0
//
// 006a6ef0  8b01                 mov eax, dword ptr [ecx]
// 006a6ef2  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 006a6ef8  6a01                 push 1
// 006a6efa  6a00                 push 0
// 006a6efc  ffd2                 call edx
// 006a6efe  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?DelayRedraw@CXTPPopupBar@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBoxExt.cpp
