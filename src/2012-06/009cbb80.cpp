// roc 2012-06 009cbb80  unit: CXTPPopupBar  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009cbb80
//
// 009cbb80  8b8180010000         mov eax, dword ptr [ecx + 0x180]
// 009cbb86  85c0                 test eax, eax
// 009cbb88  7407                 je 0x9cbb91
// 009cbb8a  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 009cbb90  c3                   ret 
// 009cbb91  33c0                 xor eax, eax
// 009cbb93  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?GetParentCommandBar@CXTPPopupBar@@MBEPAVCXTPCommandBar@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
