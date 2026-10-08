// from server: 100% by auto
// roc 2007-08 00728c10  unit: boost::signals::detail::Ubasic_connection::?$sp_counted_impl_p  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00728c10
//
// 00728c10  8bc1                 mov eax, ecx
// 00728c12  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00728c16  8b11                 mov edx, dword ptr [ecx]
// 00728c18  8910                 mov dword ptr [eax], edx
// 00728c1a  8b5104               mov edx, dword ptr [ecx + 4]
// 00728c1d  895004               mov dword ptr [eax + 4], edx
// 00728c20  8b4908               mov ecx, dword ptr [ecx + 8]
// 00728c23  85c9                 test ecx, ecx
// 00728c25  894808               mov dword ptr [eax + 8], ecx
// 00728c28  740c                 je 0x728c36
// 00728c2a  83c104               add ecx, 4
// 00728c2d  ba01000000           mov edx, 1
// 00728c32  f00fc111             lock xadd dword ptr [ecx], edx
// 00728c36  c20400               ret 4
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ??0stored_group@detail@signals@boost@@QAE@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
