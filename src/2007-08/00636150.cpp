// roc 2007-08 00636150  unit: CXTPPopupBar  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00636150
//
// 00636150  8b01                 mov eax, dword ptr [ecx]
// 00636152  8b909c010000         mov edx, dword ptr [eax + 0x19c]
// 00636158  6a01                 push 1
// 0063615a  6a00                 push 0
// 0063615c  ffd2                 call edx
// 0063615e  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlComboBox.cpp (function ?DelayRedraw@CXTPPopupBar@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlComboBox.cpp
