// from server: 100% by auto
// roc 2007-08 007280e0  unit: boost::signals::detail::Vsignal_base_impl::?$sp_counted_impl_p  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007280e0
//
// 007280e0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007280e4  83ec08               sub esp, 8
// 007280e7  80790c00             cmp byte ptr [ecx + 0xc], 0
// 007280eb  56                   push esi
// 007280ec  8b742414             mov esi, dword ptr [esp + 0x14]
// 007280f0  7511                 jne 0x728103
// 007280f2  8b4604               mov eax, dword ptr [esi + 4]
// 007280f5  8b16                 mov edx, dword ptr [esi]
// 007280f7  50                   push eax
// 007280f8  52                   push edx
// 007280f9  8d44240c             lea eax, [esp + 0xc]
// 007280fd  50                   push eax
// 007280fe  e86dffffff           call 0x728070
// 00728103  56                   push esi
// 00728104  e8597bf0ff           call 0x62fc62
// 00728109  83c404               add esp, 4
// 0072810c  5e                   pop esi
// 0072810d  83c408               add esp, 8
// 00728110  c3                   ret 
// library boost-1.34.1/libs\signals\src\trackable.cpp (function ?signal_disconnected@trackable@signals@boost@@CAXPAX0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/trackable.cpp
