// roc 2008-06 00595ae0  unit: boost::signals::detail::Ubasic_connection::?$sp_counted_impl_p  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00595ae0
//
// 00595ae0  80790400             cmp byte ptr [ecx + 4], 0
// 00595ae4  7410                 je 0x595af6
// 00595ae6  8b01                 mov eax, dword ptr [ecx]
// 00595ae8  50                   push eax
// 00595ae9  ff1530228000         call dword ptr [0x802230]
// 00595aef  50                   push eax
// 00595af0  ff1594228000         call dword ptr [0x802294]
// 00595af6  c3                   ret 
// library rbxgs/util\boost.cpp (function ??1ThreadPrioritySetter@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
