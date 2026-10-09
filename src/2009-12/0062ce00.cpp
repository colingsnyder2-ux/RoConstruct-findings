// roc 2009-12 0062ce00  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062ce00
//
// 0062ce00  51                   push ecx
// 0062ce01  6a18                 push 0x18
// 0062ce03  c744240400000000     mov dword ptr [esp + 4], 0
// 0062ce0b  e8506a1c00           call 0x7f3860
// 0062ce10  83c404               add esp, 4
// 0062ce13  85c0                 test eax, eax
// 0062ce15  7424                 je 0x62ce3b
// 0062ce17  c700fcae9c00         mov dword ptr [eax], 0x9caefc
// 0062ce1d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062ce21  894808               mov dword ptr [eax + 8], ecx
// 0062ce24  8b542410             mov edx, dword ptr [esp + 0x10]
// 0062ce28  89500c               mov dword ptr [eax + 0xc], edx
// 0062ce2b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0062ce2f  894810               mov dword ptr [eax + 0x10], ecx
// 0062ce32  8b542418             mov edx, dword ptr [esp + 0x18]
// 0062ce36  895014               mov dword ptr [eax + 0x14], edx
// 0062ce39  eb02                 jmp 0x62ce3d
// 0062ce3b  33c0                 xor eax, eax
// 0062ce3d  56                   push esi
// 0062ce3e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062ce42  6a00                 push 0
// 0062ce44  8906                 mov dword ptr [esi], eax
// 0062ce46  e80f6a1c00           call 0x7f385a
// 0062ce4b  83c404               add esp, 4
// 0062ce4e  8bc6                 mov eax, esi
// 0062ce50  5e                   pop esi
// 0062ce51  59                   pop ecx
// 0062ce52  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
