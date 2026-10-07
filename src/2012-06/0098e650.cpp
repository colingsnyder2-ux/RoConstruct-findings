// roc 2012-06 0098e650  unit: CXTPEdit  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098e650
//
// 0098e650  8b4108               mov eax, dword ptr [ecx + 8]
// 0098e653  85c0                 test eax, eax
// 0098e655  7409                 je 0x98e660
// 0098e657  6a00                 push 0
// 0098e659  50                   push eax
// 0098e65a  ff15203bb200         call dword ptr [0xb23b20]
// 0098e660  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBox.cpp (function ?CloseWindow@CXTPControlComboBoxAutoCompleteWnd@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBox.cpp
