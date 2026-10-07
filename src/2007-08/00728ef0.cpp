// roc 2007-08 00728ef0  unit: boost::signals::detail::Ubasic_connection::?$sp_counted_impl_p  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00728ef0
//
// 00728ef0  8bc1                 mov eax, ecx
// 00728ef2  33c9                 xor ecx, ecx
// 00728ef4  8908                 mov dword ptr [eax], ecx
// 00728ef6  894804               mov dword ptr [eax + 4], ecx
// 00728ef9  894808               mov dword ptr [eax + 8], ecx
// 00728efc  89480c               mov dword ptr [eax + 0xc], ecx
// 00728eff  894810               mov dword ptr [eax + 0x10], ecx
// 00728f02  894814               mov dword ptr [eax + 0x14], ecx
// 00728f05  884818               mov byte ptr [eax + 0x18], cl
// 00728f08  c3                   ret 
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ??0named_slot_map_iterator@detail@signals@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
