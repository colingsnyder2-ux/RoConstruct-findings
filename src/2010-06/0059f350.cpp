// roc 2010-06 0059f350  unit: RBX::VTeam::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0059f350
//
// 0059f350  51                   push ecx
// 0059f351  6a18                 push 0x18
// 0059f353  c744240400000000     mov dword ptr [esp + 4], 0
// 0059f35b  e840862000           call 0x7a79a0
// 0059f360  83c404               add esp, 4
// 0059f363  85c0                 test eax, eax
// 0059f365  7424                 je 0x59f38b
// 0059f367  c700bca3a200         mov dword ptr [eax], 0xa2a3bc
// 0059f36d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059f371  894808               mov dword ptr [eax + 8], ecx
// 0059f374  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059f378  89500c               mov dword ptr [eax + 0xc], edx
// 0059f37b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0059f37f  894810               mov dword ptr [eax + 0x10], ecx
// 0059f382  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059f386  895014               mov dword ptr [eax + 0x14], edx
// 0059f389  eb02                 jmp 0x59f38d
// 0059f38b  33c0                 xor eax, eax
// 0059f38d  56                   push esi
// 0059f38e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0059f392  6a00                 push 0
// 0059f394  8906                 mov dword ptr [esi], eax
// 0059f396  e8ff852000           call 0x7a799a
// 0059f39b  83c404               add esp, 4
// 0059f39e  8bc6                 mov eax, esi
// 0059f3a0  5e                   pop esi
// 0059f3a1  59                   pop ecx
// 0059f3a2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
