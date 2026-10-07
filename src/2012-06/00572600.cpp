// roc 2012-06 00572600  unit: AsyncResult  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00572600
//
// 00572600  51                   push ecx
// 00572601  8b5104               mov edx, dword ptr [ecx + 4]
// 00572604  8b442408             mov eax, dword ptr [esp + 8]
// 00572608  8910                 mov dword ptr [eax], edx
// 0057260a  8b4908               mov ecx, dword ptr [ecx + 8]
// 0057260d  c7042400000000       mov dword ptr [esp], 0
// 00572614  894804               mov dword ptr [eax + 4], ecx
// 00572617  85c9                 test ecx, ecx
// 00572619  740c                 je 0x572627
// 0057261b  83c104               add ecx, 4
// 0057261e  ba01000000           mov edx, 1
// 00572623  f00fc111             lock xadd dword ptr [ecx], edx
// 00572627  59                   pop ecx
// 00572628  c20400               ret 4
// library boost-1.34.1/libs\signals\src\signal_base.cpp (function ?get_connection@connection@signals@boost@@QBE?AV?$shared_ptr@Ubasic_connection@detail@signals@boost@@@3@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/signal_base.cpp
