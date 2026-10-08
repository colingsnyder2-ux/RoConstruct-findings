// roc 2007-03 00726ac0  unit: seg_00720000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00726ac0
//
// 00726ac0  80790400             cmp byte ptr [ecx + 4], 0
// 00726ac4  740c                 je 0x726ad2
// 00726ac6  8b01                 mov eax, dword ptr [ecx]
// 00726ac8  89442404             mov dword ptr [esp + 4], eax
// 00726acc  ff25bcd27700         jmp dword ptr [0x77d2bc]
// 00726ad2  8b09                 mov ecx, dword ptr [ecx]
// 00726ad4  6aff                 push -1
// 00726ad6  51                   push ecx
// 00726ad7  ff1574d27700         call dword ptr [0x77d274]
// 00726add  c20400               ret 4
// library boost-1.34.1/libs\thread\src\mutex.cpp (function ?do_lock@mutex@boost@@AAEXAAPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/mutex.cpp
