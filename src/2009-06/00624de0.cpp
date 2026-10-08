// roc 2009-06 00624de0  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00624de0
//
// 00624de0  51                   push ecx
// 00624de1  6a18                 push 0x18
// 00624de3  c744240400000000     mov dword ptr [esp + 4], 0
// 00624deb  e8483c0f00           call 0x718a38
// 00624df0  83c404               add esp, 4
// 00624df3  85c0                 test eax, eax
// 00624df5  7424                 je 0x624e1b
// 00624df7  c700a49c8d00         mov dword ptr [eax], 0x8d9ca4
// 00624dfd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00624e01  894808               mov dword ptr [eax + 8], ecx
// 00624e04  8b542410             mov edx, dword ptr [esp + 0x10]
// 00624e08  89500c               mov dword ptr [eax + 0xc], edx
// 00624e0b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00624e0f  894810               mov dword ptr [eax + 0x10], ecx
// 00624e12  8b542418             mov edx, dword ptr [esp + 0x18]
// 00624e16  895014               mov dword ptr [eax + 0x14], edx
// 00624e19  eb02                 jmp 0x624e1d
// 00624e1b  33c0                 xor eax, eax
// 00624e1d  56                   push esi
// 00624e1e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00624e22  6a00                 push 0
// 00624e24  8906                 mov dword ptr [esi], eax
// 00624e26  e8073c0f00           call 0x718a32
// 00624e2b  83c404               add esp, 4
// 00624e2e  8bc6                 mov eax, esi
// 00624e30  5e                   pop esi
// 00624e31  59                   pop ecx
// 00624e32  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
