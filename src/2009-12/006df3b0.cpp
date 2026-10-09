// roc 2009-12 006df3b0  unit: RBX::VMeshId::?$holder  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006df3b0
//
// 006df3b0  51                   push ecx
// 006df3b1  6a18                 push 0x18
// 006df3b3  c744240400000000     mov dword ptr [esp + 4], 0
// 006df3bb  e8a0441100           call 0x7f3860
// 006df3c0  83c404               add esp, 4
// 006df3c3  85c0                 test eax, eax
// 006df3c5  7424                 je 0x6df3eb
// 006df3c7  c7005ca29d00         mov dword ptr [eax], 0x9da25c
// 006df3cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006df3d1  894808               mov dword ptr [eax + 8], ecx
// 006df3d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006df3d8  89500c               mov dword ptr [eax + 0xc], edx
// 006df3db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006df3df  894810               mov dword ptr [eax + 0x10], ecx
// 006df3e2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006df3e6  895014               mov dword ptr [eax + 0x14], edx
// 006df3e9  eb02                 jmp 0x6df3ed
// 006df3eb  33c0                 xor eax, eax
// 006df3ed  56                   push esi
// 006df3ee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006df3f2  6a00                 push 0
// 006df3f4  8906                 mov dword ptr [esi], eax
// 006df3f6  e85f441100           call 0x7f385a
// 006df3fb  83c404               add esp, 4
// 006df3fe  8bc6                 mov eax, esi
// 006df400  5e                   pop esi
// 006df401  59                   pop ecx
// 006df402  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
