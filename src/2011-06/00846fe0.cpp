// roc 2011-06 00846fe0  unit: CXTPColorManager  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00846fe0
//
// 00846fe0  8b442408             mov eax, dword ptr [esp + 8]
// 00846fe4  8b542404             mov edx, dword ptr [esp + 4]
// 00846fe8  c70000000000         mov dword ptr [eax], 0
// 00846fee  8b4210               mov eax, dword ptr [edx + 0x10]
// 00846ff1  894110               mov dword ptr [ecx + 0x10], eax
// 00846ff4  33c0                 xor eax, eax
// 00846ff6  c20800               ret 8
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?OnBeginLabelEdit@CXTPTreeBase@@IAEHPAUtagNMHDR@@PAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
