// roc 2012-06 009ebad0  unit: CXTPToolTipContext::CStandardToolTip  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ebad0
//
// 009ebad0  8b4160               mov eax, dword ptr [ecx + 0x60]
// 009ebad3  85c0                 test eax, eax
// 009ebad5  7419                 je 0x9ebaf0
// 009ebad7  83782000             cmp dword ptr [eax + 0x20], 0
// 009ebadb  7413                 je 0x9ebaf0
// 009ebadd  8b4020               mov eax, dword ptr [eax + 0x20]
// 009ebae0  6a00                 push 0
// 009ebae2  6a00                 push 0
// 009ebae4  6801040000           push 0x401
// 009ebae9  50                   push eax
// 009ebaea  ff15043cb200         call dword ptr [0xb23c04]
// 009ebaf0  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPToolTipContext.cpp (function ?CancelToolTips@CXTPToolTipContext@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPToolTipContext.cpp
