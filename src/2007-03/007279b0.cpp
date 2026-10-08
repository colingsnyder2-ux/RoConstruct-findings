// roc 2007-03 007279b0  unit: seg_00720000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007279b0
//
// 007279b0  51                   push ecx
// 007279b1  8b5104               mov edx, dword ptr [ecx + 4]
// 007279b4  8b442408             mov eax, dword ptr [esp + 8]
// 007279b8  8910                 mov dword ptr [eax], edx
// 007279ba  8b4908               mov ecx, dword ptr [ecx + 8]
// 007279bd  85c9                 test ecx, ecx
// 007279bf  c7042400000000       mov dword ptr [esp], 0
// 007279c6  894804               mov dword ptr [eax + 4], ecx
// 007279c9  740c                 je 0x7279d7
// 007279cb  83c104               add ecx, 4
// 007279ce  ba01000000           mov edx, 1
// 007279d3  f00fc111             lock xadd dword ptr [ecx], edx
// 007279d7  59                   pop ecx
// 007279d8  c20400               ret 4
// library boost-1.34.1/libs\signals\src\signal_base.cpp (function ?get_connection@connection@signals@boost@@QBE?AV?$shared_ptr@Ubasic_connection@detail@signals@boost@@@3@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/signal_base.cpp
