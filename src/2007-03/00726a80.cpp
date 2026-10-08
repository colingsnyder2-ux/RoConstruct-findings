// roc 2007-03 00726a80  unit: seg_00720000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00726a80
//
// 00726a80  80790400             cmp byte ptr [ecx + 4], 0
// 00726a84  740a                 je 0x726a90
// 00726a86  8b01                 mov eax, dword ptr [ecx]
// 00726a88  50                   push eax
// 00726a89  ff15bcd27700         call dword ptr [0x77d2bc]
// 00726a8f  c3                   ret 
// 00726a90  8b09                 mov ecx, dword ptr [ecx]
// 00726a92  6aff                 push -1
// 00726a94  51                   push ecx
// 00726a95  ff1574d27700         call dword ptr [0x77d274]
// 00726a9b  c3                   ret 
// library boost-1.34.1/libs\thread\src\mutex.cpp (function ?do_lock@mutex@boost@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/mutex.cpp
