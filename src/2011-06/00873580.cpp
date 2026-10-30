// from server: 100% by auto
// roc 2011-06 00873580  unit: CXTPToolTipContext::CStandardToolTip  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00873580
//
// 00873580  8b4160               mov eax, dword ptr [ecx + 0x60]
// 00873583  85c0                 test eax, eax
// 00873585  7419                 je 0x8735a0
// 00873587  83782000             cmp dword ptr [eax + 0x20], 0
// 0087358b  7413                 je 0x8735a0
// 0087358d  8b4020               mov eax, dword ptr [eax + 0x20]
// 00873590  6a00                 push 0
// 00873592  6a00                 push 0
// 00873594  6801040000           push 0x401
// 00873599  50                   push eax
// 0087359a  ff15c019a400         call dword ptr [0xa419c0]
// 008735a0  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPToolTipContext.cpp (function ?CancelToolTips@CXTPToolTipContext@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPToolTipContext.cpp
