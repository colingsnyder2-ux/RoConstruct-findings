// roc 2007-03 00486180  unit: seg_00480000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00486180
//
// 00486180  51                   push ecx
// 00486181  6a18                 push 0x18
// 00486183  c744240400000000     mov dword ptr [esp + 4], 0
// 0048618b  e8787f1900           call 0x61e108
// 00486190  83c404               add esp, 4
// 00486193  85c0                 test eax, eax
// 00486195  7424                 je 0x4861bb
// 00486197  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048619b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0048619f  894808               mov dword ptr [eax + 8], ecx
// 004861a2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004861a6  89500c               mov dword ptr [eax + 0xc], edx
// 004861a9  8b542418             mov edx, dword ptr [esp + 0x18]
// 004861ad  c700dc9f7900         mov dword ptr [eax], 0x799fdc
// 004861b3  894810               mov dword ptr [eax + 0x10], ecx
// 004861b6  895014               mov dword ptr [eax + 0x14], edx
// 004861b9  eb02                 jmp 0x4861bd
// 004861bb  33c0                 xor eax, eax
// 004861bd  56                   push esi
// 004861be  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004861c2  6a00                 push 0
// 004861c4  c744240800000000     mov dword ptr [esp + 8], 0
// 004861cc  8906                 mov dword ptr [esi], eax
// 004861ce  e81d7f1900           call 0x61e0f0
// 004861d3  83c404               add esp, 4
// 004861d6  8bc6                 mov eax, esi
// 004861d8  5e                   pop esi
// 004861d9  59                   pop ecx
// 004861da  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
