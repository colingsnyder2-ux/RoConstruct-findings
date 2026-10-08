// roc 2009-06 007f3460  unit: CXTPTabManagerItem  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f3460
//
// 007f3460  8bc1                 mov eax, ecx
// 007f3462  8b4860               mov ecx, dword ptr [eax + 0x60]
// 007f3465  8b11                 mov edx, dword ptr [ecx]
// 007f3467  50                   push eax
// 007f3468  8b4260               mov eax, dword ptr [edx + 0x60]
// 007f346b  ffd0                 call eax
// 007f346d  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?Select@CXTPTabManagerItem@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
