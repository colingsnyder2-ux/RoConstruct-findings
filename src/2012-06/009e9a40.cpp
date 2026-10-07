// roc 2012-06 009e9a40  unit: CXTPToolTipContextToolTip  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e9a40
//
// 009e9a40  8b442404             mov eax, dword ptr [esp + 4]
// 009e9a44  83e801               sub eax, 1
// 009e9a47  0fb7542408           movzx edx, word ptr [esp + 8]
// 009e9a4c  740e                 je 0x9e9a5c
// 009e9a4e  83e802               sub eax, 2
// 009e9a51  750f                 jne 0x9e9a62
// 009e9a53  899120010000         mov dword ptr [ecx + 0x120], edx
// 009e9a59  c20800               ret 8
// 009e9a5c  899124010000         mov dword ptr [ecx + 0x124], edx
// 009e9a62  33c0                 xor eax, eax
// 009e9a64  c20800               ret 8
// library xtp-13.2.1/Source\Common\XTPToolTipContext.cpp (function ?OnSetDelayTime@CXTPToolTipContextToolTip@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Common/XTPToolTipContext.cpp
