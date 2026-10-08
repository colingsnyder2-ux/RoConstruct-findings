// roc 2007-03 00571230  unit: seg_00570000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00571230
//
// 00571230  51                   push ecx
// 00571231  6a18                 push 0x18
// 00571233  c744240400000000     mov dword ptr [esp + 4], 0
// 0057123b  e8c8ce0a00           call 0x61e108
// 00571240  83c404               add esp, 4
// 00571243  85c0                 test eax, eax
// 00571245  7424                 je 0x57126b
// 00571247  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057124b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0057124f  894808               mov dword ptr [eax + 8], ecx
// 00571252  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00571256  89500c               mov dword ptr [eax + 0xc], edx
// 00571259  8b542418             mov edx, dword ptr [esp + 0x18]
// 0057125d  c70010b97a00         mov dword ptr [eax], 0x7ab910
// 00571263  894810               mov dword ptr [eax + 0x10], ecx
// 00571266  895014               mov dword ptr [eax + 0x14], edx
// 00571269  eb02                 jmp 0x57126d
// 0057126b  33c0                 xor eax, eax
// 0057126d  56                   push esi
// 0057126e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00571272  6a00                 push 0
// 00571274  c744240800000000     mov dword ptr [esp + 8], 0
// 0057127c  8906                 mov dword ptr [esi], eax
// 0057127e  e86dce0a00           call 0x61e0f0
// 00571283  83c404               add esp, 4
// 00571286  8bc6                 mov eax, esi
// 00571288  5e                   pop esi
// 00571289  59                   pop ecx
// 0057128a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
