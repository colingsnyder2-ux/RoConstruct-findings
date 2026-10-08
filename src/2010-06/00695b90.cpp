// roc 2010-06 00695b90  unit: RBX::VMotor::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00695b90
//
// 00695b90  51                   push ecx
// 00695b91  6a18                 push 0x18
// 00695b93  c744240400000000     mov dword ptr [esp + 4], 0
// 00695b9b  e8001e1100           call 0x7a79a0
// 00695ba0  83c404               add esp, 4
// 00695ba3  85c0                 test eax, eax
// 00695ba5  7424                 je 0x695bcb
// 00695ba7  c7009ce4a300         mov dword ptr [eax], 0xa3e49c
// 00695bad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00695bb1  894808               mov dword ptr [eax + 8], ecx
// 00695bb4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00695bb8  89500c               mov dword ptr [eax + 0xc], edx
// 00695bbb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00695bbf  894810               mov dword ptr [eax + 0x10], ecx
// 00695bc2  8b542418             mov edx, dword ptr [esp + 0x18]
// 00695bc6  895014               mov dword ptr [eax + 0x14], edx
// 00695bc9  eb02                 jmp 0x695bcd
// 00695bcb  33c0                 xor eax, eax
// 00695bcd  56                   push esi
// 00695bce  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00695bd2  6a00                 push 0
// 00695bd4  8906                 mov dword ptr [esi], eax
// 00695bd6  e8bf1d1100           call 0x7a799a
// 00695bdb  83c404               add esp, 4
// 00695bde  8bc6                 mov eax, esi
// 00695be0  5e                   pop esi
// 00695be1  59                   pop ecx
// 00695be2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
