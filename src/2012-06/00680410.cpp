// roc 2012-06 00680410  unit: RBX::Object  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00680410
//
// 00680410  51                   push ecx
// 00680411  6a18                 push 0x18
// 00680413  c744240400000000     mov dword ptr [esp + 4], 0
// 0068041b  e8fa1c3000           call 0x98211a
// 00680420  83c404               add esp, 4
// 00680423  85c0                 test eax, eax
// 00680425  7424                 je 0x68044b
// 00680427  c700a0eeb800         mov dword ptr [eax], 0xb8eea0
// 0068042d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00680431  894808               mov dword ptr [eax + 8], ecx
// 00680434  8b542410             mov edx, dword ptr [esp + 0x10]
// 00680438  89500c               mov dword ptr [eax + 0xc], edx
// 0068043b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0068043f  894810               mov dword ptr [eax + 0x10], ecx
// 00680442  8b542418             mov edx, dword ptr [esp + 0x18]
// 00680446  895014               mov dword ptr [eax + 0x14], edx
// 00680449  eb02                 jmp 0x68044d
// 0068044b  33c0                 xor eax, eax
// 0068044d  56                   push esi
// 0068044e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00680452  6a00                 push 0
// 00680454  8906                 mov dword ptr [esi], eax
// 00680456  e8b91c3000           call 0x982114
// 0068045b  83c404               add esp, 4
// 0068045e  8bc6                 mov eax, esi
// 00680460  5e                   pop esi
// 00680461  59                   pop ecx
// 00680462  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
