// roc 2007-08 0070f5f0  unit: CXTPRichRender::XTextHost  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070f5f0
//
// 0070f5f0  33c0                 xor eax, eax
// 0070f5f2  394108               cmp dword ptr [ecx + 8], eax
// 0070f5f5  0f95c0               setne al
// 0070f5f8  c3                   ret 
// library xtp-11.2.2-vc8/Source\Common\XTPOffice2007Image.cpp (function ?IsValid@CXTPOffice2007Images@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPOffice2007Image.cpp
