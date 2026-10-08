// roc 2010-06 00652880  unit: RBX::Camera  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00652880
//
// 00652880  51                   push ecx
// 00652881  6a18                 push 0x18
// 00652883  c744240400000000     mov dword ptr [esp + 4], 0
// 0065288b  e810511500           call 0x7a79a0
// 00652890  83c404               add esp, 4
// 00652893  85c0                 test eax, eax
// 00652895  7424                 je 0x6528bb
// 00652897  c7006c95a300         mov dword ptr [eax], 0xa3956c
// 0065289d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006528a1  894808               mov dword ptr [eax + 8], ecx
// 006528a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006528a8  89500c               mov dword ptr [eax + 0xc], edx
// 006528ab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006528af  894810               mov dword ptr [eax + 0x10], ecx
// 006528b2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006528b6  895014               mov dword ptr [eax + 0x14], edx
// 006528b9  eb02                 jmp 0x6528bd
// 006528bb  33c0                 xor eax, eax
// 006528bd  56                   push esi
// 006528be  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006528c2  6a00                 push 0
// 006528c4  8906                 mov dword ptr [esi], eax
// 006528c6  e8cf501500           call 0x7a799a
// 006528cb  83c404               add esp, 4
// 006528ce  8bc6                 mov eax, esi
// 006528d0  5e                   pop esi
// 006528d1  59                   pop ecx
// 006528d2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
