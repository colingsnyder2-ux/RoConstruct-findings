// roc 2009-12 00715da0  unit: RBX::VMotor::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00715da0
//
// 00715da0  51                   push ecx
// 00715da1  6a18                 push 0x18
// 00715da3  c744240400000000     mov dword ptr [esp + 4], 0
// 00715dab  e8b0da0d00           call 0x7f3860
// 00715db0  83c404               add esp, 4
// 00715db3  85c0                 test eax, eax
// 00715db5  7424                 je 0x715ddb
// 00715db7  c700c4ea9d00         mov dword ptr [eax], 0x9deac4
// 00715dbd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00715dc1  894808               mov dword ptr [eax + 8], ecx
// 00715dc4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00715dc8  89500c               mov dword ptr [eax + 0xc], edx
// 00715dcb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00715dcf  894810               mov dword ptr [eax + 0x10], ecx
// 00715dd2  8b542418             mov edx, dword ptr [esp + 0x18]
// 00715dd6  895014               mov dword ptr [eax + 0x14], edx
// 00715dd9  eb02                 jmp 0x715ddd
// 00715ddb  33c0                 xor eax, eax
// 00715ddd  56                   push esi
// 00715dde  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00715de2  6a00                 push 0
// 00715de4  8906                 mov dword ptr [esi], eax
// 00715de6  e86fda0d00           call 0x7f385a
// 00715deb  83c404               add esp, 4
// 00715dee  8bc6                 mov eax, esi
// 00715df0  5e                   pop esi
// 00715df1  59                   pop ecx
// 00715df2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
