// roc 2012-06 0069a170  unit: RBX::VTeam::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0069a170
//
// 0069a170  51                   push ecx
// 0069a171  6a18                 push 0x18
// 0069a173  c744240400000000     mov dword ptr [esp + 4], 0
// 0069a17b  e89a7f2e00           call 0x98211a
// 0069a180  83c404               add esp, 4
// 0069a183  85c0                 test eax, eax
// 0069a185  7424                 je 0x69a1ab
// 0069a187  c700343bb900         mov dword ptr [eax], 0xb93b34
// 0069a18d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0069a191  894808               mov dword ptr [eax + 8], ecx
// 0069a194  8b542410             mov edx, dword ptr [esp + 0x10]
// 0069a198  89500c               mov dword ptr [eax + 0xc], edx
// 0069a19b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0069a19f  894810               mov dword ptr [eax + 0x10], ecx
// 0069a1a2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0069a1a6  895014               mov dword ptr [eax + 0x14], edx
// 0069a1a9  eb02                 jmp 0x69a1ad
// 0069a1ab  33c0                 xor eax, eax
// 0069a1ad  56                   push esi
// 0069a1ae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0069a1b2  6a00                 push 0
// 0069a1b4  8906                 mov dword ptr [esi], eax
// 0069a1b6  e8597f2e00           call 0x982114
// 0069a1bb  83c404               add esp, 4
// 0069a1be  8bc6                 mov eax, esi
// 0069a1c0  5e                   pop esi
// 0069a1c1  59                   pop ecx
// 0069a1c2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
