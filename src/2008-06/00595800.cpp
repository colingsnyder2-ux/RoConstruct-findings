// roc 2008-06 00595800  unit: boost::signals::detail::Ubasic_connection::?$sp_counted_impl_p  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00595800
//
// 00595800  80790c00             cmp byte ptr [ecx + 0xc], 0
// 00595804  740f                 je 0x595815
// 00595806  8b4104               mov eax, dword ptr [ecx + 4]
// 00595809  8b11                 mov edx, dword ptr [ecx]
// 0059580b  50                   push eax
// 0059580c  8b4108               mov eax, dword ptr [ecx + 8]
// 0059580f  52                   push edx
// 00595810  ffd0                 call eax
// 00595812  83c408               add esp, 8
// 00595815  c3                   ret 
// library boost-1.34.1/libs\signals\src\slot.cpp (function ??1auto_disconnect_bound_object@detail@signals@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/slot.cpp
