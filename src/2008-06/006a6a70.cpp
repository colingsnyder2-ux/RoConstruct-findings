// from server: 100% by auto
// roc 2008-06 006a6a70  unit: CXTPEdit  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a6a70
//
// 006a6a70  8b4108               mov eax, dword ptr [ecx + 8]
// 006a6a73  85c0                 test eax, eax
// 006a6a75  7409                 je 0x6a6a80
// 006a6a77  6a00                 push 0
// 006a6a79  50                   push eax
// 006a6a7a  ff15bc2c8000         call dword ptr [0x802cbc]
// 006a6a80  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?CloseWindow@CXTPControlComboBoxAutoCompleteWnd@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
