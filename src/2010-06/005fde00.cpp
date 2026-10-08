// roc 2010-06 005fde00  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005fde00
//
// 005fde00  51                   push ecx
// 005fde01  6a18                 push 0x18
// 005fde03  c744240400000000     mov dword ptr [esp + 4], 0
// 005fde0b  e8909b1a00           call 0x7a79a0
// 005fde10  83c404               add esp, 4
// 005fde13  85c0                 test eax, eax
// 005fde15  7424                 je 0x5fde3b
// 005fde17  c7001405a300         mov dword ptr [eax], 0xa30514
// 005fde1d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005fde21  894808               mov dword ptr [eax + 8], ecx
// 005fde24  8b542410             mov edx, dword ptr [esp + 0x10]
// 005fde28  89500c               mov dword ptr [eax + 0xc], edx
// 005fde2b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005fde2f  894810               mov dword ptr [eax + 0x10], ecx
// 005fde32  8b542418             mov edx, dword ptr [esp + 0x18]
// 005fde36  895014               mov dword ptr [eax + 0x14], edx
// 005fde39  eb02                 jmp 0x5fde3d
// 005fde3b  33c0                 xor eax, eax
// 005fde3d  56                   push esi
// 005fde3e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005fde42  6a00                 push 0
// 005fde44  8906                 mov dword ptr [esi], eax
// 005fde46  e84f9b1a00           call 0x7a799a
// 005fde4b  83c404               add esp, 4
// 005fde4e  8bc6                 mov eax, esi
// 005fde50  5e                   pop esi
// 005fde51  59                   pop ecx
// 005fde52  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
