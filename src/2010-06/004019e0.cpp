// roc 2010-06 004019e0  unit: boost::detail::sp_counted_base  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004019e0
//
// 004019e0  85c9                 test ecx, ecx
// 004019e2  7408                 je 0x4019ec
// 004019e4  8b01                 mov eax, dword ptr [ecx]
// 004019e6  8b10                 mov edx, dword ptr [eax]
// 004019e8  6a01                 push 1
// 004019ea  ffd2                 call edx
// 004019ec  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?destroy@sp_counted_base@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
