// roc 2007-08 006fd160  unit: CXTPTabManagerItem  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fd160
//
// 006fd160  8bc1                 mov eax, ecx
// 006fd162  8b4860               mov ecx, dword ptr [eax + 0x60]
// 006fd165  8b11                 mov edx, dword ptr [ecx]
// 006fd167  50                   push eax
// 006fd168  8b4260               mov eax, dword ptr [edx + 0x60]
// 006fd16b  ffd0                 call eax
// 006fd16d  c3                   ret 
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabManager.cpp (function ?Select@CXTPTabManagerItem@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabManager.cpp
