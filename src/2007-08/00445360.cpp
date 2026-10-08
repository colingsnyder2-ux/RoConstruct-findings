// roc 2007-08 00445360  unit: VCRenderSettings::?$FactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00445360
//
// 00445360  51                   push ecx
// 00445361  6a18                 push 0x18
// 00445363  c744240400000000     mov dword ptr [esp + 4], 0
// 0044536b  e886ab1e00           call 0x62fef6
// 00445370  83c404               add esp, 4
// 00445373  85c0                 test eax, eax
// 00445375  7424                 je 0x44539b
// 00445377  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044537b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0044537f  894808               mov dword ptr [eax + 8], ecx
// 00445382  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00445386  89500c               mov dword ptr [eax + 0xc], edx
// 00445389  8b542418             mov edx, dword ptr [esp + 0x18]
// 0044538d  c7000cfc7800         mov dword ptr [eax], 0x78fc0c
// 00445393  894810               mov dword ptr [eax + 0x10], ecx
// 00445396  895014               mov dword ptr [eax + 0x14], edx
// 00445399  eb02                 jmp 0x44539d
// 0044539b  33c0                 xor eax, eax
// 0044539d  56                   push esi
// 0044539e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004453a2  6a00                 push 0
// 004453a4  c744240800000000     mov dword ptr [esp + 8], 0
// 004453ac  8906                 mov dword ptr [esi], eax
// 004453ae  e8afa81e00           call 0x62fc62
// 004453b3  83c404               add esp, 4
// 004453b6  8bc6                 mov eax, esi
// 004453b8  5e                   pop esi
// 004453b9  59                   pop ecx
// 004453ba  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
