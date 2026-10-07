// roc 2007-08 007273c0  unit: boost::thread_resource_error  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007273c0
//
// 007273c0  51                   push ecx
// 007273c1  8b5104               mov edx, dword ptr [ecx + 4]
// 007273c4  8b442408             mov eax, dword ptr [esp + 8]
// 007273c8  8910                 mov dword ptr [eax], edx
// 007273ca  8b4908               mov ecx, dword ptr [ecx + 8]
// 007273cd  85c9                 test ecx, ecx
// 007273cf  c7042400000000       mov dword ptr [esp], 0
// 007273d6  894804               mov dword ptr [eax + 4], ecx
// 007273d9  740c                 je 0x7273e7
// 007273db  83c104               add ecx, 4
// 007273de  ba01000000           mov edx, 1
// 007273e3  f00fc111             lock xadd dword ptr [ecx], edx
// 007273e7  59                   pop ecx
// 007273e8  c20400               ret 4
// library boost-1.34.1/libs\signals\src\signal_base.cpp (function ?get_connection@connection@signals@boost@@QBE?AV?$shared_ptr@Ubasic_connection@detail@signals@boost@@@3@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/signal_base.cpp
