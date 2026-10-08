// roc 2009-06 00673380  unit: RBX::VSkin::?$BoundPropGetSet  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00673380
//
// 00673380  51                   push ecx
// 00673381  6a18                 push 0x18
// 00673383  c744240400000000     mov dword ptr [esp + 4], 0
// 0067338b  e8a8560a00           call 0x718a38
// 00673390  83c404               add esp, 4
// 00673393  85c0                 test eax, eax
// 00673395  7424                 je 0x6733bb
// 00673397  c700443f8e00         mov dword ptr [eax], 0x8e3f44
// 0067339d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006733a1  894808               mov dword ptr [eax + 8], ecx
// 006733a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006733a8  89500c               mov dword ptr [eax + 0xc], edx
// 006733ab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006733af  894810               mov dword ptr [eax + 0x10], ecx
// 006733b2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006733b6  895014               mov dword ptr [eax + 0x14], edx
// 006733b9  eb02                 jmp 0x6733bd
// 006733bb  33c0                 xor eax, eax
// 006733bd  56                   push esi
// 006733be  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006733c2  6a00                 push 0
// 006733c4  8906                 mov dword ptr [esi], eax
// 006733c6  e867560a00           call 0x718a32
// 006733cb  83c404               add esp, 4
// 006733ce  8bc6                 mov eax, esi
// 006733d0  5e                   pop esi
// 006733d1  59                   pop ecx
// 006733d2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
