// from server: 100% by auto
// roc 2011-06 008163f0  unit: CXTPControlComboBoxAutoCompleteWnd  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008163f0
//
// 008163f0  817c24080a020000     cmp dword ptr [esp + 8], 0x20a
// 008163f8  750e                 jne 0x816408
// 008163fa  83790800             cmp dword ptr [ecx + 8], 0
// 008163fe  7408                 je 0x816408
// 00816400  b802000000           mov eax, 2
// 00816405  c21400               ret 0x14
// 00816408  33c0                 xor eax, eax
// 0081640a  c21400               ret 0x14
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBox.cpp (function ?OnHookMessage@CXTPControlComboBoxAutoCompleteWnd@@EAEHPAUHWND__@@IAAIAAJ2@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBox.cpp
