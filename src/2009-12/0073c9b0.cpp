// roc 2009-12 0073c9b0  unit: RBX::AdornBillboarder  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0073c9b0
//
// 0073c9b0  51                   push ecx
// 0073c9b1  6a18                 push 0x18
// 0073c9b3  c744240400000000     mov dword ptr [esp + 4], 0
// 0073c9bb  e8a06e0b00           call 0x7f3860
// 0073c9c0  83c404               add esp, 4
// 0073c9c3  85c0                 test eax, eax
// 0073c9c5  7424                 je 0x73c9eb
// 0073c9c7  c700a81e9e00         mov dword ptr [eax], 0x9e1ea8
// 0073c9cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0073c9d1  894808               mov dword ptr [eax + 8], ecx
// 0073c9d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0073c9d8  89500c               mov dword ptr [eax + 0xc], edx
// 0073c9db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0073c9df  894810               mov dword ptr [eax + 0x10], ecx
// 0073c9e2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0073c9e6  895014               mov dword ptr [eax + 0x14], edx
// 0073c9e9  eb02                 jmp 0x73c9ed
// 0073c9eb  33c0                 xor eax, eax
// 0073c9ed  56                   push esi
// 0073c9ee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0073c9f2  6a00                 push 0
// 0073c9f4  8906                 mov dword ptr [esi], eax
// 0073c9f6  e85f6e0b00           call 0x7f385a
// 0073c9fb  83c404               add esp, 4
// 0073c9fe  8bc6                 mov eax, esi
// 0073ca00  5e                   pop esi
// 0073ca01  59                   pop ecx
// 0073ca02  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
