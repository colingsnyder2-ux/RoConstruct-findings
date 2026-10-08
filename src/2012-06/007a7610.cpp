// roc 2012-06 007a7610  unit: RBX::KeyframeSequence  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007a7610
//
// 007a7610  51                   push ecx
// 007a7611  6a18                 push 0x18
// 007a7613  c744240400000000     mov dword ptr [esp + 4], 0
// 007a761b  e8faaa1d00           call 0x98211a
// 007a7620  83c404               add esp, 4
// 007a7623  85c0                 test eax, eax
// 007a7625  7424                 je 0x7a764b
// 007a7627  c7006868bb00         mov dword ptr [eax], 0xbb6868
// 007a762d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007a7631  894808               mov dword ptr [eax + 8], ecx
// 007a7634  8b542410             mov edx, dword ptr [esp + 0x10]
// 007a7638  89500c               mov dword ptr [eax + 0xc], edx
// 007a763b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007a763f  894810               mov dword ptr [eax + 0x10], ecx
// 007a7642  8b542418             mov edx, dword ptr [esp + 0x18]
// 007a7646  895014               mov dword ptr [eax + 0x14], edx
// 007a7649  eb02                 jmp 0x7a764d
// 007a764b  33c0                 xor eax, eax
// 007a764d  56                   push esi
// 007a764e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007a7652  6a00                 push 0
// 007a7654  8906                 mov dword ptr [esi], eax
// 007a7656  e8b9aa1d00           call 0x982114
// 007a765b  83c404               add esp, 4
// 007a765e  8bc6                 mov eax, esi
// 007a7660  5e                   pop esi
// 007a7661  59                   pop ecx
// 007a7662  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
