// from server: 100% by auto
// roc 2012-06 009bf480  unit: CXTPColorManager  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bf480
//
// 009bf480  8b442408             mov eax, dword ptr [esp + 8]
// 009bf484  c70000000000         mov dword ptr [eax], 0
// 009bf48a  c7411000000000       mov dword ptr [ecx + 0x10], 0
// 009bf491  33c0                 xor eax, eax
// 009bf493  c20800               ret 8
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?OnEndLabelEdit@CXTPTreeBase@@IAEHPAUtagNMHDR@@PAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
