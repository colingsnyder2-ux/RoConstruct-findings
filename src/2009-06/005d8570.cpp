// roc 2009-06 005d8570  unit: RBX::Team  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005d8570
//
// 005d8570  51                   push ecx
// 005d8571  6a18                 push 0x18
// 005d8573  c744240400000000     mov dword ptr [esp + 4], 0
// 005d857b  e8b8041400           call 0x718a38
// 005d8580  83c404               add esp, 4
// 005d8583  85c0                 test eax, eax
// 005d8585  7424                 je 0x5d85ab
// 005d8587  c7005c558d00         mov dword ptr [eax], 0x8d555c
// 005d858d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d8591  894808               mov dword ptr [eax + 8], ecx
// 005d8594  8b542410             mov edx, dword ptr [esp + 0x10]
// 005d8598  89500c               mov dword ptr [eax + 0xc], edx
// 005d859b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005d859f  894810               mov dword ptr [eax + 0x10], ecx
// 005d85a2  8b542418             mov edx, dword ptr [esp + 0x18]
// 005d85a6  895014               mov dword ptr [eax + 0x14], edx
// 005d85a9  eb02                 jmp 0x5d85ad
// 005d85ab  33c0                 xor eax, eax
// 005d85ad  56                   push esi
// 005d85ae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005d85b2  6a00                 push 0
// 005d85b4  8906                 mov dword ptr [esi], eax
// 005d85b6  e877041400           call 0x718a32
// 005d85bb  83c404               add esp, 4
// 005d85be  8bc6                 mov eax, esi
// 005d85c0  5e                   pop esi
// 005d85c1  59                   pop ecx
// 005d85c2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
