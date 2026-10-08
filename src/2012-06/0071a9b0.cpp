// roc 2012-06 0071a9b0  unit: RBX::P8BaseScript::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0071a9b0
//
// 0071a9b0  51                   push ecx
// 0071a9b1  6a18                 push 0x18
// 0071a9b3  c744240400000000     mov dword ptr [esp + 4], 0
// 0071a9bb  e85a772600           call 0x98211a
// 0071a9c0  83c404               add esp, 4
// 0071a9c3  85c0                 test eax, eax
// 0071a9c5  7424                 je 0x71a9eb
// 0071a9c7  c7005033ba00         mov dword ptr [eax], 0xba3350
// 0071a9cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0071a9d1  894808               mov dword ptr [eax + 8], ecx
// 0071a9d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0071a9d8  89500c               mov dword ptr [eax + 0xc], edx
// 0071a9db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0071a9df  894810               mov dword ptr [eax + 0x10], ecx
// 0071a9e2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0071a9e6  895014               mov dword ptr [eax + 0x14], edx
// 0071a9e9  eb02                 jmp 0x71a9ed
// 0071a9eb  33c0                 xor eax, eax
// 0071a9ed  56                   push esi
// 0071a9ee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0071a9f2  6a00                 push 0
// 0071a9f4  8906                 mov dword ptr [esi], eax
// 0071a9f6  e819772600           call 0x982114
// 0071a9fb  83c404               add esp, 4
// 0071a9fe  8bc6                 mov eax, esi
// 0071aa00  5e                   pop esi
// 0071aa01  59                   pop ecx
// 0071aa02  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
