// from server: 100% by auto
// roc 2007-08 006650b0  unit: CXTTreeCtrl  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006650b0
//
// 006650b0  8b442408             mov eax, dword ptr [esp + 8]
// 006650b4  8b542404             mov edx, dword ptr [esp + 4]
// 006650b8  c70000000000         mov dword ptr [eax], 0
// 006650be  8b4210               mov eax, dword ptr [edx + 0x10]
// 006650c1  894110               mov dword ptr [ecx + 0x10], eax
// 006650c4  33c0                 xor eax, eax
// 006650c6  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?OnBeginLabelEdit@CXTTreeBase@@IAEHPAUtagNMHDR@@PAJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
