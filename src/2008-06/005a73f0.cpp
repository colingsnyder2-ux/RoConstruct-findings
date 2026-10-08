// from server: 100% by auto
// roc 2008-06 005a73f0  unit: RBX::Log  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a73f0
//
// 005a73f0  6a00                 push 0
// 005a73f2  e819000000           call 0x5a7410
// 005a73f7  83c404               add esp, 4
// 005a73fa  85c0                 test eax, eax
// 005a73fc  7407                 je 0x5a7405
// 005a73fe  50                   push eax
// 005a73ff  e8dcfdffff           call 0x5a71e0
// 005a7404  59                   pop ecx
// 005a7405  c3                   ret 
// library boost-1.34.1/libs\thread\src\tss.cpp (function ?tss_thread_exit@?A0x568608d8@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/tss.cpp
