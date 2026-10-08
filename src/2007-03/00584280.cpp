// roc 2007-03 00584280  unit: seg_00580000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00584280
//
// 00584280  51                   push ecx
// 00584281  6a18                 push 0x18
// 00584283  c744240400000000     mov dword ptr [esp + 4], 0
// 0058428b  e8789e0900           call 0x61e108
// 00584290  83c404               add esp, 4
// 00584293  85c0                 test eax, eax
// 00584295  7424                 je 0x5842bb
// 00584297  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058429b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058429f  894808               mov dword ptr [eax + 8], ecx
// 005842a2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005842a6  89500c               mov dword ptr [eax + 0xc], edx
// 005842a9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005842ad  c700b0fa7a00         mov dword ptr [eax], 0x7afab0
// 005842b3  894810               mov dword ptr [eax + 0x10], ecx
// 005842b6  895014               mov dword ptr [eax + 0x14], edx
// 005842b9  eb02                 jmp 0x5842bd
// 005842bb  33c0                 xor eax, eax
// 005842bd  56                   push esi
// 005842be  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005842c2  6a00                 push 0
// 005842c4  c744240800000000     mov dword ptr [esp + 8], 0
// 005842cc  8906                 mov dword ptr [esi], eax
// 005842ce  e81d9e0900           call 0x61e0f0
// 005842d3  83c404               add esp, 4
// 005842d6  8bc6                 mov eax, esi
// 005842d8  5e                   pop esi
// 005842d9  59                   pop ecx
// 005842da  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
