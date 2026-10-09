// roc 2009-12 006dab10  unit: RBX::P8PlayerCamera::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006dab10
//
// 006dab10  51                   push ecx
// 006dab11  6a18                 push 0x18
// 006dab13  c744240400000000     mov dword ptr [esp + 4], 0
// 006dab1b  e8408d1100           call 0x7f3860
// 006dab20  83c404               add esp, 4
// 006dab23  85c0                 test eax, eax
// 006dab25  7424                 je 0x6dab4b
// 006dab27  c700ac999d00         mov dword ptr [eax], 0x9d99ac
// 006dab2d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006dab31  894808               mov dword ptr [eax + 8], ecx
// 006dab34  8b542410             mov edx, dword ptr [esp + 0x10]
// 006dab38  89500c               mov dword ptr [eax + 0xc], edx
// 006dab3b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006dab3f  894810               mov dword ptr [eax + 0x10], ecx
// 006dab42  8b542418             mov edx, dword ptr [esp + 0x18]
// 006dab46  895014               mov dword ptr [eax + 0x14], edx
// 006dab49  eb02                 jmp 0x6dab4d
// 006dab4b  33c0                 xor eax, eax
// 006dab4d  56                   push esi
// 006dab4e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006dab52  6a00                 push 0
// 006dab54  8906                 mov dword ptr [esi], eax
// 006dab56  e8ff8c1100           call 0x7f385a
// 006dab5b  83c404               add esp, 4
// 006dab5e  8bc6                 mov eax, esi
// 006dab60  5e                   pop esi
// 006dab61  59                   pop ecx
// 006dab62  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
