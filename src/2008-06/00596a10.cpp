// roc 2008-06 00596a10  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00596a10
//
// 00596a10  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00596a14  83f803               cmp eax, 3
// 00596a17  741e                 je 0x596a37
// 00596a19  8b542408             mov edx, dword ptr [esp + 8]
// 00596a1d  c644240c00           mov byte ptr [esp + 0xc], 0
// 00596a22  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00596a26  51                   push ecx
// 00596a27  50                   push eax
// 00596a28  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00596a2c  52                   push edx
// 00596a2d  50                   push eax
// 00596a2e  e89dfdffff           call 0x5967d0
// 00596a33  83c410               add esp, 0x10
// 00596a36  c3                   ret 
// 00596a37  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00596a3b  c70118999400         mov dword ptr [ecx], 0x949918
// 00596a41  c3                   ret 
// library rbxgs/util\boost.cpp (function ?manage@?$functor_manager@U?$tss_adapter@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@detail@boost@@V?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@SAXABTfunction_buffer@234@AAT5234@W4functor_manager_operation_type@234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
