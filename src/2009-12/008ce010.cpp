// roc 2009-12 008ce010  unit: CXTPTabManagerItem  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ce010
//
// 008ce010  8bc1                 mov eax, ecx
// 008ce012  8b4860               mov ecx, dword ptr [eax + 0x60]
// 008ce015  8b11                 mov edx, dword ptr [ecx]
// 008ce017  50                   push eax
// 008ce018  8b4260               mov eax, dword ptr [edx + 0x60]
// 008ce01b  ffd0                 call eax
// 008ce01d  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?Select@CXTPTabManagerItem@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
