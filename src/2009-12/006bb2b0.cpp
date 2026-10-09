// roc 2009-12 006bb2b0  unit: RBX::VDecal::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006bb2b0
//
// 006bb2b0  51                   push ecx
// 006bb2b1  6a18                 push 0x18
// 006bb2b3  c744240400000000     mov dword ptr [esp + 4], 0
// 006bb2bb  e8a0851300           call 0x7f3860
// 006bb2c0  83c404               add esp, 4
// 006bb2c3  85c0                 test eax, eax
// 006bb2c5  7424                 je 0x6bb2eb
// 006bb2c7  c7005c679d00         mov dword ptr [eax], 0x9d675c
// 006bb2cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006bb2d1  894808               mov dword ptr [eax + 8], ecx
// 006bb2d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006bb2d8  89500c               mov dword ptr [eax + 0xc], edx
// 006bb2db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006bb2df  894810               mov dword ptr [eax + 0x10], ecx
// 006bb2e2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006bb2e6  895014               mov dword ptr [eax + 0x14], edx
// 006bb2e9  eb02                 jmp 0x6bb2ed
// 006bb2eb  33c0                 xor eax, eax
// 006bb2ed  56                   push esi
// 006bb2ee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006bb2f2  6a00                 push 0
// 006bb2f4  8906                 mov dword ptr [esi], eax
// 006bb2f6  e85f851300           call 0x7f385a
// 006bb2fb  83c404               add esp, 4
// 006bb2fe  8bc6                 mov eax, esi
// 006bb300  5e                   pop esi
// 006bb301  59                   pop ecx
// 006bb302  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
