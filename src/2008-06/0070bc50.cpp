// from server: 100% by auto
// roc 2008-06 0070bc50  unit: CXTPToolTipContext::CStandardToolTip  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070bc50
//
// 0070bc50  8b4160               mov eax, dword ptr [ecx + 0x60]
// 0070bc53  85c0                 test eax, eax
// 0070bc55  7419                 je 0x70bc70
// 0070bc57  83782000             cmp dword ptr [eax + 0x20], 0
// 0070bc5b  7413                 je 0x70bc70
// 0070bc5d  8b4020               mov eax, dword ptr [eax + 0x20]
// 0070bc60  6a00                 push 0
// 0070bc62  6a00                 push 0
// 0070bc64  6801040000           push 0x401
// 0070bc69  50                   push eax
// 0070bc6a  ff15142e8000         call dword ptr [0x802e14]
// 0070bc70  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?CancelToolTips@CXTPToolTipContext@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
