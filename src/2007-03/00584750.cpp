// roc 2007-03 00584750  unit: seg_00580000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00584750
//
// 00584750  51                   push ecx
// 00584751  6a18                 push 0x18
// 00584753  c744240400000000     mov dword ptr [esp + 4], 0
// 0058475b  e8a8990900           call 0x61e108
// 00584760  83c404               add esp, 4
// 00584763  85c0                 test eax, eax
// 00584765  7424                 je 0x58478b
// 00584767  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058476b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058476f  894808               mov dword ptr [eax + 8], ecx
// 00584772  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00584776  89500c               mov dword ptr [eax + 0xc], edx
// 00584779  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058477d  c700c0fa7a00         mov dword ptr [eax], 0x7afac0
// 00584783  894810               mov dword ptr [eax + 0x10], ecx
// 00584786  895014               mov dword ptr [eax + 0x14], edx
// 00584789  eb02                 jmp 0x58478d
// 0058478b  33c0                 xor eax, eax
// 0058478d  56                   push esi
// 0058478e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00584792  6a00                 push 0
// 00584794  c744240800000000     mov dword ptr [esp + 8], 0
// 0058479c  8906                 mov dword ptr [esi], eax
// 0058479e  e84d990900           call 0x61e0f0
// 005847a3  83c404               add esp, 4
// 005847a6  8bc6                 mov eax, esi
// 005847a8  5e                   pop esi
// 005847a9  59                   pop ecx
// 005847aa  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
