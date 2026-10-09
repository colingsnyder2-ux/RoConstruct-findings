// roc 2009-12 006f51b0  unit: RBX::VPlayerMouse::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006f51b0
//
// 006f51b0  51                   push ecx
// 006f51b1  6a18                 push 0x18
// 006f51b3  c744240400000000     mov dword ptr [esp + 4], 0
// 006f51bb  e8a0e60f00           call 0x7f3860
// 006f51c0  83c404               add esp, 4
// 006f51c3  85c0                 test eax, eax
// 006f51c5  7424                 je 0x6f51eb
// 006f51c7  c7008cc99d00         mov dword ptr [eax], 0x9dc98c
// 006f51cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f51d1  894808               mov dword ptr [eax + 8], ecx
// 006f51d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f51d8  89500c               mov dword ptr [eax + 0xc], edx
// 006f51db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006f51df  894810               mov dword ptr [eax + 0x10], ecx
// 006f51e2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006f51e6  895014               mov dword ptr [eax + 0x14], edx
// 006f51e9  eb02                 jmp 0x6f51ed
// 006f51eb  33c0                 xor eax, eax
// 006f51ed  56                   push esi
// 006f51ee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006f51f2  6a00                 push 0
// 006f51f4  8906                 mov dword ptr [esi], eax
// 006f51f6  e85fe60f00           call 0x7f385a
// 006f51fb  83c404               add esp, 4
// 006f51fe  8bc6                 mov eax, esi
// 006f5200  5e                   pop esi
// 006f5201  59                   pop ecx
// 006f5202  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
