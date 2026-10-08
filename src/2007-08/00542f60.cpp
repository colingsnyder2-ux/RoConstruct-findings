// roc 2007-08 00542f60  unit: RBX::VDebugSettings::?$FactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00542f60
//
// 00542f60  51                   push ecx
// 00542f61  6a18                 push 0x18
// 00542f63  c744240400000000     mov dword ptr [esp + 4], 0
// 00542f6b  e886cf0e00           call 0x62fef6
// 00542f70  83c404               add esp, 4
// 00542f73  85c0                 test eax, eax
// 00542f75  7424                 je 0x542f9b
// 00542f77  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00542f7b  8b542410             mov edx, dword ptr [esp + 0x10]
// 00542f7f  894808               mov dword ptr [eax + 8], ecx
// 00542f82  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00542f86  89500c               mov dword ptr [eax + 0xc], edx
// 00542f89  8b542418             mov edx, dword ptr [esp + 0x18]
// 00542f8d  c7001c687a00         mov dword ptr [eax], 0x7a681c
// 00542f93  894810               mov dword ptr [eax + 0x10], ecx
// 00542f96  895014               mov dword ptr [eax + 0x14], edx
// 00542f99  eb02                 jmp 0x542f9d
// 00542f9b  33c0                 xor eax, eax
// 00542f9d  56                   push esi
// 00542f9e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00542fa2  6a00                 push 0
// 00542fa4  c744240800000000     mov dword ptr [esp + 8], 0
// 00542fac  8906                 mov dword ptr [esi], eax
// 00542fae  e8afcc0e00           call 0x62fc62
// 00542fb3  83c404               add esp, 4
// 00542fb6  8bc6                 mov eax, esi
// 00542fb8  5e                   pop esi
// 00542fb9  59                   pop ecx
// 00542fba  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
