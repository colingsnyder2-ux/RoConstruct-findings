// roc 2010-06 00622510  unit: RBX::VStockSound::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00622510
//
// 00622510  51                   push ecx
// 00622511  6a18                 push 0x18
// 00622513  c744240400000000     mov dword ptr [esp + 4], 0
// 0062251b  e880541800           call 0x7a79a0
// 00622520  83c404               add esp, 4
// 00622523  85c0                 test eax, eax
// 00622525  7424                 je 0x62254b
// 00622527  c700e447a300         mov dword ptr [eax], 0xa347e4
// 0062252d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00622531  894808               mov dword ptr [eax + 8], ecx
// 00622534  8b542410             mov edx, dword ptr [esp + 0x10]
// 00622538  89500c               mov dword ptr [eax + 0xc], edx
// 0062253b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0062253f  894810               mov dword ptr [eax + 0x10], ecx
// 00622542  8b542418             mov edx, dword ptr [esp + 0x18]
// 00622546  895014               mov dword ptr [eax + 0x14], edx
// 00622549  eb02                 jmp 0x62254d
// 0062254b  33c0                 xor eax, eax
// 0062254d  56                   push esi
// 0062254e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00622552  6a00                 push 0
// 00622554  8906                 mov dword ptr [esi], eax
// 00622556  e83f541800           call 0x7a799a
// 0062255b  83c404               add esp, 4
// 0062255e  8bc6                 mov eax, esi
// 00622560  5e                   pop esi
// 00622561  59                   pop ecx
// 00622562  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
