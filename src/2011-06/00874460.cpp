// roc 2011-06 00874460  unit: CXTPToolTipContext  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00874460
//
// 00874460  8b442404             mov eax, dword ptr [esp + 4]
// 00874464  50                   push eax
// 00874465  e806f4ffff           call 0x873870
// 0087446a  33c0                 xor eax, eax
// 0087446c  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPToolTipContext.cpp (function ?OnActivate@CXTPToolTipContextToolTip@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPToolTipContext.cpp
