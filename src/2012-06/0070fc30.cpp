// roc 2012-06 0070fc30  unit: RBX::Tool  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0070fc30
//
// 0070fc30  51                   push ecx
// 0070fc31  6a18                 push 0x18
// 0070fc33  c744240400000000     mov dword ptr [esp + 4], 0
// 0070fc3b  e8da242700           call 0x98211a
// 0070fc40  83c404               add esp, 4
// 0070fc43  85c0                 test eax, eax
// 0070fc45  7424                 je 0x70fc6b
// 0070fc47  c700d40dba00         mov dword ptr [eax], 0xba0dd4
// 0070fc4d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0070fc51  894808               mov dword ptr [eax + 8], ecx
// 0070fc54  8b542410             mov edx, dword ptr [esp + 0x10]
// 0070fc58  89500c               mov dword ptr [eax + 0xc], edx
// 0070fc5b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0070fc5f  894810               mov dword ptr [eax + 0x10], ecx
// 0070fc62  8b542418             mov edx, dword ptr [esp + 0x18]
// 0070fc66  895014               mov dword ptr [eax + 0x14], edx
// 0070fc69  eb02                 jmp 0x70fc6d
// 0070fc6b  33c0                 xor eax, eax
// 0070fc6d  56                   push esi
// 0070fc6e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0070fc72  6a00                 push 0
// 0070fc74  8906                 mov dword ptr [esi], eax
// 0070fc76  e899242700           call 0x982114
// 0070fc7b  83c404               add esp, 4
// 0070fc7e  8bc6                 mov eax, esi
// 0070fc80  5e                   pop esi
// 0070fc81  59                   pop ecx
// 0070fc82  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
