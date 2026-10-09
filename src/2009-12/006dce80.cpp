// roc 2009-12 006dce80  unit: RBX::Camera  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006dce80
//
// 006dce80  51                   push ecx
// 006dce81  6a18                 push 0x18
// 006dce83  c744240400000000     mov dword ptr [esp + 4], 0
// 006dce8b  e8d0691100           call 0x7f3860
// 006dce90  83c404               add esp, 4
// 006dce93  85c0                 test eax, eax
// 006dce95  7424                 je 0x6dcebb
// 006dce97  c7008c9c9d00         mov dword ptr [eax], 0x9d9c8c
// 006dce9d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006dcea1  894808               mov dword ptr [eax + 8], ecx
// 006dcea4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006dcea8  89500c               mov dword ptr [eax + 0xc], edx
// 006dceab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006dceaf  894810               mov dword ptr [eax + 0x10], ecx
// 006dceb2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006dceb6  895014               mov dword ptr [eax + 0x14], edx
// 006dceb9  eb02                 jmp 0x6dcebd
// 006dcebb  33c0                 xor eax, eax
// 006dcebd  56                   push esi
// 006dcebe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006dcec2  6a00                 push 0
// 006dcec4  8906                 mov dword ptr [esi], eax
// 006dcec6  e88f691100           call 0x7f385a
// 006dcecb  83c404               add esp, 4
// 006dcece  8bc6                 mov eax, esi
// 006dced0  5e                   pop esi
// 006dced1  59                   pop ecx
// 006dced2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
