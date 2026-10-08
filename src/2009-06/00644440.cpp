// roc 2009-06 00644440  unit: RBX::Soundscape::SoundChannel  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00644440
//
// 00644440  51                   push ecx
// 00644441  6a18                 push 0x18
// 00644443  c744240400000000     mov dword ptr [esp + 4], 0
// 0064444b  e8e8450d00           call 0x718a38
// 00644450  83c404               add esp, 4
// 00644453  85c0                 test eax, eax
// 00644455  7424                 je 0x64447b
// 00644457  c700c8e38d00         mov dword ptr [eax], 0x8de3c8
// 0064445d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00644461  894808               mov dword ptr [eax + 8], ecx
// 00644464  8b542410             mov edx, dword ptr [esp + 0x10]
// 00644468  89500c               mov dword ptr [eax + 0xc], edx
// 0064446b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0064446f  894810               mov dword ptr [eax + 0x10], ecx
// 00644472  8b542418             mov edx, dword ptr [esp + 0x18]
// 00644476  895014               mov dword ptr [eax + 0x14], edx
// 00644479  eb02                 jmp 0x64447d
// 0064447b  33c0                 xor eax, eax
// 0064447d  56                   push esi
// 0064447e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00644482  6a00                 push 0
// 00644484  8906                 mov dword ptr [esi], eax
// 00644486  e8a7450d00           call 0x718a32
// 0064448b  83c404               add esp, 4
// 0064448e  8bc6                 mov eax, esi
// 00644490  5e                   pop esi
// 00644491  59                   pop ecx
// 00644492  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
