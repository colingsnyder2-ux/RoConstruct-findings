// roc 2007-08 00554060  unit: RBX::VTeam::?$FactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00554060
//
// 00554060  51                   push ecx
// 00554061  6a18                 push 0x18
// 00554063  c744240400000000     mov dword ptr [esp + 4], 0
// 0055406b  e886be0d00           call 0x62fef6
// 00554070  83c404               add esp, 4
// 00554073  85c0                 test eax, eax
// 00554075  7424                 je 0x55409b
// 00554077  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0055407b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0055407f  894808               mov dword ptr [eax + 8], ecx
// 00554082  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00554086  89500c               mov dword ptr [eax + 0xc], edx
// 00554089  8b542418             mov edx, dword ptr [esp + 0x18]
// 0055408d  c700ec7f7a00         mov dword ptr [eax], 0x7a7fec
// 00554093  894810               mov dword ptr [eax + 0x10], ecx
// 00554096  895014               mov dword ptr [eax + 0x14], edx
// 00554099  eb02                 jmp 0x55409d
// 0055409b  33c0                 xor eax, eax
// 0055409d  56                   push esi
// 0055409e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005540a2  6a00                 push 0
// 005540a4  c744240800000000     mov dword ptr [esp + 8], 0
// 005540ac  8906                 mov dword ptr [esi], eax
// 005540ae  e8afbb0d00           call 0x62fc62
// 005540b3  83c404               add esp, 4
// 005540b6  8bc6                 mov eax, esi
// 005540b8  5e                   pop esi
// 005540b9  59                   pop ecx
// 005540ba  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
