// from server: 100% by auto
// roc 2011-06 00847230  unit: CXTTreeBase  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00847230
//
// 00847230  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 00847233  e8e0531800           call 0x9cc618
// 00847238  2408                 and al, 8
// 0084723a  33c9                 xor ecx, ecx
// 0084723c  3c08                 cmp al, 8
// 0084723e  0f94c1               sete cl
// 00847241  8ac1                 mov al, cl
// 00847243  c3                   ret 
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?HasEditLabels@CXTPTreeBase@@IBE_NXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
