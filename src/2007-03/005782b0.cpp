// roc 2007-03 005782b0  unit: seg_00570000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005782b0
//
// 005782b0  51                   push ecx
// 005782b1  6a18                 push 0x18
// 005782b3  c744240400000000     mov dword ptr [esp + 4], 0
// 005782bb  e8485e0a00           call 0x61e108
// 005782c0  83c404               add esp, 4
// 005782c3  85c0                 test eax, eax
// 005782c5  7424                 je 0x5782eb
// 005782c7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005782cb  8b542410             mov edx, dword ptr [esp + 0x10]
// 005782cf  894808               mov dword ptr [eax + 8], ecx
// 005782d2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005782d6  89500c               mov dword ptr [eax + 0xc], edx
// 005782d9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005782dd  c70060c87a00         mov dword ptr [eax], 0x7ac860
// 005782e3  894810               mov dword ptr [eax + 0x10], ecx
// 005782e6  895014               mov dword ptr [eax + 0x14], edx
// 005782e9  eb02                 jmp 0x5782ed
// 005782eb  33c0                 xor eax, eax
// 005782ed  56                   push esi
// 005782ee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005782f2  6a00                 push 0
// 005782f4  c744240800000000     mov dword ptr [esp + 8], 0
// 005782fc  8906                 mov dword ptr [esi], eax
// 005782fe  e8ed5d0a00           call 0x61e0f0
// 00578303  83c404               add esp, 4
// 00578306  8bc6                 mov eax, esi
// 00578308  5e                   pop esi
// 00578309  59                   pop ecx
// 0057830a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
