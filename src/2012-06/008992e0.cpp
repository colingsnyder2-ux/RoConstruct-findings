// roc 2012-06 008992e0  unit: RBX::VHole::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008992e0
//
// 008992e0  51                   push ecx
// 008992e1  6a18                 push 0x18
// 008992e3  c744240400000000     mov dword ptr [esp + 4], 0
// 008992eb  e82a8e0e00           call 0x98211a
// 008992f0  83c404               add esp, 4
// 008992f3  85c0                 test eax, eax
// 008992f5  7424                 je 0x89931b
// 008992f7  c70084bcbd00         mov dword ptr [eax], 0xbdbc84
// 008992fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00899301  894808               mov dword ptr [eax + 8], ecx
// 00899304  8b542410             mov edx, dword ptr [esp + 0x10]
// 00899308  89500c               mov dword ptr [eax + 0xc], edx
// 0089930b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0089930f  894810               mov dword ptr [eax + 0x10], ecx
// 00899312  8b542418             mov edx, dword ptr [esp + 0x18]
// 00899316  895014               mov dword ptr [eax + 0x14], edx
// 00899319  eb02                 jmp 0x89931d
// 0089931b  33c0                 xor eax, eax
// 0089931d  56                   push esi
// 0089931e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00899322  6a00                 push 0
// 00899324  8906                 mov dword ptr [esi], eax
// 00899326  e8e98d0e00           call 0x982114
// 0089932b  83c404               add esp, 4
// 0089932e  8bc6                 mov eax, esi
// 00899330  5e                   pop esi
// 00899331  59                   pop ecx
// 00899332  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
