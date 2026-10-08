// roc 2007-08 005ed130  unit: RBX::BodyGyro  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ed130
//
// 005ed130  51                   push ecx
// 005ed131  6a18                 push 0x18
// 005ed133  c744240400000000     mov dword ptr [esp + 4], 0
// 005ed13b  e8b62d0400           call 0x62fef6
// 005ed140  83c404               add esp, 4
// 005ed143  85c0                 test eax, eax
// 005ed145  7424                 je 0x5ed16b
// 005ed147  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ed14b  8b542410             mov edx, dword ptr [esp + 0x10]
// 005ed14f  894808               mov dword ptr [eax + 8], ecx
// 005ed152  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005ed156  89500c               mov dword ptr [eax + 0xc], edx
// 005ed159  8b542418             mov edx, dword ptr [esp + 0x18]
// 005ed15d  c700c0ec7b00         mov dword ptr [eax], 0x7becc0
// 005ed163  894810               mov dword ptr [eax + 0x10], ecx
// 005ed166  895014               mov dword ptr [eax + 0x14], edx
// 005ed169  eb02                 jmp 0x5ed16d
// 005ed16b  33c0                 xor eax, eax
// 005ed16d  56                   push esi
// 005ed16e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005ed172  6a00                 push 0
// 005ed174  c744240800000000     mov dword ptr [esp + 8], 0
// 005ed17c  8906                 mov dword ptr [esi], eax
// 005ed17e  e8df2a0400           call 0x62fc62
// 005ed183  83c404               add esp, 4
// 005ed186  8bc6                 mov eax, esi
// 005ed188  5e                   pop esi
// 005ed189  59                   pop ecx
// 005ed18a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
