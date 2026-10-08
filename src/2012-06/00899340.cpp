// roc 2012-06 00899340  unit: RBX::VHole::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00899340
//
// 00899340  51                   push ecx
// 00899341  6a18                 push 0x18
// 00899343  c744240400000000     mov dword ptr [esp + 4], 0
// 0089934b  e8ca8d0e00           call 0x98211a
// 00899350  83c404               add esp, 4
// 00899353  85c0                 test eax, eax
// 00899355  7424                 je 0x89937b
// 00899357  c70098bcbd00         mov dword ptr [eax], 0xbdbc98
// 0089935d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00899361  894808               mov dword ptr [eax + 8], ecx
// 00899364  8b542410             mov edx, dword ptr [esp + 0x10]
// 00899368  89500c               mov dword ptr [eax + 0xc], edx
// 0089936b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0089936f  894810               mov dword ptr [eax + 0x10], ecx
// 00899372  8b542418             mov edx, dword ptr [esp + 0x18]
// 00899376  895014               mov dword ptr [eax + 0x14], edx
// 00899379  eb02                 jmp 0x89937d
// 0089937b  33c0                 xor eax, eax
// 0089937d  56                   push esi
// 0089937e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00899382  6a00                 push 0
// 00899384  8906                 mov dword ptr [esi], eax
// 00899386  e8898d0e00           call 0x982114
// 0089938b  83c404               add esp, 4
// 0089938e  8bc6                 mov eax, esi
// 00899390  5e                   pop esi
// 00899391  59                   pop ecx
// 00899392  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
