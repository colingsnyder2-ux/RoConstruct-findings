// from server: 100% by auto
// roc 2008-06 006a6a90  unit: CXTPControlComboBoxAutoCompleteWnd  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a6a90
//
// 006a6a90  817c24080a020000     cmp dword ptr [esp + 8], 0x20a
// 006a6a98  750e                 jne 0x6a6aa8
// 006a6a9a  83790800             cmp dword ptr [ecx + 8], 0
// 006a6a9e  7408                 je 0x6a6aa8
// 006a6aa0  b802000000           mov eax, 2
// 006a6aa5  c21400               ret 0x14
// 006a6aa8  33c0                 xor eax, eax
// 006a6aaa  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?OnHookMessage@CXTPControlComboBoxAutoCompleteWnd@@EAEHPAUHWND__@@IAAIAAJ2@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
