// roc 2007-03 0067d720  unit: seg_00670000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0067d720
//
// 0067d720  8b442404             mov eax, dword ptr [esp + 4]
// 0067d724  83e801               sub eax, 1
// 0067d727  0fb7542408           movzx edx, word ptr [esp + 8]
// 0067d72c  7410                 je 0x67d73e
// 0067d72e  83e802               sub eax, 2
// 0067d731  7511                 jne 0x67d744
// 0067d733  899120010000         mov dword ptr [ecx + 0x120], edx
// 0067d739  33c0                 xor eax, eax
// 0067d73b  c20800               ret 8
// 0067d73e  899124010000         mov dword ptr [ecx + 0x124], edx
// 0067d744  33c0                 xor eax, eax
// 0067d746  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Common\XTPToolTipContext.cpp (function ?OnSetDelayTime@CXTPToolTipContextToolTip@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPToolTipContext.cpp
