// from server: 100% by auto
// roc 2007-08 006fd150  unit: CXTPTabManagerItem  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fd150
//
// 006fd150  8bc1                 mov eax, ecx
// 006fd152  8b4860               mov ecx, dword ptr [eax + 0x60]
// 006fd155  8b11                 mov edx, dword ptr [ecx]
// 006fd157  50                   push eax
// 006fd158  8b4214               mov eax, dword ptr [edx + 0x14]
// 006fd15b  ffd0                 call eax
// 006fd15d  c3                   ret 
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabManager.cpp (function ?GetColor@CXTPTabManagerItem@@QAEKXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabManager.cpp
