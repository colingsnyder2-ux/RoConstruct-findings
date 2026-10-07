// roc 2008-06 0056a730  unit: RBX::VInstance::?$NonFactoryProduct  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056a730
//
// 0056a730  51                   push ecx
// 0056a731  8b5104               mov edx, dword ptr [ecx + 4]
// 0056a734  8b442408             mov eax, dword ptr [esp + 8]
// 0056a738  8910                 mov dword ptr [eax], edx
// 0056a73a  8b4908               mov ecx, dword ptr [ecx + 8]
// 0056a73d  c7042400000000       mov dword ptr [esp], 0
// 0056a744  894804               mov dword ptr [eax + 4], ecx
// 0056a747  85c9                 test ecx, ecx
// 0056a749  740c                 je 0x56a757
// 0056a74b  83c104               add ecx, 4
// 0056a74e  ba01000000           mov edx, 1
// 0056a753  f00fc111             lock xadd dword ptr [ecx], edx
// 0056a757  59                   pop ecx
// 0056a758  c20400               ret 4
// library boost-1.34.1/libs\signals\src\signal_base.cpp (function ?get_connection@connection@signals@boost@@QBE?AV?$shared_ptr@Ubasic_connection@detail@signals@boost@@@3@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/signal_base.cpp
