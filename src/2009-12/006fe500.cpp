// roc 2009-12 006fe500  unit: RBX::VShirtGraphic::?$BoundPropGetSet  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006fe500
//
// 006fe500  51                   push ecx
// 006fe501  6a18                 push 0x18
// 006fe503  c744240400000000     mov dword ptr [esp + 4], 0
// 006fe50b  e850530f00           call 0x7f3860
// 006fe510  83c404               add esp, 4
// 006fe513  85c0                 test eax, eax
// 006fe515  7424                 je 0x6fe53b
// 006fe517  c70088d79d00         mov dword ptr [eax], 0x9dd788
// 006fe51d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006fe521  894808               mov dword ptr [eax + 8], ecx
// 006fe524  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fe528  89500c               mov dword ptr [eax + 0xc], edx
// 006fe52b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006fe52f  894810               mov dword ptr [eax + 0x10], ecx
// 006fe532  8b542418             mov edx, dword ptr [esp + 0x18]
// 006fe536  895014               mov dword ptr [eax + 0x14], edx
// 006fe539  eb02                 jmp 0x6fe53d
// 006fe53b  33c0                 xor eax, eax
// 006fe53d  56                   push esi
// 006fe53e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006fe542  6a00                 push 0
// 006fe544  8906                 mov dword ptr [esi], eax
// 006fe546  e80f530f00           call 0x7f385a
// 006fe54b  83c404               add esp, 4
// 006fe54e  8bc6                 mov eax, esi
// 006fe550  5e                   pop esi
// 006fe551  59                   pop ecx
// 006fe552  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
