// roc 2009-06 005fcfc0  unit: RBX::DataModel::LegacyLock::Implementation::UEvents::?$sp_counted_impl_p  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005fcfc0
//
// 005fcfc0  83ec10               sub esp, 0x10
// 005fcfc3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005fcfc7  8b442414             mov eax, dword ptr [esp + 0x14]
// 005fcfcb  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005fcfcf  894c2404             mov dword ptr [esp + 4], ecx
// 005fcfd3  890424               mov dword ptr [esp], eax
// 005fcfd6  8b442420             mov eax, dword ptr [esp + 0x20]
// 005fcfda  8d0c24               lea ecx, [esp]
// 005fcfdd  51                   push ecx
// 005fcfde  8954240c             mov dword ptr [esp + 0xc], edx
// 005fcfe2  89442410             mov dword ptr [esp + 0x10], eax
// 005fcfe6  e8c5f80300           call 0x63c8b0
// 005fcfeb  83c404               add esp, 4
// 005fcfee  84c0                 test al, al
// 005fcff0  752a                 jne 0x5fd01c
// 005fcff2  8b442424             mov eax, dword ptr [esp + 0x24]
// 005fcff6  85c0                 test eax, eax
// 005fcff8  741a                 je 0x5fd014
// 005fcffa  8b1424               mov edx, dword ptr [esp]
// 005fcffd  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005fd001  8910                 mov dword ptr [eax], edx
// 005fd003  8b542408             mov edx, dword ptr [esp + 8]
// 005fd007  894804               mov dword ptr [eax + 4], ecx
// 005fd00a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005fd00e  895008               mov dword ptr [eax + 8], edx
// 005fd011  89480c               mov dword ptr [eax + 0xc], ecx
// 005fd014  b001                 mov al, 1
// 005fd016  83c410               add esp, 0x10
// 005fd019  c21400               ret 0x14
// 005fd01c  32c0                 xor al, al
// 005fd01e  83c410               add esp, 0x10
// 005fd021  c21400               ret 0x14
// library rbxgs/script\ScriptContext.cpp (function ??$assign_to@V?$bind_t@IV?$cmf0@IVScriptContext@RBX@@@_mfi@boost@@V?$list1@V?$value@PAVScriptContext@RBX@@@_bi@boost@@@_bi@3@@_bi@boost@@@?$basic_vtable0@HV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@QAE_NV?$bind_t@IV?$cmf0@IVScriptContext@RBX@@@_mfi@boost@@V?$list1@V?$value@PAVScriptContext@RBX@@@_bi@boost@@@_bi@3@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
