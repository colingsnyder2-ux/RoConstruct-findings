// roc 2008-06 00594ce0  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00594ce0
//
// 00594ce0  80790400             cmp byte ptr [ecx + 4], 0
// 00594ce4  740a                 je 0x594cf0
// 00594ce6  8b01                 mov eax, dword ptr [ecx]
// 00594ce8  50                   push eax
// 00594ce9  ff15d4228000         call dword ptr [0x8022d4]
// 00594cef  c3                   ret 
// 00594cf0  8b09                 mov ecx, dword ptr [ecx]
// 00594cf2  6aff                 push -1
// 00594cf4  51                   push ecx
// 00594cf5  ff1588228000         call dword ptr [0x802288]
// 00594cfb  c3                   ret 
// library boost-1.34.1/libs\thread\src\mutex.cpp (function ?do_lock@mutex@boost@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/mutex.cpp
