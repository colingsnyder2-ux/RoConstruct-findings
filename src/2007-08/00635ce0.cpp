// from server: 100% by auto
// roc 2007-08 00635ce0  unit: CXTPEdit  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00635ce0
//
// 00635ce0  8b4108               mov eax, dword ptr [ecx + 8]
// 00635ce3  85c0                 test eax, eax
// 00635ce5  7409                 je 0x635cf0
// 00635ce7  6a00                 push 0
// 00635ce9  50                   push eax
// 00635cea  ff1520ed7700         call dword ptr [0x77ed20]
// 00635cf0  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlComboBox.cpp (function ?CloseWindow@CXTPControlComboBoxAutoCompleteWnd@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlComboBox.cpp
