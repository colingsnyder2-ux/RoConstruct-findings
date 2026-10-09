// roc 2009-12 006c5df0  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006c5df0
//
// 006c5df0  51                   push ecx
// 006c5df1  6a18                 push 0x18
// 006c5df3  c744240400000000     mov dword ptr [esp + 4], 0
// 006c5dfb  e860da1200           call 0x7f3860
// 006c5e00  83c404               add esp, 4
// 006c5e03  85c0                 test eax, eax
// 006c5e05  7424                 je 0x6c5e2b
// 006c5e07  c700146f9d00         mov dword ptr [eax], 0x9d6f14
// 006c5e0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c5e11  894808               mov dword ptr [eax + 8], ecx
// 006c5e14  8b542410             mov edx, dword ptr [esp + 0x10]
// 006c5e18  89500c               mov dword ptr [eax + 0xc], edx
// 006c5e1b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006c5e1f  894810               mov dword ptr [eax + 0x10], ecx
// 006c5e22  8b542418             mov edx, dword ptr [esp + 0x18]
// 006c5e26  895014               mov dword ptr [eax + 0x14], edx
// 006c5e29  eb02                 jmp 0x6c5e2d
// 006c5e2b  33c0                 xor eax, eax
// 006c5e2d  56                   push esi
// 006c5e2e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006c5e32  6a00                 push 0
// 006c5e34  8906                 mov dword ptr [esi], eax
// 006c5e36  e81fda1200           call 0x7f385a
// 006c5e3b  83c404               add esp, 4
// 006c5e3e  8bc6                 mov eax, esi
// 006c5e40  5e                   pop esi
// 006c5e41  59                   pop ecx
// 006c5e42  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
