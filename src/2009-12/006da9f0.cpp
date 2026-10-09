// roc 2009-12 006da9f0  unit: RBX::P8PlayerCamera::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006da9f0
//
// 006da9f0  51                   push ecx
// 006da9f1  6a18                 push 0x18
// 006da9f3  c744240400000000     mov dword ptr [esp + 4], 0
// 006da9fb  e8608e1100           call 0x7f3860
// 006daa00  83c404               add esp, 4
// 006daa03  85c0                 test eax, eax
// 006daa05  7424                 je 0x6daa2b
// 006daa07  c70064999d00         mov dword ptr [eax], 0x9d9964
// 006daa0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006daa11  894808               mov dword ptr [eax + 8], ecx
// 006daa14  8b542410             mov edx, dword ptr [esp + 0x10]
// 006daa18  89500c               mov dword ptr [eax + 0xc], edx
// 006daa1b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006daa1f  894810               mov dword ptr [eax + 0x10], ecx
// 006daa22  8b542418             mov edx, dword ptr [esp + 0x18]
// 006daa26  895014               mov dword ptr [eax + 0x14], edx
// 006daa29  eb02                 jmp 0x6daa2d
// 006daa2b  33c0                 xor eax, eax
// 006daa2d  56                   push esi
// 006daa2e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006daa32  6a00                 push 0
// 006daa34  8906                 mov dword ptr [esi], eax
// 006daa36  e81f8e1100           call 0x7f385a
// 006daa3b  83c404               add esp, 4
// 006daa3e  8bc6                 mov eax, esi
// 006daa40  5e                   pop esi
// 006daa41  59                   pop ecx
// 006daa42  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
