// roc 2007-03 005a8f70  unit: seg_005a0000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a8f70
//
// 005a8f70  51                   push ecx
// 005a8f71  6a18                 push 0x18
// 005a8f73  c744240400000000     mov dword ptr [esp + 4], 0
// 005a8f7b  e888510700           call 0x61e108
// 005a8f80  83c404               add esp, 4
// 005a8f83  85c0                 test eax, eax
// 005a8f85  7424                 je 0x5a8fab
// 005a8f87  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a8f8b  8b542410             mov edx, dword ptr [esp + 0x10]
// 005a8f8f  894808               mov dword ptr [eax + 8], ecx
// 005a8f92  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a8f96  89500c               mov dword ptr [eax + 0xc], edx
// 005a8f99  8b542418             mov edx, dword ptr [esp + 0x18]
// 005a8f9d  c700b05e7b00         mov dword ptr [eax], 0x7b5eb0
// 005a8fa3  894810               mov dword ptr [eax + 0x10], ecx
// 005a8fa6  895014               mov dword ptr [eax + 0x14], edx
// 005a8fa9  eb02                 jmp 0x5a8fad
// 005a8fab  33c0                 xor eax, eax
// 005a8fad  56                   push esi
// 005a8fae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005a8fb2  6a00                 push 0
// 005a8fb4  c744240800000000     mov dword ptr [esp + 8], 0
// 005a8fbc  8906                 mov dword ptr [esi], eax
// 005a8fbe  e82d510700           call 0x61e0f0
// 005a8fc3  83c404               add esp, 4
// 005a8fc6  8bc6                 mov eax, esi
// 005a8fc8  5e                   pop esi
// 005a8fc9  59                   pop ecx
// 005a8fca  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
