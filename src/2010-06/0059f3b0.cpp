// roc 2010-06 0059f3b0  unit: RBX::VTeam::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0059f3b0
//
// 0059f3b0  51                   push ecx
// 0059f3b1  6a18                 push 0x18
// 0059f3b3  c744240400000000     mov dword ptr [esp + 4], 0
// 0059f3bb  e8e0852000           call 0x7a79a0
// 0059f3c0  83c404               add esp, 4
// 0059f3c3  85c0                 test eax, eax
// 0059f3c5  7424                 je 0x59f3eb
// 0059f3c7  c70074a3a200         mov dword ptr [eax], 0xa2a374
// 0059f3cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059f3d1  894808               mov dword ptr [eax + 8], ecx
// 0059f3d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059f3d8  89500c               mov dword ptr [eax + 0xc], edx
// 0059f3db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0059f3df  894810               mov dword ptr [eax + 0x10], ecx
// 0059f3e2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059f3e6  895014               mov dword ptr [eax + 0x14], edx
// 0059f3e9  eb02                 jmp 0x59f3ed
// 0059f3eb  33c0                 xor eax, eax
// 0059f3ed  56                   push esi
// 0059f3ee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0059f3f2  6a00                 push 0
// 0059f3f4  8906                 mov dword ptr [esi], eax
// 0059f3f6  e89f852000           call 0x7a799a
// 0059f3fb  83c404               add esp, 4
// 0059f3fe  8bc6                 mov eax, esi
// 0059f400  5e                   pop esi
// 0059f401  59                   pop ecx
// 0059f402  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
