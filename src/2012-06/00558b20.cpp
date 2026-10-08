// roc 2012-06 00558b20  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00558b20
//
// 00558b20  51                   push ecx
// 00558b21  6a18                 push 0x18
// 00558b23  c744240400000000     mov dword ptr [esp + 4], 0
// 00558b2b  e8ea954200           call 0x98211a
// 00558b30  83c404               add esp, 4
// 00558b33  85c0                 test eax, eax
// 00558b35  7424                 je 0x558b5b
// 00558b37  c7009830b700         mov dword ptr [eax], 0xb73098
// 00558b3d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00558b41  894808               mov dword ptr [eax + 8], ecx
// 00558b44  8b542410             mov edx, dword ptr [esp + 0x10]
// 00558b48  89500c               mov dword ptr [eax + 0xc], edx
// 00558b4b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00558b4f  894810               mov dword ptr [eax + 0x10], ecx
// 00558b52  8b542418             mov edx, dword ptr [esp + 0x18]
// 00558b56  895014               mov dword ptr [eax + 0x14], edx
// 00558b59  eb02                 jmp 0x558b5d
// 00558b5b  33c0                 xor eax, eax
// 00558b5d  56                   push esi
// 00558b5e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00558b62  6a00                 push 0
// 00558b64  8906                 mov dword ptr [esi], eax
// 00558b66  e8a9954200           call 0x982114
// 00558b6b  83c404               add esp, 4
// 00558b6e  8bc6                 mov eax, esi
// 00558b70  5e                   pop esi
// 00558b71  59                   pop ecx
// 00558b72  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
