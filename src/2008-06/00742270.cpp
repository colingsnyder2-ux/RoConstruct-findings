// roc 2008-06 00742270  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00742270
//
// 00742270  8b8174010000         mov eax, dword ptr [ecx + 0x174]
// 00742276  85c0                 test eax, eax
// 00742278  740c                 je 0x742286
// 0074227a  83782000             cmp dword ptr [eax + 0x20], 0
// 0074227e  7406                 je 0x742286
// 00742280  b801000000           mov eax, 1
// 00742285  c3                   ret 
// 00742286  33c0                 xor eax, eax
// 00742288  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?IsFocusable@CXTPControlEdit@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp
