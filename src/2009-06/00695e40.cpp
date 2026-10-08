// roc 2009-06 00695e40  unit: RBX::VClickDetector::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00695e40
//
// 00695e40  51                   push ecx
// 00695e41  6a18                 push 0x18
// 00695e43  c744240400000000     mov dword ptr [esp + 4], 0
// 00695e4b  e8e82b0800           call 0x718a38
// 00695e50  83c404               add esp, 4
// 00695e53  85c0                 test eax, eax
// 00695e55  7424                 je 0x695e7b
// 00695e57  c700e47a8e00         mov dword ptr [eax], 0x8e7ae4
// 00695e5d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00695e61  894808               mov dword ptr [eax + 8], ecx
// 00695e64  8b542410             mov edx, dword ptr [esp + 0x10]
// 00695e68  89500c               mov dword ptr [eax + 0xc], edx
// 00695e6b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00695e6f  894810               mov dword ptr [eax + 0x10], ecx
// 00695e72  8b542418             mov edx, dword ptr [esp + 0x18]
// 00695e76  895014               mov dword ptr [eax + 0x14], edx
// 00695e79  eb02                 jmp 0x695e7d
// 00695e7b  33c0                 xor eax, eax
// 00695e7d  56                   push esi
// 00695e7e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00695e82  6a00                 push 0
// 00695e84  8906                 mov dword ptr [esi], eax
// 00695e86  e8a72b0800           call 0x718a32
// 00695e8b  83c404               add esp, 4
// 00695e8e  8bc6                 mov eax, esi
// 00695e90  5e                   pop esi
// 00695e91  59                   pop ecx
// 00695e92  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
