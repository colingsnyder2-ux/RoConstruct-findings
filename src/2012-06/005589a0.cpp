// roc 2012-06 005589a0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005589a0
//
// 005589a0  51                   push ecx
// 005589a1  6a18                 push 0x18
// 005589a3  c744240400000000     mov dword ptr [esp + 4], 0
// 005589ab  e86a974200           call 0x98211a
// 005589b0  83c404               add esp, 4
// 005589b3  85c0                 test eax, eax
// 005589b5  7424                 je 0x5589db
// 005589b7  c700e42fb700         mov dword ptr [eax], 0xb72fe4
// 005589bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005589c1  894808               mov dword ptr [eax + 8], ecx
// 005589c4  8b542410             mov edx, dword ptr [esp + 0x10]
// 005589c8  89500c               mov dword ptr [eax + 0xc], edx
// 005589cb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005589cf  894810               mov dword ptr [eax + 0x10], ecx
// 005589d2  8b542418             mov edx, dword ptr [esp + 0x18]
// 005589d6  895014               mov dword ptr [eax + 0x14], edx
// 005589d9  eb02                 jmp 0x5589dd
// 005589db  33c0                 xor eax, eax
// 005589dd  56                   push esi
// 005589de  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005589e2  6a00                 push 0
// 005589e4  8906                 mov dword ptr [esi], eax
// 005589e6  e829974200           call 0x982114
// 005589eb  83c404               add esp, 4
// 005589ee  8bc6                 mov eax, esi
// 005589f0  5e                   pop esi
// 005589f1  59                   pop ecx
// 005589f2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
