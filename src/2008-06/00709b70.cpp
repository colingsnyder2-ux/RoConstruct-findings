// roc 2008-06 00709b70  unit: CXTPToolTipContextToolTip  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00709b70
//
// 00709b70  8b442404             mov eax, dword ptr [esp + 4]
// 00709b74  83e801               sub eax, 1
// 00709b77  0fb7542408           movzx edx, word ptr [esp + 8]
// 00709b7c  740e                 je 0x709b8c
// 00709b7e  83e802               sub eax, 2
// 00709b81  750f                 jne 0x709b92
// 00709b83  899120010000         mov dword ptr [ecx + 0x120], edx
// 00709b89  c20800               ret 8
// 00709b8c  899124010000         mov dword ptr [ecx + 0x124], edx
// 00709b92  33c0                 xor eax, eax
// 00709b94  c20800               ret 8
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?OnSetDelayTime@CXTPToolTipContextToolTip@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
