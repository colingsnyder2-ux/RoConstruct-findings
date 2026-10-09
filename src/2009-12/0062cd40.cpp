// roc 2009-12 0062cd40  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062cd40
//
// 0062cd40  51                   push ecx
// 0062cd41  6a18                 push 0x18
// 0062cd43  c744240400000000     mov dword ptr [esp + 4], 0
// 0062cd4b  e8106b1c00           call 0x7f3860
// 0062cd50  83c404               add esp, 4
// 0062cd53  85c0                 test eax, eax
// 0062cd55  7424                 je 0x62cd7b
// 0062cd57  c700ccae9c00         mov dword ptr [eax], 0x9caecc
// 0062cd5d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062cd61  894808               mov dword ptr [eax + 8], ecx
// 0062cd64  8b542410             mov edx, dword ptr [esp + 0x10]
// 0062cd68  89500c               mov dword ptr [eax + 0xc], edx
// 0062cd6b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0062cd6f  894810               mov dword ptr [eax + 0x10], ecx
// 0062cd72  8b542418             mov edx, dword ptr [esp + 0x18]
// 0062cd76  895014               mov dword ptr [eax + 0x14], edx
// 0062cd79  eb02                 jmp 0x62cd7d
// 0062cd7b  33c0                 xor eax, eax
// 0062cd7d  56                   push esi
// 0062cd7e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062cd82  6a00                 push 0
// 0062cd84  8906                 mov dword ptr [esi], eax
// 0062cd86  e8cf6a1c00           call 0x7f385a
// 0062cd8b  83c404               add esp, 4
// 0062cd8e  8bc6                 mov eax, esi
// 0062cd90  5e                   pop esi
// 0062cd91  59                   pop ecx
// 0062cd92  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
