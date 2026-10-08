// roc 2010-06 00652820  unit: RBX::Camera  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00652820
//
// 00652820  51                   push ecx
// 00652821  6a18                 push 0x18
// 00652823  c744240400000000     mov dword ptr [esp + 4], 0
// 0065282b  e870511500           call 0x7a79a0
// 00652830  83c404               add esp, 4
// 00652833  85c0                 test eax, eax
// 00652835  7424                 je 0x65285b
// 00652837  c7005495a300         mov dword ptr [eax], 0xa39554
// 0065283d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00652841  894808               mov dword ptr [eax + 8], ecx
// 00652844  8b542410             mov edx, dword ptr [esp + 0x10]
// 00652848  89500c               mov dword ptr [eax + 0xc], edx
// 0065284b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065284f  894810               mov dword ptr [eax + 0x10], ecx
// 00652852  8b542418             mov edx, dword ptr [esp + 0x18]
// 00652856  895014               mov dword ptr [eax + 0x14], edx
// 00652859  eb02                 jmp 0x65285d
// 0065285b  33c0                 xor eax, eax
// 0065285d  56                   push esi
// 0065285e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00652862  6a00                 push 0
// 00652864  8906                 mov dword ptr [esi], eax
// 00652866  e82f511500           call 0x7a799a
// 0065286b  83c404               add esp, 4
// 0065286e  8bc6                 mov eax, esi
// 00652870  5e                   pop esi
// 00652871  59                   pop ecx
// 00652872  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
