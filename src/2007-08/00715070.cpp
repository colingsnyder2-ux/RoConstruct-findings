// roc 2007-08 00715070  unit: CXTCaptionButton  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00715070
//
// 00715070  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00715073  6a00                 push 0
// 00715075  6a00                 push 0
// 00715077  50                   push eax
// 00715078  ff15dcec7700         call dword ptr [0x77ecdc]
// 0071507e  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTButton.cpp (function ?OnInvalidate@CXTButton@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTButton.cpp
