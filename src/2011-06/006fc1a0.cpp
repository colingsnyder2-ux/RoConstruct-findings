// roc 2011-06 006fc1a0  unit: RBX::VFlag::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006fc1a0
//
// 006fc1a0  51                   push ecx
// 006fc1a1  6a18                 push 0x18
// 006fc1a3  c744240400000000     mov dword ptr [esp + 4], 0
// 006fc1ab  e8aede1000           call 0x80a05e
// 006fc1b0  83c404               add esp, 4
// 006fc1b3  85c0                 test eax, eax
// 006fc1b5  742c                 je 0x6fc1e3
// 006fc1b7  c700f0b3aa00         mov dword ptr [eax], 0xaab3f0
// 006fc1bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006fc1c1  894808               mov dword ptr [eax + 8], ecx
// 006fc1c4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fc1c8  89500c               mov dword ptr [eax + 0xc], edx
// 006fc1cb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006fc1cf  894810               mov dword ptr [eax + 0x10], ecx
// 006fc1d2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006fc1d6  8b542418             mov edx, dword ptr [esp + 0x18]
// 006fc1da  895014               mov dword ptr [eax + 0x14], edx
// 006fc1dd  8901                 mov dword ptr [ecx], eax
// 006fc1df  8bc1                 mov eax, ecx
// 006fc1e1  59                   pop ecx
// 006fc1e2  c3                   ret 
// 006fc1e3  8b442408             mov eax, dword ptr [esp + 8]
// 006fc1e7  33c9                 xor ecx, ecx
// 006fc1e9  8908                 mov dword ptr [eax], ecx
// 006fc1eb  59                   pop ecx
// 006fc1ec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
