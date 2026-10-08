// roc 2007-03 004861e0  unit: seg_00480000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004861e0
//
// 004861e0  51                   push ecx
// 004861e1  6a18                 push 0x18
// 004861e3  c744240400000000     mov dword ptr [esp + 4], 0
// 004861eb  e8187f1900           call 0x61e108
// 004861f0  83c404               add esp, 4
// 004861f3  85c0                 test eax, eax
// 004861f5  7424                 je 0x48621b
// 004861f7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004861fb  8b542410             mov edx, dword ptr [esp + 0x10]
// 004861ff  894808               mov dword ptr [eax + 8], ecx
// 00486202  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00486206  89500c               mov dword ptr [eax + 0xc], edx
// 00486209  8b542418             mov edx, dword ptr [esp + 0x18]
// 0048620d  c700ec9f7900         mov dword ptr [eax], 0x799fec
// 00486213  894810               mov dword ptr [eax + 0x10], ecx
// 00486216  895014               mov dword ptr [eax + 0x14], edx
// 00486219  eb02                 jmp 0x48621d
// 0048621b  33c0                 xor eax, eax
// 0048621d  56                   push esi
// 0048621e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00486222  6a00                 push 0
// 00486224  c744240800000000     mov dword ptr [esp + 8], 0
// 0048622c  8906                 mov dword ptr [esi], eax
// 0048622e  e8bd7e1900           call 0x61e0f0
// 00486233  83c404               add esp, 4
// 00486236  8bc6                 mov eax, esi
// 00486238  5e                   pop esi
// 00486239  59                   pop ecx
// 0048623a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
