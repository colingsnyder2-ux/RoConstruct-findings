// roc 2009-06 0064d900  unit: RBX::IStepped  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064d900
//
// 0064d900  51                   push ecx
// 0064d901  6a18                 push 0x18
// 0064d903  c744240400000000     mov dword ptr [esp + 4], 0
// 0064d90b  e828b10c00           call 0x718a38
// 0064d910  83c404               add esp, 4
// 0064d913  85c0                 test eax, eax
// 0064d915  7424                 je 0x64d93b
// 0064d917  c700ecf68d00         mov dword ptr [eax], 0x8df6ec
// 0064d91d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0064d921  894808               mov dword ptr [eax + 8], ecx
// 0064d924  8b542410             mov edx, dword ptr [esp + 0x10]
// 0064d928  89500c               mov dword ptr [eax + 0xc], edx
// 0064d92b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0064d92f  894810               mov dword ptr [eax + 0x10], ecx
// 0064d932  8b542418             mov edx, dword ptr [esp + 0x18]
// 0064d936  895014               mov dword ptr [eax + 0x14], edx
// 0064d939  eb02                 jmp 0x64d93d
// 0064d93b  33c0                 xor eax, eax
// 0064d93d  56                   push esi
// 0064d93e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0064d942  6a00                 push 0
// 0064d944  8906                 mov dword ptr [esi], eax
// 0064d946  e8e7b00c00           call 0x718a32
// 0064d94b  83c404               add esp, 4
// 0064d94e  8bc6                 mov eax, esi
// 0064d950  5e                   pop esi
// 0064d951  59                   pop ecx
// 0064d952  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
