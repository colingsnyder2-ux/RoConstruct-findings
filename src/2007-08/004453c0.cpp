// roc 2007-08 004453c0  unit: VCRenderSettings::?$FactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004453c0
//
// 004453c0  51                   push ecx
// 004453c1  6a18                 push 0x18
// 004453c3  c744240400000000     mov dword ptr [esp + 4], 0
// 004453cb  e826ab1e00           call 0x62fef6
// 004453d0  83c404               add esp, 4
// 004453d3  85c0                 test eax, eax
// 004453d5  7424                 je 0x4453fb
// 004453d7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004453db  8b542410             mov edx, dword ptr [esp + 0x10]
// 004453df  894808               mov dword ptr [eax + 8], ecx
// 004453e2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004453e6  89500c               mov dword ptr [eax + 0xc], edx
// 004453e9  8b542418             mov edx, dword ptr [esp + 0x18]
// 004453ed  c7001cfc7800         mov dword ptr [eax], 0x78fc1c
// 004453f3  894810               mov dword ptr [eax + 0x10], ecx
// 004453f6  895014               mov dword ptr [eax + 0x14], edx
// 004453f9  eb02                 jmp 0x4453fd
// 004453fb  33c0                 xor eax, eax
// 004453fd  56                   push esi
// 004453fe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00445402  6a00                 push 0
// 00445404  c744240800000000     mov dword ptr [esp + 8], 0
// 0044540c  8906                 mov dword ptr [esi], eax
// 0044540e  e84fa81e00           call 0x62fc62
// 00445413  83c404               add esp, 4
// 00445416  8bc6                 mov eax, esi
// 00445418  5e                   pop esi
// 00445419  59                   pop ecx
// 0044541a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
