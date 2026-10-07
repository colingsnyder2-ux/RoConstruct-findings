// roc 2012-06 0098e670  unit: CXTPControlComboBoxAutoCompleteWnd  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098e670
//
// 0098e670  817c24080a020000     cmp dword ptr [esp + 8], 0x20a
// 0098e678  750e                 jne 0x98e688
// 0098e67a  83790800             cmp dword ptr [ecx + 8], 0
// 0098e67e  7408                 je 0x98e688
// 0098e680  b802000000           mov eax, 2
// 0098e685  c21400               ret 0x14
// 0098e688  33c0                 xor eax, eax
// 0098e68a  c21400               ret 0x14
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBox.cpp (function ?OnHookMessage@CXTPControlComboBoxAutoCompleteWnd@@EAEHPAUHWND__@@IAAIAAJ2@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBox.cpp
