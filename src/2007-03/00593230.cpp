// roc 2007-03 00593230  unit: seg_00590000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00593230
//
// 00593230  51                   push ecx
// 00593231  6a18                 push 0x18
// 00593233  c744240400000000     mov dword ptr [esp + 4], 0
// 0059323b  e8c8ae0800           call 0x61e108
// 00593240  83c404               add esp, 4
// 00593243  85c0                 test eax, eax
// 00593245  7424                 je 0x59326b
// 00593247  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059324b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059324f  894808               mov dword ptr [eax + 8], ecx
// 00593252  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00593256  89500c               mov dword ptr [eax + 0xc], edx
// 00593259  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059325d  c700481a7b00         mov dword ptr [eax], 0x7b1a48
// 00593263  894810               mov dword ptr [eax + 0x10], ecx
// 00593266  895014               mov dword ptr [eax + 0x14], edx
// 00593269  eb02                 jmp 0x59326d
// 0059326b  33c0                 xor eax, eax
// 0059326d  56                   push esi
// 0059326e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00593272  6a00                 push 0
// 00593274  c744240800000000     mov dword ptr [esp + 8], 0
// 0059327c  8906                 mov dword ptr [esi], eax
// 0059327e  e86dae0800           call 0x61e0f0
// 00593283  83c404               add esp, 4
// 00593286  8bc6                 mov eax, esi
// 00593288  5e                   pop esi
// 00593289  59                   pop ecx
// 0059328a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
