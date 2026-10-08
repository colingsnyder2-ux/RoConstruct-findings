// from server: 100% by auto
// roc 2007-08 00728f10  unit: boost::signals::detail::Ubasic_connection::?$sp_counted_impl_p  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00728f10
//
// 00728f10  8bc1                 mov eax, ecx
// 00728f12  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00728f16  8b11                 mov edx, dword ptr [ecx]
// 00728f18  8910                 mov dword ptr [eax], edx
// 00728f1a  8b5104               mov edx, dword ptr [ecx + 4]
// 00728f1d  895004               mov dword ptr [eax + 4], edx
// 00728f20  8b5108               mov edx, dword ptr [ecx + 8]
// 00728f23  895008               mov dword ptr [eax + 8], edx
// 00728f26  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00728f29  89500c               mov dword ptr [eax + 0xc], edx
// 00728f2c  c7401000000000       mov dword ptr [eax + 0x10], 0
// 00728f33  c7401400000000       mov dword ptr [eax + 0x14], 0
// 00728f3a  8a5118               mov dl, byte ptr [ecx + 0x18]
// 00728f3d  84d2                 test dl, dl
// 00728f3f  885018               mov byte ptr [eax + 0x18], dl
// 00728f42  740c                 je 0x728f50
// 00728f44  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00728f47  895010               mov dword ptr [eax + 0x10], edx
// 00728f4a  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 00728f4d  894814               mov dword ptr [eax + 0x14], ecx
// 00728f50  c20400               ret 4
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ??0named_slot_map_iterator@detail@signals@boost@@QAE@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
