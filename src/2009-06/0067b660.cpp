// roc 2009-06 0067b660  unit: RBX::VRotate::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067b660
//
// 0067b660  51                   push ecx
// 0067b661  6a18                 push 0x18
// 0067b663  c744240400000000     mov dword ptr [esp + 4], 0
// 0067b66b  e8c8d30900           call 0x718a38
// 0067b670  83c404               add esp, 4
// 0067b673  85c0                 test eax, eax
// 0067b675  7424                 je 0x67b69b
// 0067b677  c700284e8e00         mov dword ptr [eax], 0x8e4e28
// 0067b67d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067b681  894808               mov dword ptr [eax + 8], ecx
// 0067b684  8b542410             mov edx, dword ptr [esp + 0x10]
// 0067b688  89500c               mov dword ptr [eax + 0xc], edx
// 0067b68b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0067b68f  894810               mov dword ptr [eax + 0x10], ecx
// 0067b692  8b542418             mov edx, dword ptr [esp + 0x18]
// 0067b696  895014               mov dword ptr [eax + 0x14], edx
// 0067b699  eb02                 jmp 0x67b69d
// 0067b69b  33c0                 xor eax, eax
// 0067b69d  56                   push esi
// 0067b69e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0067b6a2  6a00                 push 0
// 0067b6a4  8906                 mov dword ptr [esi], eax
// 0067b6a6  e887d30900           call 0x718a32
// 0067b6ab  83c404               add esp, 4
// 0067b6ae  8bc6                 mov eax, esi
// 0067b6b0  5e                   pop esi
// 0067b6b1  59                   pop ecx
// 0067b6b2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
