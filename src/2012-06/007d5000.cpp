// roc 2012-06 007d5000  unit: RBX::VSkin::?$BoundPropGetSet  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007d5000
//
// 007d5000  51                   push ecx
// 007d5001  6a18                 push 0x18
// 007d5003  c744240400000000     mov dword ptr [esp + 4], 0
// 007d500b  e80ad11a00           call 0x98211a
// 007d5010  83c404               add esp, 4
// 007d5013  85c0                 test eax, eax
// 007d5015  7424                 je 0x7d503b
// 007d5017  c700000cbc00         mov dword ptr [eax], 0xbc0c00
// 007d501d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007d5021  894808               mov dword ptr [eax + 8], ecx
// 007d5024  8b542410             mov edx, dword ptr [esp + 0x10]
// 007d5028  89500c               mov dword ptr [eax + 0xc], edx
// 007d502b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007d502f  894810               mov dword ptr [eax + 0x10], ecx
// 007d5032  8b542418             mov edx, dword ptr [esp + 0x18]
// 007d5036  895014               mov dword ptr [eax + 0x14], edx
// 007d5039  eb02                 jmp 0x7d503d
// 007d503b  33c0                 xor eax, eax
// 007d503d  56                   push esi
// 007d503e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007d5042  6a00                 push 0
// 007d5044  8906                 mov dword ptr [esi], eax
// 007d5046  e8c9d01a00           call 0x982114
// 007d504b  83c404               add esp, 4
// 007d504e  8bc6                 mov eax, esi
// 007d5050  5e                   pop esi
// 007d5051  59                   pop ecx
// 007d5052  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
