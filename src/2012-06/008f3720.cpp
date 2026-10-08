// roc 2012-06 008f3720  unit: RBX::VInstance::?$NonFactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008f3720
//
// 008f3720  51                   push ecx
// 008f3721  6a18                 push 0x18
// 008f3723  c744240400000000     mov dword ptr [esp + 4], 0
// 008f372b  e8eae90800           call 0x98211a
// 008f3730  83c404               add esp, 4
// 008f3733  85c0                 test eax, eax
// 008f3735  7424                 je 0x8f375b
// 008f3737  c700c4f8be00         mov dword ptr [eax], 0xbef8c4
// 008f373d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f3741  894808               mov dword ptr [eax + 8], ecx
// 008f3744  8b542410             mov edx, dword ptr [esp + 0x10]
// 008f3748  89500c               mov dword ptr [eax + 0xc], edx
// 008f374b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008f374f  894810               mov dword ptr [eax + 0x10], ecx
// 008f3752  8b542418             mov edx, dword ptr [esp + 0x18]
// 008f3756  895014               mov dword ptr [eax + 0x14], edx
// 008f3759  eb02                 jmp 0x8f375d
// 008f375b  33c0                 xor eax, eax
// 008f375d  56                   push esi
// 008f375e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008f3762  6a00                 push 0
// 008f3764  8906                 mov dword ptr [esi], eax
// 008f3766  e8a9e90800           call 0x982114
// 008f376b  83c404               add esp, 4
// 008f376e  8bc6                 mov eax, esi
// 008f3770  5e                   pop esi
// 008f3771  59                   pop ecx
// 008f3772  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
