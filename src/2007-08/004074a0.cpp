// roc 2007-08 004074a0  unit: boost::detail::sp_counted_base  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004074a0
//
// 004074a0  85c9                 test ecx, ecx
// 004074a2  7408                 je 0x4074ac
// 004074a4  8b01                 mov eax, dword ptr [ecx]
// 004074a6  8b10                 mov edx, dword ptr [eax]
// 004074a8  6a01                 push 1
// 004074aa  ffd2                 call edx
// 004074ac  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?destroy@sp_counted_base@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
