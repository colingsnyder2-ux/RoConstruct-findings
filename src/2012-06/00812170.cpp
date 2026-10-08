// roc 2012-06 00812170  unit: RBX::VGlue::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00812170
//
// 00812170  51                   push ecx
// 00812171  6a18                 push 0x18
// 00812173  c744240400000000     mov dword ptr [esp + 4], 0
// 0081217b  e89aff1600           call 0x98211a
// 00812180  83c404               add esp, 4
// 00812183  85c0                 test eax, eax
// 00812185  7424                 je 0x8121ab
// 00812187  c700ec60bc00         mov dword ptr [eax], 0xbc60ec
// 0081218d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00812191  894808               mov dword ptr [eax + 8], ecx
// 00812194  8b542410             mov edx, dword ptr [esp + 0x10]
// 00812198  89500c               mov dword ptr [eax + 0xc], edx
// 0081219b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081219f  894810               mov dword ptr [eax + 0x10], ecx
// 008121a2  8b542418             mov edx, dword ptr [esp + 0x18]
// 008121a6  895014               mov dword ptr [eax + 0x14], edx
// 008121a9  eb02                 jmp 0x8121ad
// 008121ab  33c0                 xor eax, eax
// 008121ad  56                   push esi
// 008121ae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008121b2  6a00                 push 0
// 008121b4  8906                 mov dword ptr [esi], eax
// 008121b6  e859ff1600           call 0x982114
// 008121bb  83c404               add esp, 4
// 008121be  8bc6                 mov eax, esi
// 008121c0  5e                   pop esi
// 008121c1  59                   pop ecx
// 008121c2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
