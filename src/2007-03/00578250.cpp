// roc 2007-03 00578250  unit: seg_00570000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00578250
//
// 00578250  51                   push ecx
// 00578251  6a18                 push 0x18
// 00578253  c744240400000000     mov dword ptr [esp + 4], 0
// 0057825b  e8a85e0a00           call 0x61e108
// 00578260  83c404               add esp, 4
// 00578263  85c0                 test eax, eax
// 00578265  7424                 je 0x57828b
// 00578267  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057826b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0057826f  894808               mov dword ptr [eax + 8], ecx
// 00578272  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00578276  89500c               mov dword ptr [eax + 0xc], edx
// 00578279  8b542418             mov edx, dword ptr [esp + 0x18]
// 0057827d  c70050c87a00         mov dword ptr [eax], 0x7ac850
// 00578283  894810               mov dword ptr [eax + 0x10], ecx
// 00578286  895014               mov dword ptr [eax + 0x14], edx
// 00578289  eb02                 jmp 0x57828d
// 0057828b  33c0                 xor eax, eax
// 0057828d  56                   push esi
// 0057828e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00578292  6a00                 push 0
// 00578294  c744240800000000     mov dword ptr [esp + 8], 0
// 0057829c  8906                 mov dword ptr [esi], eax
// 0057829e  e84d5e0a00           call 0x61e0f0
// 005782a3  83c404               add esp, 4
// 005782a6  8bc6                 mov eax, esi
// 005782a8  5e                   pop esi
// 005782a9  59                   pop ecx
// 005782aa  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
