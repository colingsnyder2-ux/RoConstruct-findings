// roc 2007-08 00445480  unit: VCRenderSettings::?$FactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00445480
//
// 00445480  51                   push ecx
// 00445481  6a18                 push 0x18
// 00445483  c744240400000000     mov dword ptr [esp + 4], 0
// 0044548b  e866aa1e00           call 0x62fef6
// 00445490  83c404               add esp, 4
// 00445493  85c0                 test eax, eax
// 00445495  7424                 je 0x4454bb
// 00445497  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044549b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0044549f  894808               mov dword ptr [eax + 8], ecx
// 004454a2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004454a6  89500c               mov dword ptr [eax + 0xc], edx
// 004454a9  8b542418             mov edx, dword ptr [esp + 0x18]
// 004454ad  c70024fb7800         mov dword ptr [eax], 0x78fb24
// 004454b3  894810               mov dword ptr [eax + 0x10], ecx
// 004454b6  895014               mov dword ptr [eax + 0x14], edx
// 004454b9  eb02                 jmp 0x4454bd
// 004454bb  33c0                 xor eax, eax
// 004454bd  56                   push esi
// 004454be  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004454c2  6a00                 push 0
// 004454c4  c744240800000000     mov dword ptr [esp + 8], 0
// 004454cc  8906                 mov dword ptr [esi], eax
// 004454ce  e88fa71e00           call 0x62fc62
// 004454d3  83c404               add esp, 4
// 004454d6  8bc6                 mov eax, esi
// 004454d8  5e                   pop esi
// 004454d9  59                   pop ecx
// 004454da  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
