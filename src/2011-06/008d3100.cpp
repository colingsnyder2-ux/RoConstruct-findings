// roc 2011-06 008d3100  unit: CXTPTabManagerItem  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d3100
//
// 008d3100  8bc1                 mov eax, ecx
// 008d3102  8b4860               mov ecx, dword ptr [eax + 0x60]
// 008d3105  8b11                 mov edx, dword ptr [ecx]
// 008d3107  50                   push eax
// 008d3108  8b4260               mov eax, dword ptr [edx + 0x60]
// 008d310b  ffd0                 call eax
// 008d310d  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?Select@CXTPTabManagerItem@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
