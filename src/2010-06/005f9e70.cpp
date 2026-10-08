// roc 2010-06 005f9e70  unit: RBX::Tool  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f9e70
//
// 005f9e70  51                   push ecx
// 005f9e71  6a18                 push 0x18
// 005f9e73  c744240400000000     mov dword ptr [esp + 4], 0
// 005f9e7b  e820db1a00           call 0x7a79a0
// 005f9e80  83c404               add esp, 4
// 005f9e83  85c0                 test eax, eax
// 005f9e85  7424                 je 0x5f9eab
// 005f9e87  c7000000a300         mov dword ptr [eax], 0xa30000
// 005f9e8d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005f9e91  894808               mov dword ptr [eax + 8], ecx
// 005f9e94  8b542410             mov edx, dword ptr [esp + 0x10]
// 005f9e98  89500c               mov dword ptr [eax + 0xc], edx
// 005f9e9b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005f9e9f  894810               mov dword ptr [eax + 0x10], ecx
// 005f9ea2  8b542418             mov edx, dword ptr [esp + 0x18]
// 005f9ea6  895014               mov dword ptr [eax + 0x14], edx
// 005f9ea9  eb02                 jmp 0x5f9ead
// 005f9eab  33c0                 xor eax, eax
// 005f9ead  56                   push esi
// 005f9eae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005f9eb2  6a00                 push 0
// 005f9eb4  8906                 mov dword ptr [esi], eax
// 005f9eb6  e8dfda1a00           call 0x7a799a
// 005f9ebb  83c404               add esp, 4
// 005f9ebe  8bc6                 mov eax, esi
// 005f9ec0  5e                   pop esi
// 005f9ec1  59                   pop ecx
// 005f9ec2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
