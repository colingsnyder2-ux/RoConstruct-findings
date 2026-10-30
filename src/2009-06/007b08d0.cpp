// roc 2009-06 007b08d0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b08d0
//
// 007b08d0  8b8174010000         mov eax, dword ptr [ecx + 0x174]
// 007b08d6  85c0                 test eax, eax
// 007b08d8  740c                 je 0x7b08e6
// 007b08da  83782000             cmp dword ptr [eax + 0x20], 0
// 007b08de  7406                 je 0x7b08e6
// 007b08e0  b801000000           mov eax, 1
// 007b08e5  c3                   ret 
// 007b08e6  33c0                 xor eax, eax
// 007b08e8  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?IsFocusable@CXTPControlEdit@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp
