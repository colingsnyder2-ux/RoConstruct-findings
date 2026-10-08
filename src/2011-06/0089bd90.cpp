// roc 2011-06 0089bd90  unit: CXTPControlEdit  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089bd90
//
// 0089bd90  8b8174010000         mov eax, dword ptr [ecx + 0x174]
// 0089bd96  85c0                 test eax, eax
// 0089bd98  740c                 je 0x89bda6
// 0089bd9a  83782000             cmp dword ptr [eax + 0x20], 0
// 0089bd9e  7406                 je 0x89bda6
// 0089bda0  b801000000           mov eax, 1
// 0089bda5  c3                   ret 
// 0089bda6  33c0                 xor eax, eax
// 0089bda8  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?IsFocusable@CXTPControlEdit@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp
