// roc 2009-12 00715e00  unit: RBX::VMotor::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00715e00
//
// 00715e00  51                   push ecx
// 00715e01  6a18                 push 0x18
// 00715e03  c744240400000000     mov dword ptr [esp + 4], 0
// 00715e0b  e850da0d00           call 0x7f3860
// 00715e10  83c404               add esp, 4
// 00715e13  85c0                 test eax, eax
// 00715e15  7424                 je 0x715e3b
// 00715e17  c700dcea9d00         mov dword ptr [eax], 0x9deadc
// 00715e1d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00715e21  894808               mov dword ptr [eax + 8], ecx
// 00715e24  8b542410             mov edx, dword ptr [esp + 0x10]
// 00715e28  89500c               mov dword ptr [eax + 0xc], edx
// 00715e2b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00715e2f  894810               mov dword ptr [eax + 0x10], ecx
// 00715e32  8b542418             mov edx, dword ptr [esp + 0x18]
// 00715e36  895014               mov dword ptr [eax + 0x14], edx
// 00715e39  eb02                 jmp 0x715e3d
// 00715e3b  33c0                 xor eax, eax
// 00715e3d  56                   push esi
// 00715e3e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00715e42  6a00                 push 0
// 00715e44  8906                 mov dword ptr [esi], eax
// 00715e46  e80fda0d00           call 0x7f385a
// 00715e4b  83c404               add esp, 4
// 00715e4e  8bc6                 mov eax, esi
// 00715e50  5e                   pop esi
// 00715e51  59                   pop ecx
// 00715e52  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
