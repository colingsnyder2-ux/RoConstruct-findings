// roc 2011-06 006788e0  unit: RBX::VMeshId::?$holder  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006788e0
//
// 006788e0  51                   push ecx
// 006788e1  6a18                 push 0x18
// 006788e3  c744240400000000     mov dword ptr [esp + 4], 0
// 006788eb  e86e171900           call 0x80a05e
// 006788f0  83c404               add esp, 4
// 006788f3  85c0                 test eax, eax
// 006788f5  742c                 je 0x678923
// 006788f7  c700c0d6a900         mov dword ptr [eax], 0xa9d6c0
// 006788fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00678901  894808               mov dword ptr [eax + 8], ecx
// 00678904  8b542410             mov edx, dword ptr [esp + 0x10]
// 00678908  89500c               mov dword ptr [eax + 0xc], edx
// 0067890b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0067890f  894810               mov dword ptr [eax + 0x10], ecx
// 00678912  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00678916  8b542418             mov edx, dword ptr [esp + 0x18]
// 0067891a  895014               mov dword ptr [eax + 0x14], edx
// 0067891d  8901                 mov dword ptr [ecx], eax
// 0067891f  8bc1                 mov eax, ecx
// 00678921  59                   pop ecx
// 00678922  c3                   ret 
// 00678923  8b442408             mov eax, dword ptr [esp + 8]
// 00678927  33c9                 xor ecx, ecx
// 00678929  8908                 mov dword ptr [eax], ecx
// 0067892b  59                   pop ecx
// 0067892c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
