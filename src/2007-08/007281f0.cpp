// from server: 100% by auto
// roc 2007-08 007281f0  unit: boost::signals::detail::Vsignal_base_impl::?$sp_counted_impl_p  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007281f0
//
// 007281f0  56                   push esi
// 007281f1  8bf1                 mov esi, ecx
// 007281f3  c6460c01             mov byte ptr [esi + 0xc], 1
// 007281f7  e894f0ceff           call 0x417290
// 007281fc  8b4604               mov eax, dword ptr [esi + 4]
// 007281ff  50                   push eax
// 00728200  e85d7af0ff           call 0x62fc62
// 00728205  83c404               add esp, 4
// 00728208  c7460400000000       mov dword ptr [esi + 4], 0
// 0072820f  5e                   pop esi
// 00728210  c3                   ret 
// library boost-1.34.1/libs\signals\src\trackable.cpp (function ??1trackable@signals@boost@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/trackable.cpp
