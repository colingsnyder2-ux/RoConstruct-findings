// roc 2009-06 00673320  unit: RBX::VSkin::?$BoundPropGetSet  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00673320
//
// 00673320  51                   push ecx
// 00673321  6a18                 push 0x18
// 00673323  c744240400000000     mov dword ptr [esp + 4], 0
// 0067332b  e808570a00           call 0x718a38
// 00673330  83c404               add esp, 4
// 00673333  85c0                 test eax, eax
// 00673335  7424                 je 0x67335b
// 00673337  c700303f8e00         mov dword ptr [eax], 0x8e3f30
// 0067333d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00673341  894808               mov dword ptr [eax + 8], ecx
// 00673344  8b542410             mov edx, dword ptr [esp + 0x10]
// 00673348  89500c               mov dword ptr [eax + 0xc], edx
// 0067334b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0067334f  894810               mov dword ptr [eax + 0x10], ecx
// 00673352  8b542418             mov edx, dword ptr [esp + 0x18]
// 00673356  895014               mov dword ptr [eax + 0x14], edx
// 00673359  eb02                 jmp 0x67335d
// 0067335b  33c0                 xor eax, eax
// 0067335d  56                   push esi
// 0067335e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00673362  6a00                 push 0
// 00673364  8906                 mov dword ptr [esi], eax
// 00673366  e8c7560a00           call 0x718a32
// 0067336b  83c404               add esp, 4
// 0067336e  8bc6                 mov eax, esi
// 00673370  5e                   pop esi
// 00673371  59                   pop ecx
// 00673372  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
