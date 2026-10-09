// roc 2009-12 006e29e0  unit: RBX::Smoke  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006e29e0
//
// 006e29e0  51                   push ecx
// 006e29e1  6a18                 push 0x18
// 006e29e3  c744240400000000     mov dword ptr [esp + 4], 0
// 006e29eb  e8700e1100           call 0x7f3860
// 006e29f0  83c404               add esp, 4
// 006e29f3  85c0                 test eax, eax
// 006e29f5  7424                 je 0x6e2a1b
// 006e29f7  c70054a99d00         mov dword ptr [eax], 0x9da954
// 006e29fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e2a01  894808               mov dword ptr [eax + 8], ecx
// 006e2a04  8b542410             mov edx, dword ptr [esp + 0x10]
// 006e2a08  89500c               mov dword ptr [eax + 0xc], edx
// 006e2a0b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006e2a0f  894810               mov dword ptr [eax + 0x10], ecx
// 006e2a12  8b542418             mov edx, dword ptr [esp + 0x18]
// 006e2a16  895014               mov dword ptr [eax + 0x14], edx
// 006e2a19  eb02                 jmp 0x6e2a1d
// 006e2a1b  33c0                 xor eax, eax
// 006e2a1d  56                   push esi
// 006e2a1e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e2a22  6a00                 push 0
// 006e2a24  8906                 mov dword ptr [esi], eax
// 006e2a26  e82f0e1100           call 0x7f385a
// 006e2a2b  83c404               add esp, 4
// 006e2a2e  8bc6                 mov eax, esi
// 006e2a30  5e                   pop esi
// 006e2a31  59                   pop ecx
// 006e2a32  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
