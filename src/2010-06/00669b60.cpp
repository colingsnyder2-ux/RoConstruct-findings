// roc 2010-06 00669b60  unit: RBX::VShirtGraphic::?$BoundPropGetSet  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00669b60
//
// 00669b60  51                   push ecx
// 00669b61  6a18                 push 0x18
// 00669b63  c744240400000000     mov dword ptr [esp + 4], 0
// 00669b6b  e830de1300           call 0x7a79a0
// 00669b70  83c404               add esp, 4
// 00669b73  85c0                 test eax, eax
// 00669b75  7424                 je 0x669b9b
// 00669b77  c70034bda300         mov dword ptr [eax], 0xa3bd34
// 00669b7d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00669b81  894808               mov dword ptr [eax + 8], ecx
// 00669b84  8b542410             mov edx, dword ptr [esp + 0x10]
// 00669b88  89500c               mov dword ptr [eax + 0xc], edx
// 00669b8b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00669b8f  894810               mov dword ptr [eax + 0x10], ecx
// 00669b92  8b542418             mov edx, dword ptr [esp + 0x18]
// 00669b96  895014               mov dword ptr [eax + 0x14], edx
// 00669b99  eb02                 jmp 0x669b9d
// 00669b9b  33c0                 xor eax, eax
// 00669b9d  56                   push esi
// 00669b9e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00669ba2  6a00                 push 0
// 00669ba4  8906                 mov dword ptr [esi], eax
// 00669ba6  e8efdd1300           call 0x7a799a
// 00669bab  83c404               add esp, 4
// 00669bae  8bc6                 mov eax, esi
// 00669bb0  5e                   pop esi
// 00669bb1  59                   pop ecx
// 00669bb2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
