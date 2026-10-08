// roc 2012-06 00678f30  unit: VAuthoringSettings::?$BoundPropGetSet  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00678f30
//
// 00678f30  51                   push ecx
// 00678f31  6a18                 push 0x18
// 00678f33  c744240400000000     mov dword ptr [esp + 4], 0
// 00678f3b  e8da913000           call 0x98211a
// 00678f40  83c404               add esp, 4
// 00678f43  85c0                 test eax, eax
// 00678f45  7424                 je 0x678f6b
// 00678f47  c70010ddb800         mov dword ptr [eax], 0xb8dd10
// 00678f4d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00678f51  894808               mov dword ptr [eax + 8], ecx
// 00678f54  8b542410             mov edx, dword ptr [esp + 0x10]
// 00678f58  89500c               mov dword ptr [eax + 0xc], edx
// 00678f5b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00678f5f  894810               mov dword ptr [eax + 0x10], ecx
// 00678f62  8b542418             mov edx, dword ptr [esp + 0x18]
// 00678f66  895014               mov dword ptr [eax + 0x14], edx
// 00678f69  eb02                 jmp 0x678f6d
// 00678f6b  33c0                 xor eax, eax
// 00678f6d  56                   push esi
// 00678f6e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00678f72  6a00                 push 0
// 00678f74  8906                 mov dword ptr [esi], eax
// 00678f76  e899913000           call 0x982114
// 00678f7b  83c404               add esp, 4
// 00678f7e  8bc6                 mov eax, esi
// 00678f80  5e                   pop esi
// 00678f81  59                   pop ecx
// 00678f82  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
