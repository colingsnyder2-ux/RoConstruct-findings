// roc 2012-06 008f30f0  unit: RBX::P8NetworkSettings::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008f30f0
//
// 008f30f0  51                   push ecx
// 008f30f1  6a18                 push 0x18
// 008f30f3  c744240400000000     mov dword ptr [esp + 4], 0
// 008f30fb  e81af00800           call 0x98211a
// 008f3100  83c404               add esp, 4
// 008f3103  85c0                 test eax, eax
// 008f3105  7424                 je 0x8f312b
// 008f3107  c70010f7be00         mov dword ptr [eax], 0xbef710
// 008f310d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f3111  894808               mov dword ptr [eax + 8], ecx
// 008f3114  8b542410             mov edx, dword ptr [esp + 0x10]
// 008f3118  89500c               mov dword ptr [eax + 0xc], edx
// 008f311b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008f311f  894810               mov dword ptr [eax + 0x10], ecx
// 008f3122  8b542418             mov edx, dword ptr [esp + 0x18]
// 008f3126  895014               mov dword ptr [eax + 0x14], edx
// 008f3129  eb02                 jmp 0x8f312d
// 008f312b  33c0                 xor eax, eax
// 008f312d  56                   push esi
// 008f312e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008f3132  6a00                 push 0
// 008f3134  8906                 mov dword ptr [esi], eax
// 008f3136  e8d9ef0800           call 0x982114
// 008f313b  83c404               add esp, 4
// 008f313e  8bc6                 mov eax, esi
// 008f3140  5e                   pop esi
// 008f3141  59                   pop ecx
// 008f3142  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
