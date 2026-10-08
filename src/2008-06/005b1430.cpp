// roc 2008-06 005b1430  unit: RBX::VHat::?$FactoryProduct  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b1430
//
// 005b1430  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005b1434  83f803               cmp eax, 3
// 005b1437  741e                 je 0x5b1457
// 005b1439  8b542408             mov edx, dword ptr [esp + 8]
// 005b143d  c644240c00           mov byte ptr [esp + 0xc], 0
// 005b1442  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b1446  51                   push ecx
// 005b1447  50                   push eax
// 005b1448  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005b144c  52                   push edx
// 005b144d  50                   push eax
// 005b144e  e86df6ffff           call 0x5b0ac0
// 005b1453  83c410               add esp, 0x10
// 005b1456  c3                   ret 
// 005b1457  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b145b  c70178cc9400         mov dword ptr [ecx], 0x94cc78
// 005b1461  c3                   ret 
// library rbxgs/v8datamodel\Accoutrement.cpp (function ?manage@?$functor_manager@V?$bind_t@XV?$mf1@XVAccoutrement@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVAccoutrement@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@V?$allocator@X@std@@@function@detail@boost@@SAXABTfunction_buffer@234@AAT5234@W4functor_manager_operation_type@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
