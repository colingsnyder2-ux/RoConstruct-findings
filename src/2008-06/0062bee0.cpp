// roc 2008-06 0062bee0  unit: RBX::P8FlagStand::?$GetSetImpl  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062bee0
//
// 0062bee0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0062bee4  83f803               cmp eax, 3
// 0062bee7  741e                 je 0x62bf07
// 0062bee9  8b542408             mov edx, dword ptr [esp + 8]
// 0062beed  c644240c00           mov byte ptr [esp + 0xc], 0
// 0062bef2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062bef6  51                   push ecx
// 0062bef7  50                   push eax
// 0062bef8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0062befc  52                   push edx
// 0062befd  50                   push eax
// 0062befe  e82dfcffff           call 0x62bb30
// 0062bf03  83c410               add esp, 0x10
// 0062bf06  c3                   ret 
// 0062bf07  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062bf0b  c70140bf9500         mov dword ptr [ecx], 0x95bf40
// 0062bf11  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?manage@?$functor_manager@V?$bind_t@XV?$mf1@XVFlagStand@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVFlagStand@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@V?$allocator@X@std@@@function@detail@boost@@SAXABTfunction_buffer@234@AAT5234@W4functor_manager_operation_type@234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
