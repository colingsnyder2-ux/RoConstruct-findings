// from server: 100% by auto
// roc 2012-06 00401c40  unit: boost::detail::sp_counted_base  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00401c40
//
// 00401c40  85c9                 test ecx, ecx
// 00401c42  7408                 je 0x401c4c
// 00401c44  8b01                 mov eax, dword ptr [ecx]
// 00401c46  8b10                 mov edx, dword ptr [eax]
// 00401c48  6a01                 push 1
// 00401c4a  ffd2                 call edx
// 00401c4c  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?destroy@sp_counted_base@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
