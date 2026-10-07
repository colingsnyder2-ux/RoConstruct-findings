// roc 2008-06 00405e10  unit: boost::detail::sp_counted_base  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00405e10
//
// 00405e10  85c9                 test ecx, ecx
// 00405e12  7408                 je 0x405e1c
// 00405e14  8b01                 mov eax, dword ptr [ecx]
// 00405e16  8b10                 mov edx, dword ptr [eax]
// 00405e18  6a01                 push 1
// 00405e1a  ffd2                 call edx
// 00405e1c  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?destroy@sp_counted_base@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
