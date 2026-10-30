// roc 2009-12 0085fc70  unit: CXTPToolTipContextToolTip  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085fc70
//
// 0085fc70  8b442408             mov eax, dword ptr [esp + 8]
// 0085fc74  50                   push eax
// 0085fc75  81c128010000         add ecx, 0x128
// 0085fc7b  ff155cde9800         call dword ptr [0x98de5c]
// 0085fc81  33c0                 xor eax, eax
// 0085fc83  c20800               ret 8
// copied from an identical function in another client (function ?OnSetTitle@CXTPToolTipContextToolTip@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPToolTipContext.cpp