// roc 2012-06 0098ea80  unit: CXTPPopupBar  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098ea80
//
// 0098ea80  8b01                 mov eax, dword ptr [ecx]
// 0098ea82  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 0098ea88  6a01                 push 1
// 0098ea8a  6a00                 push 0
// 0098ea8c  ffd2                 call edx
// 0098ea8e  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPControlComboBox.cpp (function ?DelayRedraw@CXTPPopupBar@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPControlComboBox.cpp
