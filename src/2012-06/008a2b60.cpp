// roc 2012-06 008a2b60  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008a2b60
//
// 008a2b60  51                   push ecx
// 008a2b61  6a18                 push 0x18
// 008a2b63  c744240400000000     mov dword ptr [esp + 4], 0
// 008a2b6b  e8aaf50d00           call 0x98211a
// 008a2b70  83c404               add esp, 4
// 008a2b73  85c0                 test eax, eax
// 008a2b75  7424                 je 0x8a2b9b
// 008a2b77  c7005ce5bd00         mov dword ptr [eax], 0xbde55c
// 008a2b7d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a2b81  894808               mov dword ptr [eax + 8], ecx
// 008a2b84  8b542410             mov edx, dword ptr [esp + 0x10]
// 008a2b88  89500c               mov dword ptr [eax + 0xc], edx
// 008a2b8b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008a2b8f  894810               mov dword ptr [eax + 0x10], ecx
// 008a2b92  8b542418             mov edx, dword ptr [esp + 0x18]
// 008a2b96  895014               mov dword ptr [eax + 0x14], edx
// 008a2b99  eb02                 jmp 0x8a2b9d
// 008a2b9b  33c0                 xor eax, eax
// 008a2b9d  56                   push esi
// 008a2b9e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008a2ba2  6a00                 push 0
// 008a2ba4  8906                 mov dword ptr [esi], eax
// 008a2ba6  e869f50d00           call 0x982114
// 008a2bab  83c404               add esp, 4
// 008a2bae  8bc6                 mov eax, esi
// 008a2bb0  5e                   pop esi
// 008a2bb1  59                   pop ecx
// 008a2bb2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
