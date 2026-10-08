// roc 2012-06 00693a00  unit: RBX::Soundscape::P8SoundChannel::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00693a00
//
// 00693a00  51                   push ecx
// 00693a01  6a18                 push 0x18
// 00693a03  c744240400000000     mov dword ptr [esp + 4], 0
// 00693a0b  e80ae72e00           call 0x98211a
// 00693a10  83c404               add esp, 4
// 00693a13  85c0                 test eax, eax
// 00693a15  7424                 je 0x693a3b
// 00693a17  c700942bb900         mov dword ptr [eax], 0xb92b94
// 00693a1d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00693a21  894808               mov dword ptr [eax + 8], ecx
// 00693a24  8b542410             mov edx, dword ptr [esp + 0x10]
// 00693a28  89500c               mov dword ptr [eax + 0xc], edx
// 00693a2b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00693a2f  894810               mov dword ptr [eax + 0x10], ecx
// 00693a32  8b542418             mov edx, dword ptr [esp + 0x18]
// 00693a36  895014               mov dword ptr [eax + 0x14], edx
// 00693a39  eb02                 jmp 0x693a3d
// 00693a3b  33c0                 xor eax, eax
// 00693a3d  56                   push esi
// 00693a3e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00693a42  6a00                 push 0
// 00693a44  8906                 mov dword ptr [esi], eax
// 00693a46  e8c9e62e00           call 0x982114
// 00693a4b  83c404               add esp, 4
// 00693a4e  8bc6                 mov eax, esi
// 00693a50  5e                   pop esi
// 00693a51  59                   pop ecx
// 00693a52  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
