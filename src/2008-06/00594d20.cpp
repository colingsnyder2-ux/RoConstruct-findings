// from server: 100% by auto
// roc 2008-06 00594d20  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00594d20
//
// 00594d20  80790400             cmp byte ptr [ecx + 4], 0
// 00594d24  740c                 je 0x594d32
// 00594d26  8b01                 mov eax, dword ptr [ecx]
// 00594d28  89442404             mov dword ptr [esp + 4], eax
// 00594d2c  ff25d4228000         jmp dword ptr [0x8022d4]
// 00594d32  8b09                 mov ecx, dword ptr [ecx]
// 00594d34  6aff                 push -1
// 00594d36  51                   push ecx
// 00594d37  ff1588228000         call dword ptr [0x802288]
// 00594d3d  c20400               ret 4
// library boost-1.34.1/libs\thread\src\mutex.cpp (function ?do_lock@mutex@boost@@AAEXAAPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/mutex.cpp
