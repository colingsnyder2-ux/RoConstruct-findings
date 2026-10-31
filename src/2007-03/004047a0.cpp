// roc 2007-03 004047a0  unit: seg_00400000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004047a0
//
// 004047a0  85c9                 test ecx, ecx
// 004047a2  7416                 je 0x4047ba
// 004047a4  8b542404             mov edx, dword ptr [esp + 4]
// 004047a8  8d4104               lea eax, [ecx + 4]
// 004047ab  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004047af  51                   push ecx
// 004047b0  52                   push edx
// 004047b1  50                   push eax
// 004047b2  e839faffff           call 0x4041f0
// 004047b7  c20800               ret 8
// 004047ba  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004047be  8b542404             mov edx, dword ptr [esp + 4]
// 004047c2  51                   push ecx
// 004047c3  33c0                 xor eax, eax
// 004047c5  52                   push edx
// 004047c6  50                   push eax
// 004047c7  e824faffff           call 0x4041f0
// 004047cc  c20800               ret 8
// copied from an identical function in another client (function ?AddTermFunc@CAtlModule@ATL@@QAEJP6GXK@ZK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_typeinfo_getti_88c46520c3afb67d.cpp