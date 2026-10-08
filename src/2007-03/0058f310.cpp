// roc 2007-03 0058f310  unit: seg_00580000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0058f310
//
// 0058f310  51                   push ecx
// 0058f311  6a18                 push 0x18
// 0058f313  c744240400000000     mov dword ptr [esp + 4], 0
// 0058f31b  e8e8ed0800           call 0x61e108
// 0058f320  83c404               add esp, 4
// 0058f323  85c0                 test eax, eax
// 0058f325  7424                 je 0x58f34b
// 0058f327  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058f32b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058f32f  894808               mov dword ptr [eax + 8], ecx
// 0058f332  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0058f336  89500c               mov dword ptr [eax + 0xc], edx
// 0058f339  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058f33d  c700fc157b00         mov dword ptr [eax], 0x7b15fc
// 0058f343  894810               mov dword ptr [eax + 0x10], ecx
// 0058f346  895014               mov dword ptr [eax + 0x14], edx
// 0058f349  eb02                 jmp 0x58f34d
// 0058f34b  33c0                 xor eax, eax
// 0058f34d  56                   push esi
// 0058f34e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0058f352  6a00                 push 0
// 0058f354  c744240800000000     mov dword ptr [esp + 8], 0
// 0058f35c  8906                 mov dword ptr [esi], eax
// 0058f35e  e88ded0800           call 0x61e0f0
// 0058f363  83c404               add esp, 4
// 0058f366  8bc6                 mov eax, esi
// 0058f368  5e                   pop esi
// 0058f369  59                   pop ecx
// 0058f36a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
