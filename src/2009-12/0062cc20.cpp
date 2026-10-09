// roc 2009-12 0062cc20  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062cc20
//
// 0062cc20  51                   push ecx
// 0062cc21  6a18                 push 0x18
// 0062cc23  c744240400000000     mov dword ptr [esp + 4], 0
// 0062cc2b  e8306c1c00           call 0x7f3860
// 0062cc30  83c404               add esp, 4
// 0062cc33  85c0                 test eax, eax
// 0062cc35  7424                 je 0x62cc5b
// 0062cc37  c70084ae9c00         mov dword ptr [eax], 0x9cae84
// 0062cc3d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062cc41  894808               mov dword ptr [eax + 8], ecx
// 0062cc44  8b542410             mov edx, dword ptr [esp + 0x10]
// 0062cc48  89500c               mov dword ptr [eax + 0xc], edx
// 0062cc4b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0062cc4f  894810               mov dword ptr [eax + 0x10], ecx
// 0062cc52  8b542418             mov edx, dword ptr [esp + 0x18]
// 0062cc56  895014               mov dword ptr [eax + 0x14], edx
// 0062cc59  eb02                 jmp 0x62cc5d
// 0062cc5b  33c0                 xor eax, eax
// 0062cc5d  56                   push esi
// 0062cc5e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062cc62  6a00                 push 0
// 0062cc64  8906                 mov dword ptr [esi], eax
// 0062cc66  e8ef6b1c00           call 0x7f385a
// 0062cc6b  83c404               add esp, 4
// 0062cc6e  8bc6                 mov eax, esi
// 0062cc70  5e                   pop esi
// 0062cc71  59                   pop ecx
// 0062cc72  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
