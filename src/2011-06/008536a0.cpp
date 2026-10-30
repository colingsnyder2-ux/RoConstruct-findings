// roc 2011-06 008536a0  unit: CXTPPopupBar  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008536a0
//
// 008536a0  8b8180010000         mov eax, dword ptr [ecx + 0x180]
// 008536a6  85c0                 test eax, eax
// 008536a8  7407                 je 0x8536b1
// 008536aa  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 008536b0  c3                   ret 
// 008536b1  33c0                 xor eax, eax
// 008536b3  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?GetParentCommandBar@CXTPPopupBar@@MBEPAVCXTPCommandBar@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
