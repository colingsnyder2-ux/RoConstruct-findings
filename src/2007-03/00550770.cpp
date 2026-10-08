// roc 2007-03 00550770  unit: seg_00550000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00550770
//
// 00550770  51                   push ecx
// 00550771  6a18                 push 0x18
// 00550773  c744240400000000     mov dword ptr [esp + 4], 0
// 0055077b  e888d90c00           call 0x61e108
// 00550780  83c404               add esp, 4
// 00550783  85c0                 test eax, eax
// 00550785  7424                 je 0x5507ab
// 00550787  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0055078b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0055078f  894808               mov dword ptr [eax + 8], ecx
// 00550792  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00550796  89500c               mov dword ptr [eax + 0xc], edx
// 00550799  8b542418             mov edx, dword ptr [esp + 0x18]
// 0055079d  c700907f7a00         mov dword ptr [eax], 0x7a7f90
// 005507a3  894810               mov dword ptr [eax + 0x10], ecx
// 005507a6  895014               mov dword ptr [eax + 0x14], edx
// 005507a9  eb02                 jmp 0x5507ad
// 005507ab  33c0                 xor eax, eax
// 005507ad  56                   push esi
// 005507ae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005507b2  6a00                 push 0
// 005507b4  c744240800000000     mov dword ptr [esp + 8], 0
// 005507bc  8906                 mov dword ptr [esi], eax
// 005507be  e82dd90c00           call 0x61e0f0
// 005507c3  83c404               add esp, 4
// 005507c6  8bc6                 mov eax, esi
// 005507c8  5e                   pop esi
// 005507c9  59                   pop ecx
// 005507ca  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
