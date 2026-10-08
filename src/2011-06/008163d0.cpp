// from server: 100% by auto
// roc 2011-06 008163d0  unit: CXTPEdit  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008163d0
//
// 008163d0  8b4108               mov eax, dword ptr [ecx + 8]
// 008163d3  85c0                 test eax, eax
// 008163d5  7409                 je 0x8163e0
// 008163d7  6a00                 push 0
// 008163d9  50                   push eax
// 008163da  ff153c1ca400         call dword ptr [0xa41c3c]
// 008163e0  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBox.cpp (function ?CloseWindow@CXTPControlComboBoxAutoCompleteWnd@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBox.cpp
