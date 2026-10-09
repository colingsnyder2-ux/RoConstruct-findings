// roc 2009-12 00715e60  unit: RBX::VMotor::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00715e60
//
// 00715e60  51                   push ecx
// 00715e61  6a18                 push 0x18
// 00715e63  c744240400000000     mov dword ptr [esp + 4], 0
// 00715e6b  e8f0d90d00           call 0x7f3860
// 00715e70  83c404               add esp, 4
// 00715e73  85c0                 test eax, eax
// 00715e75  7424                 je 0x715e9b
// 00715e77  c700f4ea9d00         mov dword ptr [eax], 0x9deaf4
// 00715e7d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00715e81  894808               mov dword ptr [eax + 8], ecx
// 00715e84  8b542410             mov edx, dword ptr [esp + 0x10]
// 00715e88  89500c               mov dword ptr [eax + 0xc], edx
// 00715e8b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00715e8f  894810               mov dword ptr [eax + 0x10], ecx
// 00715e92  8b542418             mov edx, dword ptr [esp + 0x18]
// 00715e96  895014               mov dword ptr [eax + 0x14], edx
// 00715e99  eb02                 jmp 0x715e9d
// 00715e9b  33c0                 xor eax, eax
// 00715e9d  56                   push esi
// 00715e9e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00715ea2  6a00                 push 0
// 00715ea4  8906                 mov dword ptr [esi], eax
// 00715ea6  e8afd90d00           call 0x7f385a
// 00715eab  83c404               add esp, 4
// 00715eae  8bc6                 mov eax, esi
// 00715eb0  5e                   pop esi
// 00715eb1  59                   pop ecx
// 00715eb2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
