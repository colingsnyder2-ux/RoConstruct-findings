// roc 2008-06 0061a080  unit: RBX::InletTool  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061a080
//
// 0061a080  683cbf9700           push 0x97bf3c
// 0061a085  ff15e0228000         call dword ptr [0x8022e0]
// 0061a08b  c3                   ret 
// library boost-1.34.1/libs\thread\src\tss_hooks.cpp (function ?init_threadmon_mutex@?A0xcd019971@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/tss_hooks.cpp
