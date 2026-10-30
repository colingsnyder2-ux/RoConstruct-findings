// from server: 100% by auto
// roc 2007-08 00665300  unit: CXTTreeBase  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00665300
//
// 00665300  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 00665303  e80a310d00           call 0x738412
// 00665308  2408                 and al, 8
// 0066530a  33c9                 xor ecx, ecx
// 0066530c  3c08                 cmp al, 8
// 0066530e  0f94c1               sete cl
// 00665311  8ac1                 mov al, cl
// 00665313  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?HasEditLabels@CXTTreeBase@@IBE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
