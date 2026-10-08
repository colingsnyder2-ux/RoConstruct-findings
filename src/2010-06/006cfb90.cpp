// roc 2010-06 006cfb90  unit: RBX::LocalBackpackTool  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006cfb90
//
// 006cfb90  83ec10               sub esp, 0x10
// 006cfb93  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006cfb97  8b442414             mov eax, dword ptr [esp + 0x14]
// 006cfb9b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006cfb9f  894c2404             mov dword ptr [esp + 4], ecx
// 006cfba3  890424               mov dword ptr [esp], eax
// 006cfba6  8b442420             mov eax, dword ptr [esp + 0x20]
// 006cfbaa  8d0c24               lea ecx, [esp]
// 006cfbad  51                   push ecx
// 006cfbae  8954240c             mov dword ptr [esp + 0xc], edx
// 006cfbb2  89442410             mov dword ptr [esp + 0x10], eax
// 006cfbb6  e8957b0200           call 0x6f7750
// 006cfbbb  83c404               add esp, 4
// 006cfbbe  84c0                 test al, al
// 006cfbc0  752a                 jne 0x6cfbec
// 006cfbc2  8b442424             mov eax, dword ptr [esp + 0x24]
// 006cfbc6  85c0                 test eax, eax
// 006cfbc8  741a                 je 0x6cfbe4
// 006cfbca  8b1424               mov edx, dword ptr [esp]
// 006cfbcd  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006cfbd1  8910                 mov dword ptr [eax], edx
// 006cfbd3  8b542408             mov edx, dword ptr [esp + 8]
// 006cfbd7  894804               mov dword ptr [eax + 4], ecx
// 006cfbda  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006cfbde  895008               mov dword ptr [eax + 8], edx
// 006cfbe1  89480c               mov dword ptr [eax + 0xc], ecx
// 006cfbe4  b001                 mov al, 1
// 006cfbe6  83c410               add esp, 0x10
// 006cfbe9  c21400               ret 0x14
// 006cfbec  32c0                 xor al, al
// 006cfbee  83c410               add esp, 0x10
// 006cfbf1  c21400               ret 0x14
// library rbxgs/script\ScriptContext.cpp (function ??$assign_to@V?$bind_t@IV?$cmf0@IVScriptContext@RBX@@@_mfi@boost@@V?$list1@V?$value@PAVScriptContext@RBX@@@_bi@boost@@@_bi@3@@_bi@boost@@@?$basic_vtable0@HV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@QAE_NV?$bind_t@IV?$cmf0@IVScriptContext@RBX@@@_mfi@boost@@V?$list1@V?$value@PAVScriptContext@RBX@@@_bi@boost@@@_bi@3@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
