// from server: 100% by auto
// roc 2011-06 008011a0  unit: RBX::Tasks::SequenceBase  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008011a0
//
// 008011a0  8b01                 mov eax, dword ptr [ecx]
// 008011a2  6aff                 push -1
// 008011a4  50                   push eax
// 008011a5  ff15a803a400         call dword ptr [0xa403a8]
// 008011ab  c3                   ret 
// library boost-1.34.1/libs\thread\src\mutex.cpp (function ?do_lock@timed_mutex@boost@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/mutex.cpp
