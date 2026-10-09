// roc 2009-12 00528bb0  unit: VAuthoringSettings::?$BoundPropGetSet  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00528bb0
//
// 00528bb0  51                   push ecx
// 00528bb1  6a18                 push 0x18
// 00528bb3  c744240400000000     mov dword ptr [esp + 4], 0
// 00528bbb  e8a0ac2c00           call 0x7f3860
// 00528bc0  83c404               add esp, 4
// 00528bc3  85c0                 test eax, eax
// 00528bc5  7424                 je 0x528beb
// 00528bc7  c700b4bf9b00         mov dword ptr [eax], 0x9bbfb4
// 00528bcd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00528bd1  894808               mov dword ptr [eax + 8], ecx
// 00528bd4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00528bd8  89500c               mov dword ptr [eax + 0xc], edx
// 00528bdb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00528bdf  894810               mov dword ptr [eax + 0x10], ecx
// 00528be2  8b542418             mov edx, dword ptr [esp + 0x18]
// 00528be6  895014               mov dword ptr [eax + 0x14], edx
// 00528be9  eb02                 jmp 0x528bed
// 00528beb  33c0                 xor eax, eax
// 00528bed  56                   push esi
// 00528bee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00528bf2  6a00                 push 0
// 00528bf4  8906                 mov dword ptr [esi], eax
// 00528bf6  e85fac2c00           call 0x7f385a
// 00528bfb  83c404               add esp, 4
// 00528bfe  8bc6                 mov eax, esi
// 00528c00  5e                   pop esi
// 00528c01  59                   pop ecx
// 00528c02  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
