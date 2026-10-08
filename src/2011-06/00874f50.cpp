// from server: 100% by auto
// roc 2011-06 00874f50  unit: CXTPToolTipContextToolTip  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00874f50
//
// 00874f50  56                   push esi
// 00874f51  6a40                 push 0x40
// 00874f53  8bf1                 mov esi, ecx
// 00874f55  6a00                 push 0
// 00874f57  56                   push esi
// 00874f58  c7463c00000000       mov dword ptr [esi + 0x3c], 0
// 00874f5f  e88063f9ff           call 0x80b2e4
// 00874f64  83c40c               add esp, 0xc
// 00874f67  8bc6                 mov eax, esi
// 00874f69  5e                   pop esi
// 00874f6a  c3                   ret 
// library xtp-15.2.1/Source\Controls\Util\XTPGlobal.cpp (function ??0CXTPLogFont@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Util/XTPGlobal.cpp
