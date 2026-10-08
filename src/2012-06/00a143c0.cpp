// roc 2012-06 00a143c0  unit: CXTPControlEdit  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a143c0
//
// 00a143c0  8b8174010000         mov eax, dword ptr [ecx + 0x174]
// 00a143c6  85c0                 test eax, eax
// 00a143c8  740c                 je 0xa143d6
// 00a143ca  83782000             cmp dword ptr [eax + 0x20], 0
// 00a143ce  7406                 je 0xa143d6
// 00a143d0  b801000000           mov eax, 1
// 00a143d5  c3                   ret 
// 00a143d6  33c0                 xor eax, eax
// 00a143d8  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?IsFocusable@CXTPControlEdit@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp
