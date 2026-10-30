// roc 2007-03 006e55a0  unit: seg_006e0000  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006e55a0
//
// 006e55a0  8bc1                 mov eax, ecx
// 006e55a2  8b4860               mov ecx, dword ptr [eax + 0x60]
// 006e55a5  8b11                 mov edx, dword ptr [ecx]
// 006e55a7  50                   push eax
// 006e55a8  8b4260               mov eax, dword ptr [edx + 0x60]
// 006e55ab  ffd0                 call eax
// 006e55ad  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?Select@CXTPTabManagerItem@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
