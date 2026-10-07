// roc 2008-06 0078a390  unit: CXTColorBase  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078a390
//
// 0078a390  56                   push esi
// 0078a391  8bf1                 mov esi, ecx
// 0078a393  ff15b42d8000         call dword ptr [0x802db4]
// 0078a399  8bce                 mov ecx, esi
// 0078a39b  e8c868f1ff           call 0x6a0c68
// 0078a3a0  5e                   pop esi
// 0078a3a1  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTColorPageCustom.cpp (function ?OnLButtonUp@CXTColorBase@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageCustom.cpp
