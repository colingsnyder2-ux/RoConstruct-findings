// from server: 100% by auto
// roc 2008-06 0078cd50  unit: CXTPRichRender::XTextHost  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078cd50
//
// 0078cd50  33c0                 xor eax, eax
// 0078cd52  394108               cmp dword ptr [ecx + 8], eax
// 0078cd55  0f95c0               setne al
// 0078cd58  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPOffice2007Image.cpp (function ?IsValid@CXTPOffice2007Images@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPOffice2007Image.cpp
