// from server: 100% by auto
// roc 2008-06 0077ad00  unit: CXTPTabManagerItem  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077ad00
//
// 0077ad00  8bc1                 mov eax, ecx
// 0077ad02  8b4860               mov ecx, dword ptr [eax + 0x60]
// 0077ad05  8b11                 mov edx, dword ptr [ecx]
// 0077ad07  50                   push eax
// 0077ad08  8b4214               mov eax, dword ptr [edx + 0x14]
// 0077ad0b  ffd0                 call eax
// 0077ad0d  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?GetColor@CXTPTabManagerItem@@QAEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
