// roc 2009-12 00849970  unit: CXTPControlSelector  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00849970
//
// 00849970  83b98401000000       cmp dword ptr [ecx + 0x184], 0
// 00849977  7509                 jne 0x849982
// 00849979  83b98801000000       cmp dword ptr [ecx + 0x188], 0
// 00849980  7422                 je 0x8499a4
// 00849982  8b8184010000         mov eax, dword ptr [ecx + 0x184]
// 00849988  8b9188010000         mov edx, dword ptr [ecx + 0x188]
// 0084998e  898194010000         mov dword ptr [ecx + 0x194], eax
// 00849994  8b01                 mov eax, dword ptr [ecx]
// 00849996  899198010000         mov dword ptr [ecx + 0x198], edx
// 0084999c  8b9098000000         mov edx, dword ptr [eax + 0x98]
// 008499a2  ffd2                 call edx
// 008499a4  c20800               ret 8
// copied from an identical function in another client (function ?OnLButtonUp@CXTPControlSelector@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlExt.cpp