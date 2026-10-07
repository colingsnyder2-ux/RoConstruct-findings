// roc 2012-06 009bf6b0  unit: CXTTreeBase  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bf6b0
//
// 009bf6b0  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 009bf6b3  e81a9f0d00           call 0xa995d2
// 009bf6b8  2408                 and al, 8
// 009bf6ba  33c9                 xor ecx, ecx
// 009bf6bc  3c08                 cmp al, 8
// 009bf6be  0f94c1               sete cl
// 009bf6c1  8ac1                 mov al, cl
// 009bf6c3  c3                   ret 
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?HasEditLabels@CXTPTreeBase@@IBE_NXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
