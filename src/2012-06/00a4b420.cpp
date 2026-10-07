// roc 2012-06 00a4b420  unit: CXTPTabManagerItem  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4b420
//
// 00a4b420  8bc1                 mov eax, ecx
// 00a4b422  8b4860               mov ecx, dword ptr [eax + 0x60]
// 00a4b425  8b11                 mov edx, dword ptr [ecx]
// 00a4b427  50                   push eax
// 00a4b428  8b4214               mov eax, dword ptr [edx + 0x14]
// 00a4b42b  ffd0                 call eax
// 00a4b42d  c3                   ret 
// library xtp-15.2.1/Source\TabManager\XTPTabManager.cpp (function ?GetColor@CXTPTabManagerItem@@QAEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabManager.cpp
