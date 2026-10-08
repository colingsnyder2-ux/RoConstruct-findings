// roc 2009-06 006912d0  unit: RBX::Network::VPlayer::?$BoundPropGetSet  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006912d0
//
// 006912d0  51                   push ecx
// 006912d1  6a18                 push 0x18
// 006912d3  c744240400000000     mov dword ptr [esp + 4], 0
// 006912db  e858770800           call 0x718a38
// 006912e0  83c404               add esp, 4
// 006912e3  85c0                 test eax, eax
// 006912e5  7424                 je 0x69130b
// 006912e7  c7008c708e00         mov dword ptr [eax], 0x8e708c
// 006912ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006912f1  894808               mov dword ptr [eax + 8], ecx
// 006912f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006912f8  89500c               mov dword ptr [eax + 0xc], edx
// 006912fb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006912ff  894810               mov dword ptr [eax + 0x10], ecx
// 00691302  8b542418             mov edx, dword ptr [esp + 0x18]
// 00691306  895014               mov dword ptr [eax + 0x14], edx
// 00691309  eb02                 jmp 0x69130d
// 0069130b  33c0                 xor eax, eax
// 0069130d  56                   push esi
// 0069130e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00691312  6a00                 push 0
// 00691314  8906                 mov dword ptr [esi], eax
// 00691316  e817770800           call 0x718a32
// 0069131b  83c404               add esp, 4
// 0069131e  8bc6                 mov eax, esi
// 00691320  5e                   pop esi
// 00691321  59                   pop ecx
// 00691322  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
