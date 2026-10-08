// roc 2009-06 005ce2f0  unit: RBX::P8Instance::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ce2f0
//
// 005ce2f0  51                   push ecx
// 005ce2f1  6a18                 push 0x18
// 005ce2f3  c744240400000000     mov dword ptr [esp + 4], 0
// 005ce2fb  e838a71400           call 0x718a38
// 005ce300  83c404               add esp, 4
// 005ce303  85c0                 test eax, eax
// 005ce305  7424                 je 0x5ce32b
// 005ce307  c700984e8d00         mov dword ptr [eax], 0x8d4e98
// 005ce30d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ce311  894808               mov dword ptr [eax + 8], ecx
// 005ce314  8b542410             mov edx, dword ptr [esp + 0x10]
// 005ce318  89500c               mov dword ptr [eax + 0xc], edx
// 005ce31b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005ce31f  894810               mov dword ptr [eax + 0x10], ecx
// 005ce322  8b542418             mov edx, dword ptr [esp + 0x18]
// 005ce326  895014               mov dword ptr [eax + 0x14], edx
// 005ce329  eb02                 jmp 0x5ce32d
// 005ce32b  33c0                 xor eax, eax
// 005ce32d  56                   push esi
// 005ce32e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005ce332  6a00                 push 0
// 005ce334  8906                 mov dword ptr [esi], eax
// 005ce336  e8f7a61400           call 0x718a32
// 005ce33b  83c404               add esp, 4
// 005ce33e  8bc6                 mov eax, esi
// 005ce340  5e                   pop esi
// 005ce341  59                   pop ecx
// 005ce342  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
