// roc 2009-06 00766f70  unit: CXTPPopupBar  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00766f70
//
// 00766f70  8b8180010000         mov eax, dword ptr [ecx + 0x180]
// 00766f76  85c0                 test eax, eax
// 00766f78  7407                 je 0x766f81
// 00766f7a  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 00766f80  c3                   ret 
// 00766f81  33c0                 xor eax, eax
// 00766f83  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?GetParentCommandBar@CXTPPopupBar@@MBEPAVCXTPCommandBar@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
