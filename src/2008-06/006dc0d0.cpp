// from server: 100% by auto
// roc 2008-06 006dc0d0  unit: CXTTreeBase  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dc0d0
//
// 006dc0d0  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 006dc0d3  e832ff0d00           call 0x7bc00a
// 006dc0d8  2408                 and al, 8
// 006dc0da  33c9                 xor ecx, ecx
// 006dc0dc  3c08                 cmp al, 8
// 006dc0de  0f94c1               sete cl
// 006dc0e1  8ac1                 mov al, cl
// 006dc0e3  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?HasEditLabels@CXTTreeBase@@IBE_NXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
