// roc 2007-08 00728a70  unit: boost::signals::detail::Ubasic_connection::?$sp_counted_impl_p  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00728a70
//
// 00728a70  8bc1                 mov eax, ecx
// 00728a72  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00728a76  8a5118               mov dl, byte ptr [ecx + 0x18]
// 00728a79  885018               mov byte ptr [eax + 0x18], dl
// 00728a7c  80781800             cmp byte ptr [eax + 0x18], 0
// 00728a80  8b11                 mov edx, dword ptr [ecx]
// 00728a82  8910                 mov dword ptr [eax], edx
// 00728a84  8b5104               mov edx, dword ptr [ecx + 4]
// 00728a87  895004               mov dword ptr [eax + 4], edx
// 00728a8a  8b5108               mov edx, dword ptr [ecx + 8]
// 00728a8d  895008               mov dword ptr [eax + 8], edx
// 00728a90  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00728a93  89500c               mov dword ptr [eax + 0xc], edx
// 00728a96  740c                 je 0x728aa4
// 00728a98  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00728a9b  895010               mov dword ptr [eax + 0x10], edx
// 00728a9e  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 00728aa1  894814               mov dword ptr [eax + 0x14], ecx
// 00728aa4  c20400               ret 4
// library boost-1.34.1/libs\signals\src\signal_base.cpp (function ??4named_slot_map_iterator@detail@signals@boost@@QAEAAV0123@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/signal_base.cpp
