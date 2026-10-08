// roc 2012-06 0070fc90  unit: RBX::Tool  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0070fc90
//
// 0070fc90  51                   push ecx
// 0070fc91  6a18                 push 0x18
// 0070fc93  c744240400000000     mov dword ptr [esp + 4], 0
// 0070fc9b  e87a242700           call 0x98211a
// 0070fca0  83c404               add esp, 4
// 0070fca3  85c0                 test eax, eax
// 0070fca5  7424                 je 0x70fccb
// 0070fca7  c700e80dba00         mov dword ptr [eax], 0xba0de8
// 0070fcad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0070fcb1  894808               mov dword ptr [eax + 8], ecx
// 0070fcb4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0070fcb8  89500c               mov dword ptr [eax + 0xc], edx
// 0070fcbb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0070fcbf  894810               mov dword ptr [eax + 0x10], ecx
// 0070fcc2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0070fcc6  895014               mov dword ptr [eax + 0x14], edx
// 0070fcc9  eb02                 jmp 0x70fccd
// 0070fccb  33c0                 xor eax, eax
// 0070fccd  56                   push esi
// 0070fcce  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0070fcd2  6a00                 push 0
// 0070fcd4  8906                 mov dword ptr [esi], eax
// 0070fcd6  e839242700           call 0x982114
// 0070fcdb  83c404               add esp, 4
// 0070fcde  8bc6                 mov eax, esi
// 0070fce0  5e                   pop esi
// 0070fce1  59                   pop ecx
// 0070fce2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
