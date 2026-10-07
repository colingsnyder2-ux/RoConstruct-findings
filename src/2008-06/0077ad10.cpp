// roc 2008-06 0077ad10  unit: CXTPTabManagerItem  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077ad10
//
// 0077ad10  8bc1                 mov eax, ecx
// 0077ad12  8b4860               mov ecx, dword ptr [eax + 0x60]
// 0077ad15  8b11                 mov edx, dword ptr [ecx]
// 0077ad17  50                   push eax
// 0077ad18  8b4260               mov eax, dword ptr [edx + 0x60]
// 0077ad1b  ffd0                 call eax
// 0077ad1d  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?Select@CXTPTabManagerItem@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
