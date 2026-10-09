// roc 2007-03 006208c0  unit: seg_00620000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006208c0
//
// 006208c0  8b01                 mov eax, dword ptr [ecx]
// 006208c2  8b909c010000         mov edx, dword ptr [eax + 0x19c]
// 006208c8  6a01                 push 1
// 006208ca  6a00                 push 0
// 006208cc  ffd2                 call edx
// 006208ce  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlComboBox.cpp (function ?DelayRedraw@CXTPPopupBar@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlComboBox.cpp
