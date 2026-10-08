// roc 2012-06 007a6680  unit: RBX::VKeyframe::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007a6680
//
// 007a6680  51                   push ecx
// 007a6681  6a18                 push 0x18
// 007a6683  c744240400000000     mov dword ptr [esp + 4], 0
// 007a668b  e88aba1d00           call 0x98211a
// 007a6690  83c404               add esp, 4
// 007a6693  85c0                 test eax, eax
// 007a6695  7424                 je 0x7a66bb
// 007a6697  c7004465bb00         mov dword ptr [eax], 0xbb6544
// 007a669d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007a66a1  894808               mov dword ptr [eax + 8], ecx
// 007a66a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007a66a8  89500c               mov dword ptr [eax + 0xc], edx
// 007a66ab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007a66af  894810               mov dword ptr [eax + 0x10], ecx
// 007a66b2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007a66b6  895014               mov dword ptr [eax + 0x14], edx
// 007a66b9  eb02                 jmp 0x7a66bd
// 007a66bb  33c0                 xor eax, eax
// 007a66bd  56                   push esi
// 007a66be  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007a66c2  6a00                 push 0
// 007a66c4  8906                 mov dword ptr [esi], eax
// 007a66c6  e849ba1d00           call 0x982114
// 007a66cb  83c404               add esp, 4
// 007a66ce  8bc6                 mov eax, esi
// 007a66d0  5e                   pop esi
// 007a66d1  59                   pop ecx
// 007a66d2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
