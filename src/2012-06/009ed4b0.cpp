// from server: 100% by auto
// roc 2012-06 009ed4b0  unit: CXTPToolTipContextToolTip  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ed4b0
//
// 009ed4b0  56                   push esi
// 009ed4b1  6a40                 push 0x40
// 009ed4b3  8bf1                 mov esi, ecx
// 009ed4b5  6a00                 push 0
// 009ed4b7  56                   push esi
// 009ed4b8  c7463c00000000       mov dword ptr [esi + 0x3c], 0
// 009ed4bf  e8b05ef9ff           call 0x983374
// 009ed4c4  83c40c               add esp, 0xc
// 009ed4c7  8bc6                 mov eax, esi
// 009ed4c9  5e                   pop esi
// 009ed4ca  c3                   ret 
// library xtp-15.2.1/Source\Controls\Util\XTPGlobal.cpp (function ??0CXTPLogFont@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Util/XTPGlobal.cpp
