// roc 2010-06 007f5df0  unit: CXTPPopupBar  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f5df0
//
// 007f5df0  8b8180010000         mov eax, dword ptr [ecx + 0x180]
// 007f5df6  85c0                 test eax, eax
// 007f5df8  7407                 je 0x7f5e01
// 007f5dfa  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 007f5e00  c3                   ret 
// 007f5e01  33c0                 xor eax, eax
// 007f5e03  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?GetParentCommandBar@CXTPPopupBar@@MBEPAVCXTPCommandBar@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
