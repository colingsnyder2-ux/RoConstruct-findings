// roc 2009-12 0088b750  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088b750
//
// 0088b750  8b8174010000         mov eax, dword ptr [ecx + 0x174]
// 0088b756  85c0                 test eax, eax
// 0088b758  740c                 je 0x88b766
// 0088b75a  83782000             cmp dword ptr [eax + 0x20], 0
// 0088b75e  7406                 je 0x88b766
// 0088b760  b801000000           mov eax, 1
// 0088b765  c3                   ret 
// 0088b766  33c0                 xor eax, eax
// 0088b768  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?IsFocusable@CXTPControlEdit@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp
