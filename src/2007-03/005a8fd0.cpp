// roc 2007-03 005a8fd0  unit: seg_005a0000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a8fd0
//
// 005a8fd0  51                   push ecx
// 005a8fd1  6a18                 push 0x18
// 005a8fd3  c744240400000000     mov dword ptr [esp + 4], 0
// 005a8fdb  e828510700           call 0x61e108
// 005a8fe0  83c404               add esp, 4
// 005a8fe3  85c0                 test eax, eax
// 005a8fe5  7424                 je 0x5a900b
// 005a8fe7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a8feb  8b542410             mov edx, dword ptr [esp + 0x10]
// 005a8fef  894808               mov dword ptr [eax + 8], ecx
// 005a8ff2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a8ff6  89500c               mov dword ptr [eax + 0xc], edx
// 005a8ff9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005a8ffd  c700c05e7b00         mov dword ptr [eax], 0x7b5ec0
// 005a9003  894810               mov dword ptr [eax + 0x10], ecx
// 005a9006  895014               mov dword ptr [eax + 0x14], edx
// 005a9009  eb02                 jmp 0x5a900d
// 005a900b  33c0                 xor eax, eax
// 005a900d  56                   push esi
// 005a900e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005a9012  6a00                 push 0
// 005a9014  c744240800000000     mov dword ptr [esp + 8], 0
// 005a901c  8906                 mov dword ptr [esi], eax
// 005a901e  e8cd500700           call 0x61e0f0
// 005a9023  83c404               add esp, 4
// 005a9026  8bc6                 mov eax, esi
// 005a9028  5e                   pop esi
// 005a9029  59                   pop ecx
// 005a902a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
