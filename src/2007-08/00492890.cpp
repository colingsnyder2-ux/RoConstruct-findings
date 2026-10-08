// roc 2007-08 00492890  unit: RBX::Network::Players  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00492890
//
// 00492890  51                   push ecx
// 00492891  6a18                 push 0x18
// 00492893  c744240400000000     mov dword ptr [esp + 4], 0
// 0049289b  e856d61900           call 0x62fef6
// 004928a0  83c404               add esp, 4
// 004928a3  85c0                 test eax, eax
// 004928a5  7424                 je 0x4928cb
// 004928a7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004928ab  8b542410             mov edx, dword ptr [esp + 0x10]
// 004928af  894808               mov dword ptr [eax + 8], ecx
// 004928b2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004928b6  89500c               mov dword ptr [eax + 0xc], edx
// 004928b9  8b542418             mov edx, dword ptr [esp + 0x18]
// 004928bd  c7006cb87900         mov dword ptr [eax], 0x79b86c
// 004928c3  894810               mov dword ptr [eax + 0x10], ecx
// 004928c6  895014               mov dword ptr [eax + 0x14], edx
// 004928c9  eb02                 jmp 0x4928cd
// 004928cb  33c0                 xor eax, eax
// 004928cd  56                   push esi
// 004928ce  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004928d2  6a00                 push 0
// 004928d4  c744240800000000     mov dword ptr [esp + 8], 0
// 004928dc  8906                 mov dword ptr [esi], eax
// 004928de  e87fd31900           call 0x62fc62
// 004928e3  83c404               add esp, 4
// 004928e6  8bc6                 mov eax, esi
// 004928e8  5e                   pop esi
// 004928e9  59                   pop ecx
// 004928ea  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
