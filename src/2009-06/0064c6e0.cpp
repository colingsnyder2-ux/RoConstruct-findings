// roc 2009-06 0064c6e0  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064c6e0
//
// 0064c6e0  51                   push ecx
// 0064c6e1  6a18                 push 0x18
// 0064c6e3  c744240400000000     mov dword ptr [esp + 4], 0
// 0064c6eb  e848c30c00           call 0x718a38
// 0064c6f0  83c404               add esp, 4
// 0064c6f3  85c0                 test eax, eax
// 0064c6f5  7424                 je 0x64c71b
// 0064c6f7  c700ccf18d00         mov dword ptr [eax], 0x8df1cc
// 0064c6fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0064c701  894808               mov dword ptr [eax + 8], ecx
// 0064c704  8b542410             mov edx, dword ptr [esp + 0x10]
// 0064c708  89500c               mov dword ptr [eax + 0xc], edx
// 0064c70b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0064c70f  894810               mov dword ptr [eax + 0x10], ecx
// 0064c712  8b542418             mov edx, dword ptr [esp + 0x18]
// 0064c716  895014               mov dword ptr [eax + 0x14], edx
// 0064c719  eb02                 jmp 0x64c71d
// 0064c71b  33c0                 xor eax, eax
// 0064c71d  56                   push esi
// 0064c71e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0064c722  6a00                 push 0
// 0064c724  8906                 mov dword ptr [esi], eax
// 0064c726  e807c30c00           call 0x718a32
// 0064c72b  83c404               add esp, 4
// 0064c72e  8bc6                 mov eax, esi
// 0064c730  5e                   pop esi
// 0064c731  59                   pop ecx
// 0064c732  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
