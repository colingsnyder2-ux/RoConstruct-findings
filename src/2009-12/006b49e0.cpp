// roc 2009-12 006b49e0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006b49e0
//
// 006b49e0  51                   push ecx
// 006b49e1  6a18                 push 0x18
// 006b49e3  c744240400000000     mov dword ptr [esp + 4], 0
// 006b49eb  e870ee1300           call 0x7f3860
// 006b49f0  83c404               add esp, 4
// 006b49f3  85c0                 test eax, eax
// 006b49f5  7424                 je 0x6b4a1b
// 006b49f7  c700185d9d00         mov dword ptr [eax], 0x9d5d18
// 006b49fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006b4a01  894808               mov dword ptr [eax + 8], ecx
// 006b4a04  8b542410             mov edx, dword ptr [esp + 0x10]
// 006b4a08  89500c               mov dword ptr [eax + 0xc], edx
// 006b4a0b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006b4a0f  894810               mov dword ptr [eax + 0x10], ecx
// 006b4a12  8b542418             mov edx, dword ptr [esp + 0x18]
// 006b4a16  895014               mov dword ptr [eax + 0x14], edx
// 006b4a19  eb02                 jmp 0x6b4a1d
// 006b4a1b  33c0                 xor eax, eax
// 006b4a1d  56                   push esi
// 006b4a1e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006b4a22  6a00                 push 0
// 006b4a24  8906                 mov dword ptr [esi], eax
// 006b4a26  e82fee1300           call 0x7f385a
// 006b4a2b  83c404               add esp, 4
// 006b4a2e  8bc6                 mov eax, esi
// 006b4a30  5e                   pop esi
// 006b4a31  59                   pop ecx
// 006b4a32  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
