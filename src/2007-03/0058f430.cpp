// roc 2007-03 0058f430  unit: seg_00580000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0058f430
//
// 0058f430  51                   push ecx
// 0058f431  6a18                 push 0x18
// 0058f433  c744240400000000     mov dword ptr [esp + 4], 0
// 0058f43b  e8c8ec0800           call 0x61e108
// 0058f440  83c404               add esp, 4
// 0058f443  85c0                 test eax, eax
// 0058f445  7424                 je 0x58f46b
// 0058f447  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058f44b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058f44f  894808               mov dword ptr [eax + 8], ecx
// 0058f452  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0058f456  89500c               mov dword ptr [eax + 0xc], edx
// 0058f459  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058f45d  c7002c167b00         mov dword ptr [eax], 0x7b162c
// 0058f463  894810               mov dword ptr [eax + 0x10], ecx
// 0058f466  895014               mov dword ptr [eax + 0x14], edx
// 0058f469  eb02                 jmp 0x58f46d
// 0058f46b  33c0                 xor eax, eax
// 0058f46d  56                   push esi
// 0058f46e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0058f472  6a00                 push 0
// 0058f474  c744240800000000     mov dword ptr [esp + 8], 0
// 0058f47c  8906                 mov dword ptr [esi], eax
// 0058f47e  e86dec0800           call 0x61e0f0
// 0058f483  83c404               add esp, 4
// 0058f486  8bc6                 mov eax, esi
// 0058f488  5e                   pop esi
// 0058f489  59                   pop ecx
// 0058f48a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
