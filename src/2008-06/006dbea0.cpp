// from server: 100% by auto
// roc 2008-06 006dbea0  unit: CXTTreeCtrl  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dbea0
//
// 006dbea0  8b442408             mov eax, dword ptr [esp + 8]
// 006dbea4  c70000000000         mov dword ptr [eax], 0
// 006dbeaa  c7411000000000       mov dword ptr [ecx + 0x10], 0
// 006dbeb1  33c0                 xor eax, eax
// 006dbeb3  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?OnEndLabelEdit@CXTTreeBase@@IAEHPAUtagNMHDR@@PAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
