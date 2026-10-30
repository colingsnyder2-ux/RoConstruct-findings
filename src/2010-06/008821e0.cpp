// roc 2010-06 008821e0  unit: CXTPTabManagerItem  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008821e0
//
// 008821e0  8bc1                 mov eax, ecx
// 008821e2  8b4860               mov ecx, dword ptr [eax + 0x60]
// 008821e5  8b11                 mov edx, dword ptr [ecx]
// 008821e7  50                   push eax
// 008821e8  8b4260               mov eax, dword ptr [edx + 0x60]
// 008821eb  ffd0                 call eax
// 008821ed  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?Select@CXTPTabManagerItem@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
