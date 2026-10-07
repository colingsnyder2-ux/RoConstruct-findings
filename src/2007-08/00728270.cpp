// roc 2007-08 00728270  unit: boost::signals::detail::Vsignal_base_impl::?$sp_counted_impl_p  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00728270
//
// 00728270  6a14                 push 0x14
// 00728272  e87f7cf0ff           call 0x62fef6
// 00728277  83c404               add esp, 4
// 0072827a  85c0                 test eax, eax
// 0072827c  7406                 je 0x728284
// 0072827e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00728282  8908                 mov dword ptr [eax], ecx
// 00728284  8d4804               lea ecx, [eax + 4]
// 00728287  85c9                 test ecx, ecx
// 00728289  7406                 je 0x728291
// 0072828b  8b542408             mov edx, dword ptr [esp + 8]
// 0072828f  8911                 mov dword ptr [ecx], edx
// 00728291  8d4808               lea ecx, [eax + 8]
// 00728294  85c9                 test ecx, ecx
// 00728296  7416                 je 0x7282ae
// 00728298  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0072829c  56                   push esi
// 0072829d  8b32                 mov esi, dword ptr [edx]
// 0072829f  8931                 mov dword ptr [ecx], esi
// 007282a1  8b7204               mov esi, dword ptr [edx + 4]
// 007282a4  897104               mov dword ptr [ecx + 4], esi
// 007282a7  8b5208               mov edx, dword ptr [edx + 8]
// 007282aa  895108               mov dword ptr [ecx + 8], edx
// 007282ad  5e                   pop esi
// 007282ae  c20c00               ret 0xc
// library boost-1.34.1/libs\signals\src\connection.cpp (function ?_Buynode@?$list@Ubound_object@detail@signals@boost@@V?$allocator@Ubound_object@detail@signals@boost@@@std@@@std@@IAEPAU_Node@?$_List_nod@Ubound_object@detail@signals@boost@@V?$allocator@Ubound_object@detail@signals@boost@@@std@@@2@PAU342@0ABUbound_object@detail@signals@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
