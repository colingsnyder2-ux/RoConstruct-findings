// roc 2009-12 00715ce0  unit: RBX::VMotor::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00715ce0
//
// 00715ce0  51                   push ecx
// 00715ce1  6a18                 push 0x18
// 00715ce3  c744240400000000     mov dword ptr [esp + 4], 0
// 00715ceb  e870db0d00           call 0x7f3860
// 00715cf0  83c404               add esp, 4
// 00715cf3  85c0                 test eax, eax
// 00715cf5  7424                 je 0x715d1b
// 00715cf7  c70094ea9d00         mov dword ptr [eax], 0x9dea94
// 00715cfd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00715d01  894808               mov dword ptr [eax + 8], ecx
// 00715d04  8b542410             mov edx, dword ptr [esp + 0x10]
// 00715d08  89500c               mov dword ptr [eax + 0xc], edx
// 00715d0b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00715d0f  894810               mov dword ptr [eax + 0x10], ecx
// 00715d12  8b542418             mov edx, dword ptr [esp + 0x18]
// 00715d16  895014               mov dword ptr [eax + 0x14], edx
// 00715d19  eb02                 jmp 0x715d1d
// 00715d1b  33c0                 xor eax, eax
// 00715d1d  56                   push esi
// 00715d1e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00715d22  6a00                 push 0
// 00715d24  8906                 mov dword ptr [esi], eax
// 00715d26  e82fdb0d00           call 0x7f385a
// 00715d2b  83c404               add esp, 4
// 00715d2e  8bc6                 mov eax, esi
// 00715d30  5e                   pop esi
// 00715d31  59                   pop ecx
// 00715d32  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
