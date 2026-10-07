// roc 2011-06 008d30f0  unit: CXTPTabManagerItem  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d30f0
//
// 008d30f0  8bc1                 mov eax, ecx
// 008d30f2  8b4860               mov ecx, dword ptr [eax + 0x60]
// 008d30f5  8b11                 mov edx, dword ptr [ecx]
// 008d30f7  50                   push eax
// 008d30f8  8b4214               mov eax, dword ptr [edx + 0x14]
// 008d30fb  ffd0                 call eax
// 008d30fd  c3                   ret 
// library xtp-15.2.1/Source\TabManager\XTPTabManager.cpp (function ?GetColor@CXTPTabManagerItem@@QAEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabManager.cpp
