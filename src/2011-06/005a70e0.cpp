// roc 2011-06 005a70e0  unit: RBX::VTeam::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a70e0
//
// 005a70e0  51                   push ecx
// 005a70e1  6a18                 push 0x18
// 005a70e3  c744240400000000     mov dword ptr [esp + 4], 0
// 005a70eb  e86e2f2600           call 0x80a05e
// 005a70f0  83c404               add esp, 4
// 005a70f3  85c0                 test eax, eax
// 005a70f5  742c                 je 0x5a7123
// 005a70f7  c70048d5a800         mov dword ptr [eax], 0xa8d548
// 005a70fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a7101  894808               mov dword ptr [eax + 8], ecx
// 005a7104  8b542410             mov edx, dword ptr [esp + 0x10]
// 005a7108  89500c               mov dword ptr [eax + 0xc], edx
// 005a710b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a710f  894810               mov dword ptr [eax + 0x10], ecx
// 005a7112  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a7116  8b542418             mov edx, dword ptr [esp + 0x18]
// 005a711a  895014               mov dword ptr [eax + 0x14], edx
// 005a711d  8901                 mov dword ptr [ecx], eax
// 005a711f  8bc1                 mov eax, ecx
// 005a7121  59                   pop ecx
// 005a7122  c3                   ret 
// 005a7123  8b442408             mov eax, dword ptr [esp + 8]
// 005a7127  33c9                 xor ecx, ecx
// 005a7129  8908                 mov dword ptr [eax], ecx
// 005a712b  59                   pop ecx
// 005a712c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
