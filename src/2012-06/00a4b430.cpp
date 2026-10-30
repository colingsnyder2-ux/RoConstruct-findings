// roc 2012-06 00a4b430  unit: CXTPTabManagerItem  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4b430
//
// 00a4b430  8bc1                 mov eax, ecx
// 00a4b432  8b4860               mov ecx, dword ptr [eax + 0x60]
// 00a4b435  8b11                 mov edx, dword ptr [ecx]
// 00a4b437  50                   push eax
// 00a4b438  8b4260               mov eax, dword ptr [edx + 0x60]
// 00a4b43b  ffd0                 call eax
// 00a4b43d  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?Select@CXTPTabManagerItem@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
