// roc 2010-06 00695ad0  unit: RBX::VMotor::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00695ad0
//
// 00695ad0  51                   push ecx
// 00695ad1  6a18                 push 0x18
// 00695ad3  c744240400000000     mov dword ptr [esp + 4], 0
// 00695adb  e8c01e1100           call 0x7a79a0
// 00695ae0  83c404               add esp, 4
// 00695ae3  85c0                 test eax, eax
// 00695ae5  7424                 je 0x695b0b
// 00695ae7  c7006ce4a300         mov dword ptr [eax], 0xa3e46c
// 00695aed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00695af1  894808               mov dword ptr [eax + 8], ecx
// 00695af4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00695af8  89500c               mov dword ptr [eax + 0xc], edx
// 00695afb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00695aff  894810               mov dword ptr [eax + 0x10], ecx
// 00695b02  8b542418             mov edx, dword ptr [esp + 0x18]
// 00695b06  895014               mov dword ptr [eax + 0x14], edx
// 00695b09  eb02                 jmp 0x695b0d
// 00695b0b  33c0                 xor eax, eax
// 00695b0d  56                   push esi
// 00695b0e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00695b12  6a00                 push 0
// 00695b14  8906                 mov dword ptr [esi], eax
// 00695b16  e87f1e1100           call 0x7a799a
// 00695b1b  83c404               add esp, 4
// 00695b1e  8bc6                 mov eax, esi
// 00695b20  5e                   pop esi
// 00695b21  59                   pop ecx
// 00695b22  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
