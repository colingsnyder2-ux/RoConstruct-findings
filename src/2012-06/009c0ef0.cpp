// from server: 100% by auto
// roc 2012-06 009c0ef0  unit: CXTTreeBase  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c0ef0
//
// 009c0ef0  8b4134               mov eax, dword ptr [ecx + 0x34]
// 009c0ef3  85c0                 test eax, eax
// 009c0ef5  750d                 jne 0x9c0f04
// 009c0ef7  50                   push eax
// 009c0ef8  ff15143bb200         call dword ptr [0xb23b14]
// 009c0efe  85c0                 test eax, eax
// 009c0f00  0f95c0               setne al
// 009c0f03  c3                   ret 
// 009c0f04  8b4020               mov eax, dword ptr [eax + 0x20]
// 009c0f07  50                   push eax
// 009c0f08  ff15143bb200         call dword ptr [0xb23b14]
// 009c0f0e  85c0                 test eax, eax
// 009c0f10  0f95c0               setne al
// 009c0f13  c3                   ret 
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?Init@CXTPTreeBase@@MAE_NXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
