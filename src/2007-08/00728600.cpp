// from server: 100% by auto
// roc 2007-08 00728600  unit: boost::signals::detail::Vsignal_base_impl::?$sp_counted_impl_p  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00728600
//
// 00728600  51                   push ecx
// 00728601  8b442408             mov eax, dword ptr [esp + 8]
// 00728605  c6411001             mov byte ptr [ecx + 0x10], 1
// 00728609  8b5104               mov edx, dword ptr [ecx + 4]
// 0072860c  895004               mov dword ptr [eax + 4], edx
// 0072860f  8b5108               mov edx, dword ptr [ecx + 8]
// 00728612  85d2                 test edx, edx
// 00728614  c7042400000000       mov dword ptr [esp], 0
// 0072861b  895008               mov dword ptr [eax + 8], edx
// 0072861e  740e                 je 0x72862e
// 00728620  56                   push esi
// 00728621  83c204               add edx, 4
// 00728624  be01000000           mov esi, 1
// 00728629  f00fc132             lock xadd dword ptr [edx], esi
// 0072862d  5e                   pop esi
// 0072862e  8a490c               mov cl, byte ptr [ecx + 0xc]
// 00728631  88480c               mov byte ptr [eax + 0xc], cl
// 00728634  59                   pop ecx
// 00728635  c20400               ret 4
// library boost-1.34.1/libs\signals\src\connection.cpp (function ?release@scoped_connection@signals@boost@@QAE?AVconnection@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
