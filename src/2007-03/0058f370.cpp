// roc 2007-03 0058f370  unit: seg_00580000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0058f370
//
// 0058f370  51                   push ecx
// 0058f371  6a18                 push 0x18
// 0058f373  c744240400000000     mov dword ptr [esp + 4], 0
// 0058f37b  e888ed0800           call 0x61e108
// 0058f380  83c404               add esp, 4
// 0058f383  85c0                 test eax, eax
// 0058f385  7424                 je 0x58f3ab
// 0058f387  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058f38b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058f38f  894808               mov dword ptr [eax + 8], ecx
// 0058f392  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0058f396  89500c               mov dword ptr [eax + 0xc], edx
// 0058f399  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058f39d  c7000c167b00         mov dword ptr [eax], 0x7b160c
// 0058f3a3  894810               mov dword ptr [eax + 0x10], ecx
// 0058f3a6  895014               mov dword ptr [eax + 0x14], edx
// 0058f3a9  eb02                 jmp 0x58f3ad
// 0058f3ab  33c0                 xor eax, eax
// 0058f3ad  56                   push esi
// 0058f3ae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0058f3b2  6a00                 push 0
// 0058f3b4  c744240800000000     mov dword ptr [esp + 8], 0
// 0058f3bc  8906                 mov dword ptr [esi], eax
// 0058f3be  e82ded0800           call 0x61e0f0
// 0058f3c3  83c404               add esp, 4
// 0058f3c6  8bc6                 mov eax, esi
// 0058f3c8  5e                   pop esi
// 0058f3c9  59                   pop ecx
// 0058f3ca  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
