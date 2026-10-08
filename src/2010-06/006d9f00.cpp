// roc 2010-06 006d9f00  unit: RBX::TouchTransmitter  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006d9f00
//
// 006d9f00  51                   push ecx
// 006d9f01  6a18                 push 0x18
// 006d9f03  c744240400000000     mov dword ptr [esp + 4], 0
// 006d9f0b  e890da0c00           call 0x7a79a0
// 006d9f10  83c404               add esp, 4
// 006d9f13  85c0                 test eax, eax
// 006d9f15  7424                 je 0x6d9f3b
// 006d9f17  c7008469a400         mov dword ptr [eax], 0xa46984
// 006d9f1d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d9f21  894808               mov dword ptr [eax + 8], ecx
// 006d9f24  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d9f28  89500c               mov dword ptr [eax + 0xc], edx
// 006d9f2b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006d9f2f  894810               mov dword ptr [eax + 0x10], ecx
// 006d9f32  8b542418             mov edx, dword ptr [esp + 0x18]
// 006d9f36  895014               mov dword ptr [eax + 0x14], edx
// 006d9f39  eb02                 jmp 0x6d9f3d
// 006d9f3b  33c0                 xor eax, eax
// 006d9f3d  56                   push esi
// 006d9f3e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006d9f42  6a00                 push 0
// 006d9f44  8906                 mov dword ptr [esi], eax
// 006d9f46  e84fda0c00           call 0x7a799a
// 006d9f4b  83c404               add esp, 4
// 006d9f4e  8bc6                 mov eax, esi
// 006d9f50  5e                   pop esi
// 006d9f51  59                   pop ecx
// 006d9f52  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
