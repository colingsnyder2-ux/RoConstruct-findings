// roc 2012-06 007b67b0  unit: RBX::Smoke  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007b67b0
//
// 007b67b0  51                   push ecx
// 007b67b1  6a18                 push 0x18
// 007b67b3  c744240400000000     mov dword ptr [esp + 4], 0
// 007b67bb  e85ab91c00           call 0x98211a
// 007b67c0  83c404               add esp, 4
// 007b67c3  85c0                 test eax, eax
// 007b67c5  7424                 je 0x7b67eb
// 007b67c7  c700a896bb00         mov dword ptr [eax], 0xbb96a8
// 007b67cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007b67d1  894808               mov dword ptr [eax + 8], ecx
// 007b67d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007b67d8  89500c               mov dword ptr [eax + 0xc], edx
// 007b67db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007b67df  894810               mov dword ptr [eax + 0x10], ecx
// 007b67e2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007b67e6  895014               mov dword ptr [eax + 0x14], edx
// 007b67e9  eb02                 jmp 0x7b67ed
// 007b67eb  33c0                 xor eax, eax
// 007b67ed  56                   push esi
// 007b67ee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007b67f2  6a00                 push 0
// 007b67f4  8906                 mov dword ptr [esi], eax
// 007b67f6  e819b91c00           call 0x982114
// 007b67fb  83c404               add esp, 4
// 007b67fe  8bc6                 mov eax, esi
// 007b6800  5e                   pop esi
// 007b6801  59                   pop ecx
// 007b6802  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
