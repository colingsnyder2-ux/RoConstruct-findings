// roc 2007-08 00635d00  unit: CXTPControlComboBoxAutoCompleteWnd  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00635d00
//
// 00635d00  817c24080a020000     cmp dword ptr [esp + 8], 0x20a
// 00635d08  750e                 jne 0x635d18
// 00635d0a  83790800             cmp dword ptr [ecx + 8], 0
// 00635d0e  7408                 je 0x635d18
// 00635d10  b802000000           mov eax, 2
// 00635d15  c21400               ret 0x14
// 00635d18  33c0                 xor eax, eax
// 00635d1a  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlComboBox.cpp (function ?OnHookMessage@CXTPControlComboBoxAutoCompleteWnd@@EAEHPAUHWND__@@IAAIAAJ2@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlComboBox.cpp
