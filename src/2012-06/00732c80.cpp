// roc 2012-06 00732c80  unit: RBX::VGuiMain::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00732c80
//
// 00732c80  51                   push ecx
// 00732c81  6a18                 push 0x18
// 00732c83  c744240400000000     mov dword ptr [esp + 4], 0
// 00732c8b  e88af42400           call 0x98211a
// 00732c90  83c404               add esp, 4
// 00732c93  85c0                 test eax, eax
// 00732c95  7424                 je 0x732cbb
// 00732c97  c700d876ba00         mov dword ptr [eax], 0xba76d8
// 00732c9d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00732ca1  894808               mov dword ptr [eax + 8], ecx
// 00732ca4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00732ca8  89500c               mov dword ptr [eax + 0xc], edx
// 00732cab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00732caf  894810               mov dword ptr [eax + 0x10], ecx
// 00732cb2  8b542418             mov edx, dword ptr [esp + 0x18]
// 00732cb6  895014               mov dword ptr [eax + 0x14], edx
// 00732cb9  eb02                 jmp 0x732cbd
// 00732cbb  33c0                 xor eax, eax
// 00732cbd  56                   push esi
// 00732cbe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00732cc2  6a00                 push 0
// 00732cc4  8906                 mov dword ptr [esi], eax
// 00732cc6  e849f42400           call 0x982114
// 00732ccb  83c404               add esp, 4
// 00732cce  8bc6                 mov eax, esi
// 00732cd0  5e                   pop esi
// 00732cd1  59                   pop ecx
// 00732cd2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
