// roc 2008-06 006f6230  unit: CXTPControlSelector  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f6230
//
// 006f6230  83b98401000000       cmp dword ptr [ecx + 0x184], 0
// 006f6237  7509                 jne 0x6f6242
// 006f6239  83b98801000000       cmp dword ptr [ecx + 0x188], 0
// 006f6240  7422                 je 0x6f6264
// 006f6242  8b8184010000         mov eax, dword ptr [ecx + 0x184]
// 006f6248  8b9188010000         mov edx, dword ptr [ecx + 0x188]
// 006f624e  898194010000         mov dword ptr [ecx + 0x194], eax
// 006f6254  8b01                 mov eax, dword ptr [ecx]
// 006f6256  899198010000         mov dword ptr [ecx + 0x198], edx
// 006f625c  8b9098000000         mov edx, dword ptr [eax + 0x98]
// 006f6262  ffd2                 call edx
// 006f6264  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlExt.cpp (function ?OnLButtonUp@CXTPControlSelector@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlExt.cpp
