// roc 2007-03 005506b0  unit: seg_00550000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005506b0
//
// 005506b0  51                   push ecx
// 005506b1  6a18                 push 0x18
// 005506b3  c744240400000000     mov dword ptr [esp + 4], 0
// 005506bb  e848da0c00           call 0x61e108
// 005506c0  83c404               add esp, 4
// 005506c3  85c0                 test eax, eax
// 005506c5  7424                 je 0x5506eb
// 005506c7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005506cb  8b542410             mov edx, dword ptr [esp + 0x10]
// 005506cf  894808               mov dword ptr [eax + 8], ecx
// 005506d2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005506d6  89500c               mov dword ptr [eax + 0xc], edx
// 005506d9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005506dd  c700707f7a00         mov dword ptr [eax], 0x7a7f70
// 005506e3  894810               mov dword ptr [eax + 0x10], ecx
// 005506e6  895014               mov dword ptr [eax + 0x14], edx
// 005506e9  eb02                 jmp 0x5506ed
// 005506eb  33c0                 xor eax, eax
// 005506ed  56                   push esi
// 005506ee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005506f2  6a00                 push 0
// 005506f4  c744240800000000     mov dword ptr [esp + 8], 0
// 005506fc  8906                 mov dword ptr [esi], eax
// 005506fe  e8edd90c00           call 0x61e0f0
// 00550703  83c404               add esp, 4
// 00550706  8bc6                 mov eax, esi
// 00550708  5e                   pop esi
// 00550709  59                   pop ecx
// 0055070a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
