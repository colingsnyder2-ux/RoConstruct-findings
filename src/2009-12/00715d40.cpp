// roc 2009-12 00715d40  unit: RBX::VMotor::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00715d40
//
// 00715d40  51                   push ecx
// 00715d41  6a18                 push 0x18
// 00715d43  c744240400000000     mov dword ptr [esp + 4], 0
// 00715d4b  e810db0d00           call 0x7f3860
// 00715d50  83c404               add esp, 4
// 00715d53  85c0                 test eax, eax
// 00715d55  7424                 je 0x715d7b
// 00715d57  c700acea9d00         mov dword ptr [eax], 0x9deaac
// 00715d5d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00715d61  894808               mov dword ptr [eax + 8], ecx
// 00715d64  8b542410             mov edx, dword ptr [esp + 0x10]
// 00715d68  89500c               mov dword ptr [eax + 0xc], edx
// 00715d6b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00715d6f  894810               mov dword ptr [eax + 0x10], ecx
// 00715d72  8b542418             mov edx, dword ptr [esp + 0x18]
// 00715d76  895014               mov dword ptr [eax + 0x14], edx
// 00715d79  eb02                 jmp 0x715d7d
// 00715d7b  33c0                 xor eax, eax
// 00715d7d  56                   push esi
// 00715d7e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00715d82  6a00                 push 0
// 00715d84  8906                 mov dword ptr [esi], eax
// 00715d86  e8cfda0d00           call 0x7f385a
// 00715d8b  83c404               add esp, 4
// 00715d8e  8bc6                 mov eax, esi
// 00715d90  5e                   pop esi
// 00715d91  59                   pop ecx
// 00715d92  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
