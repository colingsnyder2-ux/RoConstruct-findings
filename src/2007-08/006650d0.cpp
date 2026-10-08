// from server: 100% by auto
// roc 2007-08 006650d0  unit: CXTTreeCtrl  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006650d0
//
// 006650d0  8b442408             mov eax, dword ptr [esp + 8]
// 006650d4  c70000000000         mov dword ptr [eax], 0
// 006650da  c7411000000000       mov dword ptr [ecx + 0x10], 0
// 006650e1  33c0                 xor eax, eax
// 006650e3  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?OnEndLabelEdit@CXTTreeBase@@IAEHPAUtagNMHDR@@PAJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
