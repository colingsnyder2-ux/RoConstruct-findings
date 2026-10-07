// roc 2008-06 00792950  unit: CXTCaptionButton  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00792950
//
// 00792950  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00792953  6a00                 push 0
// 00792955  6a00                 push 0
// 00792957  50                   push eax
// 00792958  ff15182e8000         call dword ptr [0x802e18]
// 0079295e  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTButton.cpp (function ?OnInvalidate@CXTButton@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButton.cpp
