// roc 2011-06 00401d90  unit: boost::detail::sp_counted_base  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00401d90
//
// 00401d90  85c9                 test ecx, ecx
// 00401d92  7408                 je 0x401d9c
// 00401d94  8b01                 mov eax, dword ptr [ecx]
// 00401d96  8b10                 mov edx, dword ptr [eax]
// 00401d98  6a01                 push 1
// 00401d9a  ffd2                 call edx
// 00401d9c  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?destroy@sp_counted_base@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
