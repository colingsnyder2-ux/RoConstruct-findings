// roc 2012-06 0071a950  unit: RBX::P8BaseScript::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0071a950
//
// 0071a950  51                   push ecx
// 0071a951  6a18                 push 0x18
// 0071a953  c744240400000000     mov dword ptr [esp + 4], 0
// 0071a95b  e8ba772600           call 0x98211a
// 0071a960  83c404               add esp, 4
// 0071a963  85c0                 test eax, eax
// 0071a965  7424                 je 0x71a98b
// 0071a967  c7003c33ba00         mov dword ptr [eax], 0xba333c
// 0071a96d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0071a971  894808               mov dword ptr [eax + 8], ecx
// 0071a974  8b542410             mov edx, dword ptr [esp + 0x10]
// 0071a978  89500c               mov dword ptr [eax + 0xc], edx
// 0071a97b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0071a97f  894810               mov dword ptr [eax + 0x10], ecx
// 0071a982  8b542418             mov edx, dword ptr [esp + 0x18]
// 0071a986  895014               mov dword ptr [eax + 0x14], edx
// 0071a989  eb02                 jmp 0x71a98d
// 0071a98b  33c0                 xor eax, eax
// 0071a98d  56                   push esi
// 0071a98e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0071a992  6a00                 push 0
// 0071a994  8906                 mov dword ptr [esi], eax
// 0071a996  e879772600           call 0x982114
// 0071a99b  83c404               add esp, 4
// 0071a99e  8bc6                 mov eax, esi
// 0071a9a0  5e                   pop esi
// 0071a9a1  59                   pop ecx
// 0071a9a2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
