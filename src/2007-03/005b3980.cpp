// roc 2007-03 005b3980  unit: seg_005b0000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b3980
//
// 005b3980  51                   push ecx
// 005b3981  6a18                 push 0x18
// 005b3983  c744240400000000     mov dword ptr [esp + 4], 0
// 005b398b  e878a70600           call 0x61e108
// 005b3990  83c404               add esp, 4
// 005b3993  85c0                 test eax, eax
// 005b3995  7424                 je 0x5b39bb
// 005b3997  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b399b  8b542410             mov edx, dword ptr [esp + 0x10]
// 005b399f  894808               mov dword ptr [eax + 8], ecx
// 005b39a2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005b39a6  89500c               mov dword ptr [eax + 0xc], edx
// 005b39a9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005b39ad  c7003c8b7b00         mov dword ptr [eax], 0x7b8b3c
// 005b39b3  894810               mov dword ptr [eax + 0x10], ecx
// 005b39b6  895014               mov dword ptr [eax + 0x14], edx
// 005b39b9  eb02                 jmp 0x5b39bd
// 005b39bb  33c0                 xor eax, eax
// 005b39bd  56                   push esi
// 005b39be  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005b39c2  6a00                 push 0
// 005b39c4  c744240800000000     mov dword ptr [esp + 8], 0
// 005b39cc  8906                 mov dword ptr [esi], eax
// 005b39ce  e81da70600           call 0x61e0f0
// 005b39d3  83c404               add esp, 4
// 005b39d6  8bc6                 mov eax, esi
// 005b39d8  5e                   pop esi
// 005b39d9  59                   pop ecx
// 005b39da  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
