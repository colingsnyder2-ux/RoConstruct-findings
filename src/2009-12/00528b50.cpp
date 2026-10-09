// roc 2009-12 00528b50  unit: VAuthoringSettings::?$BoundPropGetSet  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00528b50
//
// 00528b50  51                   push ecx
// 00528b51  6a18                 push 0x18
// 00528b53  c744240400000000     mov dword ptr [esp + 4], 0
// 00528b5b  e800ad2c00           call 0x7f3860
// 00528b60  83c404               add esp, 4
// 00528b63  85c0                 test eax, eax
// 00528b65  7424                 je 0x528b8b
// 00528b67  c7009cbf9b00         mov dword ptr [eax], 0x9bbf9c
// 00528b6d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00528b71  894808               mov dword ptr [eax + 8], ecx
// 00528b74  8b542410             mov edx, dword ptr [esp + 0x10]
// 00528b78  89500c               mov dword ptr [eax + 0xc], edx
// 00528b7b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00528b7f  894810               mov dword ptr [eax + 0x10], ecx
// 00528b82  8b542418             mov edx, dword ptr [esp + 0x18]
// 00528b86  895014               mov dword ptr [eax + 0x14], edx
// 00528b89  eb02                 jmp 0x528b8d
// 00528b8b  33c0                 xor eax, eax
// 00528b8d  56                   push esi
// 00528b8e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00528b92  6a00                 push 0
// 00528b94  8906                 mov dword ptr [esi], eax
// 00528b96  e8bfac2c00           call 0x7f385a
// 00528b9b  83c404               add esp, 4
// 00528b9e  8bc6                 mov eax, esi
// 00528ba0  5e                   pop esi
// 00528ba1  59                   pop ecx
// 00528ba2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
