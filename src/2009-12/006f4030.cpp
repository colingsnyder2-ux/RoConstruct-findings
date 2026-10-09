// roc 2009-12 006f4030  unit: RBX::VDecal::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006f4030
//
// 006f4030  51                   push ecx
// 006f4031  6a18                 push 0x18
// 006f4033  c744240400000000     mov dword ptr [esp + 4], 0
// 006f403b  e820f80f00           call 0x7f3860
// 006f4040  83c404               add esp, 4
// 006f4043  85c0                 test eax, eax
// 006f4045  7424                 je 0x6f406b
// 006f4047  c70004c69d00         mov dword ptr [eax], 0x9dc604
// 006f404d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f4051  894808               mov dword ptr [eax + 8], ecx
// 006f4054  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f4058  89500c               mov dword ptr [eax + 0xc], edx
// 006f405b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006f405f  894810               mov dword ptr [eax + 0x10], ecx
// 006f4062  8b542418             mov edx, dword ptr [esp + 0x18]
// 006f4066  895014               mov dword ptr [eax + 0x14], edx
// 006f4069  eb02                 jmp 0x6f406d
// 006f406b  33c0                 xor eax, eax
// 006f406d  56                   push esi
// 006f406e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006f4072  6a00                 push 0
// 006f4074  8906                 mov dword ptr [esi], eax
// 006f4076  e8dff70f00           call 0x7f385a
// 006f407b  83c404               add esp, 4
// 006f407e  8bc6                 mov eax, esi
// 006f4080  5e                   pop esi
// 006f4081  59                   pop ecx
// 006f4082  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
