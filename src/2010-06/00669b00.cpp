// roc 2010-06 00669b00  unit: RBX::VShirtGraphic::?$BoundPropGetSet  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00669b00
//
// 00669b00  51                   push ecx
// 00669b01  6a18                 push 0x18
// 00669b03  c744240400000000     mov dword ptr [esp + 4], 0
// 00669b0b  e890de1300           call 0x7a79a0
// 00669b10  83c404               add esp, 4
// 00669b13  85c0                 test eax, eax
// 00669b15  7424                 je 0x669b3b
// 00669b17  c7001cbda300         mov dword ptr [eax], 0xa3bd1c
// 00669b1d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00669b21  894808               mov dword ptr [eax + 8], ecx
// 00669b24  8b542410             mov edx, dword ptr [esp + 0x10]
// 00669b28  89500c               mov dword ptr [eax + 0xc], edx
// 00669b2b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00669b2f  894810               mov dword ptr [eax + 0x10], ecx
// 00669b32  8b542418             mov edx, dword ptr [esp + 0x18]
// 00669b36  895014               mov dword ptr [eax + 0x14], edx
// 00669b39  eb02                 jmp 0x669b3d
// 00669b3b  33c0                 xor eax, eax
// 00669b3d  56                   push esi
// 00669b3e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00669b42  6a00                 push 0
// 00669b44  8906                 mov dword ptr [esi], eax
// 00669b46  e84fde1300           call 0x7a799a
// 00669b4b  83c404               add esp, 4
// 00669b4e  8bc6                 mov eax, esi
// 00669b50  5e                   pop esi
// 00669b51  59                   pop ecx
// 00669b52  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
