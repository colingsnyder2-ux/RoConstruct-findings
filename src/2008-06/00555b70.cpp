// roc 2008-06 00555b70  unit: RBX::Reflection::Z::$$A6AXMM::?$TSignalDesc::TSignalInstance  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00555b70
//
// 00555b70  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00555b74  83f803               cmp eax, 3
// 00555b77  741e                 je 0x555b97
// 00555b79  8b542408             mov edx, dword ptr [esp + 8]
// 00555b7d  c644240c00           mov byte ptr [esp + 0xc], 0
// 00555b82  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00555b86  51                   push ecx
// 00555b87  50                   push eax
// 00555b88  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00555b8c  52                   push edx
// 00555b8d  50                   push eax
// 00555b8e  e81dfdffff           call 0x5558b0
// 00555b93  83c410               add esp, 0x10
// 00555b96  c3                   ret 
// 00555b97  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00555b9b  c701d82f9400         mov dword ptr [ecx], 0x942fd8
// 00555ba1  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ?manage@?$functor_manager@V?$bind_t@XV?$mf1@XVRunService@RBX@@V?$shared_ptr@VDataModel@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@_bi@boost@@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@23@@_bi@3@@_bi@boost@@V?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@SAXABTfunction_buffer@234@AAT5234@W4functor_manager_operation_type@234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
