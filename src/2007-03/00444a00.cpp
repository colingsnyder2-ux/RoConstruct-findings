// roc 2007-03 00444a00  unit: seg_00440000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00444a00
//
// 00444a00  51                   push ecx
// 00444a01  6a18                 push 0x18
// 00444a03  c744240400000000     mov dword ptr [esp + 4], 0
// 00444a0b  e8f8961d00           call 0x61e108
// 00444a10  83c404               add esp, 4
// 00444a13  85c0                 test eax, eax
// 00444a15  7424                 je 0x444a3b
// 00444a17  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00444a1b  8b542410             mov edx, dword ptr [esp + 0x10]
// 00444a1f  894808               mov dword ptr [eax + 8], ecx
// 00444a22  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00444a26  89500c               mov dword ptr [eax + 0xc], edx
// 00444a29  8b542418             mov edx, dword ptr [esp + 0x18]
// 00444a2d  c70028eb7800         mov dword ptr [eax], 0x78eb28
// 00444a33  894810               mov dword ptr [eax + 0x10], ecx
// 00444a36  895014               mov dword ptr [eax + 0x14], edx
// 00444a39  eb02                 jmp 0x444a3d
// 00444a3b  33c0                 xor eax, eax
// 00444a3d  56                   push esi
// 00444a3e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00444a42  6a00                 push 0
// 00444a44  c744240800000000     mov dword ptr [esp + 8], 0
// 00444a4c  8906                 mov dword ptr [esi], eax
// 00444a4e  e89d961d00           call 0x61e0f0
// 00444a53  83c404               add esp, 4
// 00444a56  8bc6                 mov eax, esi
// 00444a58  5e                   pop esi
// 00444a59  59                   pop ecx
// 00444a5a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
