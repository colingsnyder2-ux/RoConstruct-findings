// roc 2010-06 0083edc0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0083edc0
//
// 0083edc0  8b8174010000         mov eax, dword ptr [ecx + 0x174]
// 0083edc6  85c0                 test eax, eax
// 0083edc8  740c                 je 0x83edd6
// 0083edca  83782000             cmp dword ptr [eax + 0x20], 0
// 0083edce  7406                 je 0x83edd6
// 0083edd0  b801000000           mov eax, 1
// 0083edd5  c3                   ret 
// 0083edd6  33c0                 xor eax, eax
// 0083edd8  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?IsFocusable@CXTPControlEdit@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp
