// roc 2008-06 005d22e0  unit: RBX::P8SpawnLocation::?$GetSetImpl  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d22e0
//
// 005d22e0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005d22e4  83f803               cmp eax, 3
// 005d22e7  741e                 je 0x5d2307
// 005d22e9  8b542408             mov edx, dword ptr [esp + 8]
// 005d22ed  c644240c00           mov byte ptr [esp + 0xc], 0
// 005d22f2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d22f6  51                   push ecx
// 005d22f7  50                   push eax
// 005d22f8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005d22fc  52                   push edx
// 005d22fd  50                   push eax
// 005d22fe  e8cdfaffff           call 0x5d1dd0
// 005d2303  83c410               add esp, 0x10
// 005d2306  c3                   ret 
// 005d2307  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d230b  c701a8269500         mov dword ptr [ecx], 0x9526a8
// 005d2311  c3                   ret 
// library rbxgs/v8datamodel\SpawnLocation.cpp (function ?manage@?$functor_manager@V?$bind_t@XV?$mf1@XVSpawnLocation@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVSpawnLocation@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@V?$allocator@X@std@@@function@detail@boost@@SAXABTfunction_buffer@234@AAT5234@W4functor_manager_operation_type@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/SpawnLocation.cpp
