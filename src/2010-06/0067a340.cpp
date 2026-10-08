// roc 2010-06 0067a340  unit: RBX::PrismPoly  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0067a340
//
// 0067a340  51                   push ecx
// 0067a341  6a18                 push 0x18
// 0067a343  c744240400000000     mov dword ptr [esp + 4], 0
// 0067a34b  e850d61200           call 0x7a79a0
// 0067a350  83c404               add esp, 4
// 0067a353  85c0                 test eax, eax
// 0067a355  7424                 je 0x67a37b
// 0067a357  c70024d6a300         mov dword ptr [eax], 0xa3d624
// 0067a35d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067a361  894808               mov dword ptr [eax + 8], ecx
// 0067a364  8b542410             mov edx, dword ptr [esp + 0x10]
// 0067a368  89500c               mov dword ptr [eax + 0xc], edx
// 0067a36b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0067a36f  894810               mov dword ptr [eax + 0x10], ecx
// 0067a372  8b542418             mov edx, dword ptr [esp + 0x18]
// 0067a376  895014               mov dword ptr [eax + 0x14], edx
// 0067a379  eb02                 jmp 0x67a37d
// 0067a37b  33c0                 xor eax, eax
// 0067a37d  56                   push esi
// 0067a37e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0067a382  6a00                 push 0
// 0067a384  8906                 mov dword ptr [esi], eax
// 0067a386  e80fd61200           call 0x7a799a
// 0067a38b  83c404               add esp, 4
// 0067a38e  8bc6                 mov eax, esi
// 0067a390  5e                   pop esi
// 0067a391  59                   pop ecx
// 0067a392  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
