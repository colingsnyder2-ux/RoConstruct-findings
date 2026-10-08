// roc 2010-06 00655d40  unit: RBX::VProtectedString::?$TypedPropertyDescriptor  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00655d40
//
// 00655d40  51                   push ecx
// 00655d41  6a18                 push 0x18
// 00655d43  c744240400000000     mov dword ptr [esp + 4], 0
// 00655d4b  e8501c1500           call 0x7a79a0
// 00655d50  83c404               add esp, 4
// 00655d53  85c0                 test eax, eax
// 00655d55  7424                 je 0x655d7b
// 00655d57  c7005c9ca300         mov dword ptr [eax], 0xa39c5c
// 00655d5d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00655d61  894808               mov dword ptr [eax + 8], ecx
// 00655d64  8b542410             mov edx, dword ptr [esp + 0x10]
// 00655d68  89500c               mov dword ptr [eax + 0xc], edx
// 00655d6b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00655d6f  894810               mov dword ptr [eax + 0x10], ecx
// 00655d72  8b542418             mov edx, dword ptr [esp + 0x18]
// 00655d76  895014               mov dword ptr [eax + 0x14], edx
// 00655d79  eb02                 jmp 0x655d7d
// 00655d7b  33c0                 xor eax, eax
// 00655d7d  56                   push esi
// 00655d7e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00655d82  6a00                 push 0
// 00655d84  8906                 mov dword ptr [esi], eax
// 00655d86  e80f1c1500           call 0x7a799a
// 00655d8b  83c404               add esp, 4
// 00655d8e  8bc6                 mov eax, esi
// 00655d90  5e                   pop esi
// 00655d91  59                   pop ecx
// 00655d92  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
