// roc 2010-06 00644a00  unit: RBX::VMeshId::?$holder  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00644a00
//
// 00644a00  51                   push ecx
// 00644a01  6a18                 push 0x18
// 00644a03  c744240400000000     mov dword ptr [esp + 4], 0
// 00644a0b  e8902f1600           call 0x7a79a0
// 00644a10  83c404               add esp, 4
// 00644a13  85c0                 test eax, eax
// 00644a15  7424                 je 0x644a3b
// 00644a17  c700ac72a300         mov dword ptr [eax], 0xa372ac
// 00644a1d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00644a21  894808               mov dword ptr [eax + 8], ecx
// 00644a24  8b542410             mov edx, dword ptr [esp + 0x10]
// 00644a28  89500c               mov dword ptr [eax + 0xc], edx
// 00644a2b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00644a2f  894810               mov dword ptr [eax + 0x10], ecx
// 00644a32  8b542418             mov edx, dword ptr [esp + 0x18]
// 00644a36  895014               mov dword ptr [eax + 0x14], edx
// 00644a39  eb02                 jmp 0x644a3d
// 00644a3b  33c0                 xor eax, eax
// 00644a3d  56                   push esi
// 00644a3e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00644a42  6a00                 push 0
// 00644a44  8906                 mov dword ptr [esi], eax
// 00644a46  e84f2f1600           call 0x7a799a
// 00644a4b  83c404               add esp, 4
// 00644a4e  8bc6                 mov eax, esi
// 00644a50  5e                   pop esi
// 00644a51  59                   pop ecx
// 00644a52  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
