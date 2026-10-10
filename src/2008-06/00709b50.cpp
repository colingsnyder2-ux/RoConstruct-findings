// roc 2008-06 00709b50  unit: CXTPToolTipContextToolTip  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00709b50
//
// 00709b50  8b442408             mov eax, dword ptr [esp + 8]
// 00709b54  50                   push eax
// 00709b55  81c128010000         add ecx, 0x128
// 00709b5b  ff15b83e8000         call dword ptr [0x803eb8]
// 00709b61  33c0                 xor eax, eax
// 00709b63  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\Common\XTPToolTipContext.cpp (function ?OnSetTitle@CXTPToolTipContextToolTip@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPToolTipContext.cpp
