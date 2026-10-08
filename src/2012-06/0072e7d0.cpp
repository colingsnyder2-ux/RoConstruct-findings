// roc 2012-06 0072e7d0  unit: RBX::VGameSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0072e7d0
//
// 0072e7d0  51                   push ecx
// 0072e7d1  6a18                 push 0x18
// 0072e7d3  c744240400000000     mov dword ptr [esp + 4], 0
// 0072e7db  e83a392500           call 0x98211a
// 0072e7e0  83c404               add esp, 4
// 0072e7e3  85c0                 test eax, eax
// 0072e7e5  7424                 je 0x72e80b
// 0072e7e7  c700406cba00         mov dword ptr [eax], 0xba6c40
// 0072e7ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0072e7f1  894808               mov dword ptr [eax + 8], ecx
// 0072e7f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0072e7f8  89500c               mov dword ptr [eax + 0xc], edx
// 0072e7fb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0072e7ff  894810               mov dword ptr [eax + 0x10], ecx
// 0072e802  8b542418             mov edx, dword ptr [esp + 0x18]
// 0072e806  895014               mov dword ptr [eax + 0x14], edx
// 0072e809  eb02                 jmp 0x72e80d
// 0072e80b  33c0                 xor eax, eax
// 0072e80d  56                   push esi
// 0072e80e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0072e812  6a00                 push 0
// 0072e814  8906                 mov dword ptr [esi], eax
// 0072e816  e8f9382500           call 0x982114
// 0072e81b  83c404               add esp, 4
// 0072e81e  8bc6                 mov eax, esi
// 0072e820  5e                   pop esi
// 0072e821  59                   pop ecx
// 0072e822  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
