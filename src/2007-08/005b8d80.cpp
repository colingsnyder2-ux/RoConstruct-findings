// roc 2007-08 005b8d80  unit: RBX::VDecal::?$FactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b8d80
//
// 005b8d80  51                   push ecx
// 005b8d81  6a18                 push 0x18
// 005b8d83  c744240400000000     mov dword ptr [esp + 4], 0
// 005b8d8b  e866710700           call 0x62fef6
// 005b8d90  83c404               add esp, 4
// 005b8d93  85c0                 test eax, eax
// 005b8d95  7424                 je 0x5b8dbb
// 005b8d97  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b8d9b  8b542410             mov edx, dword ptr [esp + 0x10]
// 005b8d9f  894808               mov dword ptr [eax + 8], ecx
// 005b8da2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005b8da6  89500c               mov dword ptr [eax + 0xc], edx
// 005b8da9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005b8dad  c7006c8b7b00         mov dword ptr [eax], 0x7b8b6c
// 005b8db3  894810               mov dword ptr [eax + 0x10], ecx
// 005b8db6  895014               mov dword ptr [eax + 0x14], edx
// 005b8db9  eb02                 jmp 0x5b8dbd
// 005b8dbb  33c0                 xor eax, eax
// 005b8dbd  56                   push esi
// 005b8dbe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005b8dc2  6a00                 push 0
// 005b8dc4  c744240800000000     mov dword ptr [esp + 8], 0
// 005b8dcc  8906                 mov dword ptr [esi], eax
// 005b8dce  e88f6e0700           call 0x62fc62
// 005b8dd3  83c404               add esp, 4
// 005b8dd6  8bc6                 mov eax, esi
// 005b8dd8  5e                   pop esi
// 005b8dd9  59                   pop ecx
// 005b8dda  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
