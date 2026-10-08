// roc 2012-06 00730270  unit: RBX::VGameBasicSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00730270
//
// 00730270  51                   push ecx
// 00730271  6a18                 push 0x18
// 00730273  c744240400000000     mov dword ptr [esp + 4], 0
// 0073027b  e89a1e2500           call 0x98211a
// 00730280  83c404               add esp, 4
// 00730283  85c0                 test eax, eax
// 00730285  7424                 je 0x7302ab
// 00730287  c700d070ba00         mov dword ptr [eax], 0xba70d0
// 0073028d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00730291  894808               mov dword ptr [eax + 8], ecx
// 00730294  8b542410             mov edx, dword ptr [esp + 0x10]
// 00730298  89500c               mov dword ptr [eax + 0xc], edx
// 0073029b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0073029f  894810               mov dword ptr [eax + 0x10], ecx
// 007302a2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007302a6  895014               mov dword ptr [eax + 0x14], edx
// 007302a9  eb02                 jmp 0x7302ad
// 007302ab  33c0                 xor eax, eax
// 007302ad  56                   push esi
// 007302ae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007302b2  6a00                 push 0
// 007302b4  8906                 mov dword ptr [esi], eax
// 007302b6  e8591e2500           call 0x982114
// 007302bb  83c404               add esp, 4
// 007302be  8bc6                 mov eax, esi
// 007302c0  5e                   pop esi
// 007302c1  59                   pop ecx
// 007302c2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
