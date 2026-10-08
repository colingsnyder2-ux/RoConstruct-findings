// roc 2012-06 007a75b0  unit: RBX::KeyframeSequence  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007a75b0
//
// 007a75b0  51                   push ecx
// 007a75b1  6a18                 push 0x18
// 007a75b3  c744240400000000     mov dword ptr [esp + 4], 0
// 007a75bb  e85aab1d00           call 0x98211a
// 007a75c0  83c404               add esp, 4
// 007a75c3  85c0                 test eax, eax
// 007a75c5  7424                 je 0x7a75eb
// 007a75c7  c7005468bb00         mov dword ptr [eax], 0xbb6854
// 007a75cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007a75d1  894808               mov dword ptr [eax + 8], ecx
// 007a75d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007a75d8  89500c               mov dword ptr [eax + 0xc], edx
// 007a75db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007a75df  894810               mov dword ptr [eax + 0x10], ecx
// 007a75e2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007a75e6  895014               mov dword ptr [eax + 0x14], edx
// 007a75e9  eb02                 jmp 0x7a75ed
// 007a75eb  33c0                 xor eax, eax
// 007a75ed  56                   push esi
// 007a75ee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007a75f2  6a00                 push 0
// 007a75f4  8906                 mov dword ptr [esi], eax
// 007a75f6  e819ab1d00           call 0x982114
// 007a75fb  83c404               add esp, 4
// 007a75fe  8bc6                 mov eax, esi
// 007a7600  5e                   pop esi
// 007a7601  59                   pop ecx
// 007a7602  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
