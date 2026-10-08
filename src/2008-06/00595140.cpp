// from server: 100% by auto
// roc 2008-06 00595140  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00595140
//
// 00595140  6a14                 push 0x14
// 00595142  e8d9b71000           call 0x6a0920
// 00595147  83c404               add esp, 4
// 0059514a  85c0                 test eax, eax
// 0059514c  7406                 je 0x595154
// 0059514e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00595152  8908                 mov dword ptr [eax], ecx
// 00595154  8d4804               lea ecx, [eax + 4]
// 00595157  85c9                 test ecx, ecx
// 00595159  7406                 je 0x595161
// 0059515b  8b542408             mov edx, dword ptr [esp + 8]
// 0059515f  8911                 mov dword ptr [ecx], edx
// 00595161  8d4808               lea ecx, [eax + 8]
// 00595164  85c9                 test ecx, ecx
// 00595166  7416                 je 0x59517e
// 00595168  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0059516c  56                   push esi
// 0059516d  8b32                 mov esi, dword ptr [edx]
// 0059516f  8931                 mov dword ptr [ecx], esi
// 00595171  8b7204               mov esi, dword ptr [edx + 4]
// 00595174  897104               mov dword ptr [ecx + 4], esi
// 00595177  8b5208               mov edx, dword ptr [edx + 8]
// 0059517a  895108               mov dword ptr [ecx + 8], edx
// 0059517d  5e                   pop esi
// 0059517e  c20c00               ret 0xc
// library boost-1.34.1/libs\signals\src\connection.cpp (function ?_Buynode@?$list@Ubound_object@detail@signals@boost@@V?$allocator@Ubound_object@detail@signals@boost@@@std@@@std@@IAEPAU_Node@?$_List_nod@Ubound_object@detail@signals@boost@@V?$allocator@Ubound_object@detail@signals@boost@@@std@@@2@PAU342@0ABUbound_object@detail@signals@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
