// roc 2012-06 0097be10  unit: RBX::TaskScheduler::VThread::?$sp_counted_impl_p  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0097be10
//
// 0097be10  8b01                 mov eax, dword ptr [ecx]
// 0097be12  6aff                 push -1
// 0097be14  50                   push eax
// 0097be15  ff15e421b200         call dword ptr [0xb221e4]
// 0097be1b  c3                   ret 
// library boost-1.34.1/libs\thread\src\mutex.cpp (function ?do_lock@timed_mutex@boost@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/mutex.cpp
