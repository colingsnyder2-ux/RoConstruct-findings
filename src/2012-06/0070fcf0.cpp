// roc 2012-06 0070fcf0  unit: RBX::Tool  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0070fcf0
//
// 0070fcf0  51                   push ecx
// 0070fcf1  6a18                 push 0x18
// 0070fcf3  c744240400000000     mov dword ptr [esp + 4], 0
// 0070fcfb  e81a242700           call 0x98211a
// 0070fd00  83c404               add esp, 4
// 0070fd03  85c0                 test eax, eax
// 0070fd05  7424                 je 0x70fd2b
// 0070fd07  c700640dba00         mov dword ptr [eax], 0xba0d64
// 0070fd0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0070fd11  894808               mov dword ptr [eax + 8], ecx
// 0070fd14  8b542410             mov edx, dword ptr [esp + 0x10]
// 0070fd18  89500c               mov dword ptr [eax + 0xc], edx
// 0070fd1b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0070fd1f  894810               mov dword ptr [eax + 0x10], ecx
// 0070fd22  8b542418             mov edx, dword ptr [esp + 0x18]
// 0070fd26  895014               mov dword ptr [eax + 0x14], edx
// 0070fd29  eb02                 jmp 0x70fd2d
// 0070fd2b  33c0                 xor eax, eax
// 0070fd2d  56                   push esi
// 0070fd2e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0070fd32  6a00                 push 0
// 0070fd34  8906                 mov dword ptr [esi], eax
// 0070fd36  e8d9232700           call 0x982114
// 0070fd3b  83c404               add esp, 4
// 0070fd3e  8bc6                 mov eax, esi
// 0070fd40  5e                   pop esi
// 0070fd41  59                   pop ecx
// 0070fd42  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
