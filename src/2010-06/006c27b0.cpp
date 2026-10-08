// roc 2010-06 006c27b0  unit: RBX::VHole::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c27b0
//
// 006c27b0  51                   push ecx
// 006c27b1  6a18                 push 0x18
// 006c27b3  c744240400000000     mov dword ptr [esp + 4], 0
// 006c27bb  e8e0510e00           call 0x7a79a0
// 006c27c0  83c404               add esp, 4
// 006c27c3  85c0                 test eax, eax
// 006c27c5  7424                 je 0x6c27eb
// 006c27c7  c7000c3ca400         mov dword ptr [eax], 0xa43c0c
// 006c27cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c27d1  894808               mov dword ptr [eax + 8], ecx
// 006c27d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006c27d8  89500c               mov dword ptr [eax + 0xc], edx
// 006c27db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006c27df  894810               mov dword ptr [eax + 0x10], ecx
// 006c27e2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006c27e6  895014               mov dword ptr [eax + 0x14], edx
// 006c27e9  eb02                 jmp 0x6c27ed
// 006c27eb  33c0                 xor eax, eax
// 006c27ed  56                   push esi
// 006c27ee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006c27f2  6a00                 push 0
// 006c27f4  8906                 mov dword ptr [esi], eax
// 006c27f6  e89f510e00           call 0x7a799a
// 006c27fb  83c404               add esp, 4
// 006c27fe  8bc6                 mov eax, esi
// 006c2800  5e                   pop esi
// 006c2801  59                   pop ecx
// 006c2802  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
