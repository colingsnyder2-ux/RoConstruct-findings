// roc 2010-06 004d67f0  unit: VAuthoringSettings::?$BoundPropGetSet  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004d67f0
//
// 004d67f0  51                   push ecx
// 004d67f1  6a18                 push 0x18
// 004d67f3  c744240400000000     mov dword ptr [esp + 4], 0
// 004d67fb  e8a0112d00           call 0x7a79a0
// 004d6800  83c404               add esp, 4
// 004d6803  85c0                 test eax, eax
// 004d6805  7424                 je 0x4d682b
// 004d6807  c7001c9ea100         mov dword ptr [eax], 0xa19e1c
// 004d680d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004d6811  894808               mov dword ptr [eax + 8], ecx
// 004d6814  8b542410             mov edx, dword ptr [esp + 0x10]
// 004d6818  89500c               mov dword ptr [eax + 0xc], edx
// 004d681b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004d681f  894810               mov dword ptr [eax + 0x10], ecx
// 004d6822  8b542418             mov edx, dword ptr [esp + 0x18]
// 004d6826  895014               mov dword ptr [eax + 0x14], edx
// 004d6829  eb02                 jmp 0x4d682d
// 004d682b  33c0                 xor eax, eax
// 004d682d  56                   push esi
// 004d682e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004d6832  6a00                 push 0
// 004d6834  8906                 mov dword ptr [esi], eax
// 004d6836  e85f112d00           call 0x7a799a
// 004d683b  83c404               add esp, 4
// 004d683e  8bc6                 mov eax, esi
// 004d6840  5e                   pop esi
// 004d6841  59                   pop ecx
// 004d6842  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
