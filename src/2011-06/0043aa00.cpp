// from server: 100% by auto
// roc 2011-06 0043aa00  unit: AsyncResult  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0043aa00
//
// 0043aa00  51                   push ecx
// 0043aa01  8b5104               mov edx, dword ptr [ecx + 4]
// 0043aa04  8b442408             mov eax, dword ptr [esp + 8]
// 0043aa08  8910                 mov dword ptr [eax], edx
// 0043aa0a  8b4908               mov ecx, dword ptr [ecx + 8]
// 0043aa0d  c7042400000000       mov dword ptr [esp], 0
// 0043aa14  894804               mov dword ptr [eax + 4], ecx
// 0043aa17  85c9                 test ecx, ecx
// 0043aa19  740c                 je 0x43aa27
// 0043aa1b  83c104               add ecx, 4
// 0043aa1e  ba01000000           mov edx, 1
// 0043aa23  f00fc111             lock xadd dword ptr [ecx], edx
// 0043aa27  59                   pop ecx
// 0043aa28  c20400               ret 4
// library boost-1.34.1/libs\signals\src\signal_base.cpp (function ?get_connection@connection@signals@boost@@QBE?AV?$shared_ptr@Ubasic_connection@detail@signals@boost@@@3@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/signal_base.cpp
