// roc 2007-03 006e7b20  unit: seg_006e0000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006e7b20
//
// 006e7b20  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 006e7b23  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 006e7b26  50                   push eax
// 006e7b27  e854faffff           call 0x6e7580
// 006e7b2c  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?Remove@CXTPTabManagerItem@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
