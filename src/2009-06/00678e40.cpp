// roc 2009-06 00678e40  unit: RBX::P8Lighting::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00678e40
//
// 00678e40  51                   push ecx
// 00678e41  6a18                 push 0x18
// 00678e43  c744240400000000     mov dword ptr [esp + 4], 0
// 00678e4b  e8e8fb0900           call 0x718a38
// 00678e50  83c404               add esp, 4
// 00678e53  85c0                 test eax, eax
// 00678e55  7424                 je 0x678e7b
// 00678e57  c70094488e00         mov dword ptr [eax], 0x8e4894
// 00678e5d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00678e61  894808               mov dword ptr [eax + 8], ecx
// 00678e64  8b542410             mov edx, dword ptr [esp + 0x10]
// 00678e68  89500c               mov dword ptr [eax + 0xc], edx
// 00678e6b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00678e6f  894810               mov dword ptr [eax + 0x10], ecx
// 00678e72  8b542418             mov edx, dword ptr [esp + 0x18]
// 00678e76  895014               mov dword ptr [eax + 0x14], edx
// 00678e79  eb02                 jmp 0x678e7d
// 00678e7b  33c0                 xor eax, eax
// 00678e7d  56                   push esi
// 00678e7e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00678e82  6a00                 push 0
// 00678e84  8906                 mov dword ptr [esi], eax
// 00678e86  e8a7fb0900           call 0x718a32
// 00678e8b  83c404               add esp, 4
// 00678e8e  8bc6                 mov eax, esi
// 00678e90  5e                   pop esi
// 00678e91  59                   pop ecx
// 00678e92  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
