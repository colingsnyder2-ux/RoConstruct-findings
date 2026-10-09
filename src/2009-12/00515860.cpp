// roc 2009-12 00515860  unit: boost::X::V?$function0::?$thread_data  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00515860
//
// 00515860  83ec10               sub esp, 0x10
// 00515863  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00515867  8b442414             mov eax, dword ptr [esp + 0x14]
// 0051586b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0051586f  894c2404             mov dword ptr [esp + 4], ecx
// 00515873  890424               mov dword ptr [esp], eax
// 00515876  8b442420             mov eax, dword ptr [esp + 0x20]
// 0051587a  8d0c24               lea ecx, [esp]
// 0051587d  51                   push ecx
// 0051587e  8954240c             mov dword ptr [esp + 0xc], edx
// 00515882  89442410             mov dword ptr [esp + 0x10], eax
// 00515886  e8e5402400           call 0x759970
// 0051588b  83c404               add esp, 4
// 0051588e  84c0                 test al, al
// 00515890  752a                 jne 0x5158bc
// 00515892  8b442424             mov eax, dword ptr [esp + 0x24]
// 00515896  85c0                 test eax, eax
// 00515898  741a                 je 0x5158b4
// 0051589a  8b1424               mov edx, dword ptr [esp]
// 0051589d  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005158a1  8910                 mov dword ptr [eax], edx
// 005158a3  8b542408             mov edx, dword ptr [esp + 8]
// 005158a7  894804               mov dword ptr [eax + 4], ecx
// 005158aa  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005158ae  895008               mov dword ptr [eax + 8], edx
// 005158b1  89480c               mov dword ptr [eax + 0xc], ecx
// 005158b4  b001                 mov al, 1
// 005158b6  83c410               add esp, 0x10
// 005158b9  c21400               ret 0x14
// 005158bc  32c0                 xor al, al
// 005158be  83c410               add esp, 0x10
// 005158c1  c21400               ret 0x14
// library rbxgs/script\ScriptContext.cpp (function ??$assign_to@V?$bind_t@IV?$cmf0@IVScriptContext@RBX@@@_mfi@boost@@V?$list1@V?$value@PAVScriptContext@RBX@@@_bi@boost@@@_bi@3@@_bi@boost@@@?$basic_vtable0@HV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@QAE_NV?$bind_t@IV?$cmf0@IVScriptContext@RBX@@@_mfi@boost@@V?$list1@V?$value@PAVScriptContext@RBX@@@_bi@boost@@@_bi@3@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
