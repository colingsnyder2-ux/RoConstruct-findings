// roc 2012-06 008a0130  unit: RBX::P8Mouse::?$GetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008a0130
//
// 008a0130  51                   push ecx
// 008a0131  6a18                 push 0x18
// 008a0133  c744240400000000     mov dword ptr [esp + 4], 0
// 008a013b  e8da1f0e00           call 0x98211a
// 008a0140  83c404               add esp, 4
// 008a0143  85c0                 test eax, eax
// 008a0145  7424                 je 0x8a016b
// 008a0147  c7007cdebd00         mov dword ptr [eax], 0xbdde7c
// 008a014d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a0151  894808               mov dword ptr [eax + 8], ecx
// 008a0154  8b542410             mov edx, dword ptr [esp + 0x10]
// 008a0158  89500c               mov dword ptr [eax + 0xc], edx
// 008a015b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008a015f  894810               mov dword ptr [eax + 0x10], ecx
// 008a0162  8b542418             mov edx, dword ptr [esp + 0x18]
// 008a0166  895014               mov dword ptr [eax + 0x14], edx
// 008a0169  eb02                 jmp 0x8a016d
// 008a016b  33c0                 xor eax, eax
// 008a016d  56                   push esi
// 008a016e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008a0172  6a00                 push 0
// 008a0174  8906                 mov dword ptr [esi], eax
// 008a0176  e8991f0e00           call 0x982114
// 008a017b  83c404               add esp, 4
// 008a017e  8bc6                 mov eax, esi
// 008a0180  5e                   pop esi
// 008a0181  59                   pop ecx
// 008a0182  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
