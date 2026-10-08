// roc 2011-06 0049b2c0  unit: RBX::VideoControl  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0049b2c0
//
// 0049b2c0  83ec10               sub esp, 0x10
// 0049b2c3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0049b2c7  8b442414             mov eax, dword ptr [esp + 0x14]
// 0049b2cb  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0049b2cf  894c2404             mov dword ptr [esp + 4], ecx
// 0049b2d3  890424               mov dword ptr [esp], eax
// 0049b2d6  8b442420             mov eax, dword ptr [esp + 0x20]
// 0049b2da  8d0c24               lea ecx, [esp]
// 0049b2dd  51                   push ecx
// 0049b2de  8954240c             mov dword ptr [esp + 0xc], edx
// 0049b2e2  89442410             mov dword ptr [esp + 0x10], eax
// 0049b2e6  e895942600           call 0x704780
// 0049b2eb  83c404               add esp, 4
// 0049b2ee  84c0                 test al, al
// 0049b2f0  752a                 jne 0x49b31c
// 0049b2f2  8b442424             mov eax, dword ptr [esp + 0x24]
// 0049b2f6  85c0                 test eax, eax
// 0049b2f8  741a                 je 0x49b314
// 0049b2fa  8b1424               mov edx, dword ptr [esp]
// 0049b2fd  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0049b301  8910                 mov dword ptr [eax], edx
// 0049b303  8b542408             mov edx, dword ptr [esp + 8]
// 0049b307  894804               mov dword ptr [eax + 4], ecx
// 0049b30a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049b30e  895008               mov dword ptr [eax + 8], edx
// 0049b311  89480c               mov dword ptr [eax + 0xc], ecx
// 0049b314  b001                 mov al, 1
// 0049b316  83c410               add esp, 0x10
// 0049b319  c21400               ret 0x14
// 0049b31c  32c0                 xor al, al
// 0049b31e  83c410               add esp, 0x10
// 0049b321  c21400               ret 0x14
// library rbxgs/script\ScriptContext.cpp (function ??$assign_to@V?$bind_t@IV?$cmf0@IVScriptContext@RBX@@@_mfi@boost@@V?$list1@V?$value@PAVScriptContext@RBX@@@_bi@boost@@@_bi@3@@_bi@boost@@@?$basic_vtable0@HV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@QAE_NV?$bind_t@IV?$cmf0@IVScriptContext@RBX@@@_mfi@boost@@V?$list1@V?$value@PAVScriptContext@RBX@@@_bi@boost@@@_bi@3@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
