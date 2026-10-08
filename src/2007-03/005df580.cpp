// roc 2007-03 005df580  unit: seg_005d0000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005df580
//
// 005df580  51                   push ecx
// 005df581  6a18                 push 0x18
// 005df583  c744240400000000     mov dword ptr [esp + 4], 0
// 005df58b  e878eb0300           call 0x61e108
// 005df590  83c404               add esp, 4
// 005df593  85c0                 test eax, eax
// 005df595  7424                 je 0x5df5bb
// 005df597  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005df59b  8b542410             mov edx, dword ptr [esp + 0x10]
// 005df59f  894808               mov dword ptr [eax + 8], ecx
// 005df5a2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005df5a6  89500c               mov dword ptr [eax + 0xc], edx
// 005df5a9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005df5ad  c700b0e47b00         mov dword ptr [eax], 0x7be4b0
// 005df5b3  894810               mov dword ptr [eax + 0x10], ecx
// 005df5b6  895014               mov dword ptr [eax + 0x14], edx
// 005df5b9  eb02                 jmp 0x5df5bd
// 005df5bb  33c0                 xor eax, eax
// 005df5bd  56                   push esi
// 005df5be  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005df5c2  6a00                 push 0
// 005df5c4  c744240800000000     mov dword ptr [esp + 8], 0
// 005df5cc  8906                 mov dword ptr [esi], eax
// 005df5ce  e81deb0300           call 0x61e0f0
// 005df5d3  83c404               add esp, 4
// 005df5d6  8bc6                 mov eax, esi
// 005df5d8  5e                   pop esi
// 005df5d9  59                   pop ecx
// 005df5da  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
