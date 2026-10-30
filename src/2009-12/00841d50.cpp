// roc 2009-12 00841d50  unit: CXTPPopupBar  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00841d50
//
// 00841d50  8b8180010000         mov eax, dword ptr [ecx + 0x180]
// 00841d56  85c0                 test eax, eax
// 00841d58  7407                 je 0x841d61
// 00841d5a  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 00841d60  c3                   ret 
// 00841d61  33c0                 xor eax, eax
// 00841d63  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?GetParentCommandBar@CXTPPopupBar@@MBEPAVCXTPCommandBar@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
