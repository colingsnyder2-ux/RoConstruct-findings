// roc 2011-06 00847000  unit: CXTPColorManager  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00847000
//
// 00847000  8b442408             mov eax, dword ptr [esp + 8]
// 00847004  c70000000000         mov dword ptr [eax], 0
// 0084700a  c7411000000000       mov dword ptr [ecx + 0x10], 0
// 00847011  33c0                 xor eax, eax
// 00847013  c20800               ret 8
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?OnEndLabelEdit@CXTPTreeBase@@IAEHPAUtagNMHDR@@PAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
