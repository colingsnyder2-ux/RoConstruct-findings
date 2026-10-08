// roc 2012-06 00720f50  unit: RBX::VIAdornableCollector::?$sp_counted_impl_p  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00720f50
//
// 00720f50  83ec10               sub esp, 0x10
// 00720f53  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00720f57  8b442414             mov eax, dword ptr [esp + 0x14]
// 00720f5b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00720f5f  894c2404             mov dword ptr [esp + 4], ecx
// 00720f63  890424               mov dword ptr [esp], eax
// 00720f66  8b442420             mov eax, dword ptr [esp + 0x20]
// 00720f6a  8d0c24               lea ecx, [esp]
// 00720f6d  51                   push ecx
// 00720f6e  8954240c             mov dword ptr [esp + 0xc], edx
// 00720f72  89442410             mov dword ptr [esp + 0x10], eax
// 00720f76  e8b5ff1500           call 0x880f30
// 00720f7b  83c404               add esp, 4
// 00720f7e  84c0                 test al, al
// 00720f80  752a                 jne 0x720fac
// 00720f82  8b442424             mov eax, dword ptr [esp + 0x24]
// 00720f86  85c0                 test eax, eax
// 00720f88  741a                 je 0x720fa4
// 00720f8a  8b1424               mov edx, dword ptr [esp]
// 00720f8d  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00720f91  8910                 mov dword ptr [eax], edx
// 00720f93  8b542408             mov edx, dword ptr [esp + 8]
// 00720f97  894804               mov dword ptr [eax + 4], ecx
// 00720f9a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00720f9e  895008               mov dword ptr [eax + 8], edx
// 00720fa1  89480c               mov dword ptr [eax + 0xc], ecx
// 00720fa4  b001                 mov al, 1
// 00720fa6  83c410               add esp, 0x10
// 00720fa9  c21400               ret 0x14
// 00720fac  32c0                 xor al, al
// 00720fae  83c410               add esp, 0x10
// 00720fb1  c21400               ret 0x14
// library rbxgs/script\ScriptContext.cpp (function ??$assign_to@V?$bind_t@IV?$cmf0@IVScriptContext@RBX@@@_mfi@boost@@V?$list1@V?$value@PAVScriptContext@RBX@@@_bi@boost@@@_bi@3@@_bi@boost@@@?$basic_vtable0@HV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@QAE_NV?$bind_t@IV?$cmf0@IVScriptContext@RBX@@@_mfi@boost@@V?$list1@V?$value@PAVScriptContext@RBX@@@_bi@boost@@@_bi@3@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
