// roc 2012-06 0072e770  unit: RBX::VGameSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0072e770
//
// 0072e770  51                   push ecx
// 0072e771  6a18                 push 0x18
// 0072e773  c744240400000000     mov dword ptr [esp + 4], 0
// 0072e77b  e89a392500           call 0x98211a
// 0072e780  83c404               add esp, 4
// 0072e783  85c0                 test eax, eax
// 0072e785  7424                 je 0x72e7ab
// 0072e787  c7002c6cba00         mov dword ptr [eax], 0xba6c2c
// 0072e78d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0072e791  894808               mov dword ptr [eax + 8], ecx
// 0072e794  8b542410             mov edx, dword ptr [esp + 0x10]
// 0072e798  89500c               mov dword ptr [eax + 0xc], edx
// 0072e79b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0072e79f  894810               mov dword ptr [eax + 0x10], ecx
// 0072e7a2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0072e7a6  895014               mov dword ptr [eax + 0x14], edx
// 0072e7a9  eb02                 jmp 0x72e7ad
// 0072e7ab  33c0                 xor eax, eax
// 0072e7ad  56                   push esi
// 0072e7ae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0072e7b2  6a00                 push 0
// 0072e7b4  8906                 mov dword ptr [esi], eax
// 0072e7b6  e859392500           call 0x982114
// 0072e7bb  83c404               add esp, 4
// 0072e7be  8bc6                 mov eax, esi
// 0072e7c0  5e                   pop esi
// 0072e7c1  59                   pop ecx
// 0072e7c2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
