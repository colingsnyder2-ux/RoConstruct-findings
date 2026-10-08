// roc 2009-06 00698ea0  unit: RBX::VMotorFeature::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00698ea0
//
// 00698ea0  51                   push ecx
// 00698ea1  6a18                 push 0x18
// 00698ea3  c744240400000000     mov dword ptr [esp + 4], 0
// 00698eab  e888fb0700           call 0x718a38
// 00698eb0  83c404               add esp, 4
// 00698eb3  85c0                 test eax, eax
// 00698eb5  7424                 je 0x698edb
// 00698eb7  c70074808e00         mov dword ptr [eax], 0x8e8074
// 00698ebd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00698ec1  894808               mov dword ptr [eax + 8], ecx
// 00698ec4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00698ec8  89500c               mov dword ptr [eax + 0xc], edx
// 00698ecb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00698ecf  894810               mov dword ptr [eax + 0x10], ecx
// 00698ed2  8b542418             mov edx, dword ptr [esp + 0x18]
// 00698ed6  895014               mov dword ptr [eax + 0x14], edx
// 00698ed9  eb02                 jmp 0x698edd
// 00698edb  33c0                 xor eax, eax
// 00698edd  56                   push esi
// 00698ede  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00698ee2  6a00                 push 0
// 00698ee4  8906                 mov dword ptr [esi], eax
// 00698ee6  e847fb0700           call 0x718a32
// 00698eeb  83c404               add esp, 4
// 00698eee  8bc6                 mov eax, esi
// 00698ef0  5e                   pop esi
// 00698ef1  59                   pop ecx
// 00698ef2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
