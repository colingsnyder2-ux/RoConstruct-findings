// from server: 100% by auto
// roc 2007-08 00725a00  unit: boost::thread_resource_error  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00725a00
//
// 00725a00  6a00                 push 0
// 00725a02  e899040000           call 0x725ea0
// 00725a07  83c404               add esp, 4
// 00725a0a  85c0                 test eax, eax
// 00725a0c  7407                 je 0x725a15
// 00725a0e  50                   push eax
// 00725a0f  e8fcfeffff           call 0x725910
// 00725a14  59                   pop ecx
// 00725a15  c3                   ret 
// library boost-1.34.1/libs\thread\src\tss.cpp (function ?tss_thread_exit@?A0x568608d8@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/tss.cpp
