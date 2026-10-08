// roc 2009-06 005c9820  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c9820
//
// 005c9820  51                   push ecx
// 005c9821  6a18                 push 0x18
// 005c9823  c744240400000000     mov dword ptr [esp + 4], 0
// 005c982b  e808f21400           call 0x718a38
// 005c9830  83c404               add esp, 4
// 005c9833  85c0                 test eax, eax
// 005c9835  7424                 je 0x5c985b
// 005c9837  c700c4428d00         mov dword ptr [eax], 0x8d42c4
// 005c983d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c9841  894808               mov dword ptr [eax + 8], ecx
// 005c9844  8b542410             mov edx, dword ptr [esp + 0x10]
// 005c9848  89500c               mov dword ptr [eax + 0xc], edx
// 005c984b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005c984f  894810               mov dword ptr [eax + 0x10], ecx
// 005c9852  8b542418             mov edx, dword ptr [esp + 0x18]
// 005c9856  895014               mov dword ptr [eax + 0x14], edx
// 005c9859  eb02                 jmp 0x5c985d
// 005c985b  33c0                 xor eax, eax
// 005c985d  56                   push esi
// 005c985e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005c9862  6a00                 push 0
// 005c9864  8906                 mov dword ptr [esi], eax
// 005c9866  e8c7f11400           call 0x718a32
// 005c986b  83c404               add esp, 4
// 005c986e  8bc6                 mov eax, esi
// 005c9870  5e                   pop esi
// 005c9871  59                   pop ecx
// 005c9872  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
