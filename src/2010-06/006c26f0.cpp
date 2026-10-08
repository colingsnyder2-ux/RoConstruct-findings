// roc 2010-06 006c26f0  unit: RBX::VHole::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c26f0
//
// 006c26f0  51                   push ecx
// 006c26f1  6a18                 push 0x18
// 006c26f3  c744240400000000     mov dword ptr [esp + 4], 0
// 006c26fb  e8a0520e00           call 0x7a79a0
// 006c2700  83c404               add esp, 4
// 006c2703  85c0                 test eax, eax
// 006c2705  7424                 je 0x6c272b
// 006c2707  c700dc3ba400         mov dword ptr [eax], 0xa43bdc
// 006c270d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c2711  894808               mov dword ptr [eax + 8], ecx
// 006c2714  8b542410             mov edx, dword ptr [esp + 0x10]
// 006c2718  89500c               mov dword ptr [eax + 0xc], edx
// 006c271b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006c271f  894810               mov dword ptr [eax + 0x10], ecx
// 006c2722  8b542418             mov edx, dword ptr [esp + 0x18]
// 006c2726  895014               mov dword ptr [eax + 0x14], edx
// 006c2729  eb02                 jmp 0x6c272d
// 006c272b  33c0                 xor eax, eax
// 006c272d  56                   push esi
// 006c272e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006c2732  6a00                 push 0
// 006c2734  8906                 mov dword ptr [esi], eax
// 006c2736  e85f520e00           call 0x7a799a
// 006c273b  83c404               add esp, 4
// 006c273e  8bc6                 mov eax, esi
// 006c2740  5e                   pop esi
// 006c2741  59                   pop ecx
// 006c2742  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
