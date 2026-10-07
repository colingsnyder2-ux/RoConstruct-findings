// roc 2007-08 00728810  unit: boost::signals::detail::Ubasic_connection::?$sp_counted_impl_p  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00728810
//
// 00728810  80790c00             cmp byte ptr [ecx + 0xc], 0
// 00728814  740f                 je 0x728825
// 00728816  8b4104               mov eax, dword ptr [ecx + 4]
// 00728819  8b11                 mov edx, dword ptr [ecx]
// 0072881b  50                   push eax
// 0072881c  8b4108               mov eax, dword ptr [ecx + 8]
// 0072881f  52                   push edx
// 00728820  ffd0                 call eax
// 00728822  83c408               add esp, 8
// 00728825  c3                   ret 
// library boost-1.34.1/libs\signals\src\slot.cpp (function ??1auto_disconnect_bound_object@detail@signals@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/slot.cpp
