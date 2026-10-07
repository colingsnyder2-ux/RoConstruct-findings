// roc 2011-06 006f4390  unit: RBX::VDialogRoot::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006f4390
//
// 006f4390  51                   push ecx
// 006f4391  6a18                 push 0x18
// 006f4393  c744240400000000     mov dword ptr [esp + 4], 0
// 006f439b  e8be5c1100           call 0x80a05e
// 006f43a0  83c404               add esp, 4
// 006f43a3  85c0                 test eax, eax
// 006f43a5  742c                 je 0x6f43d3
// 006f43a7  c700bc98aa00         mov dword ptr [eax], 0xaa98bc
// 006f43ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f43b1  894808               mov dword ptr [eax + 8], ecx
// 006f43b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f43b8  89500c               mov dword ptr [eax + 0xc], edx
// 006f43bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006f43bf  894810               mov dword ptr [eax + 0x10], ecx
// 006f43c2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006f43c6  8b542418             mov edx, dword ptr [esp + 0x18]
// 006f43ca  895014               mov dword ptr [eax + 0x14], edx
// 006f43cd  8901                 mov dword ptr [ecx], eax
// 006f43cf  8bc1                 mov eax, ecx
// 006f43d1  59                   pop ecx
// 006f43d2  c3                   ret 
// 006f43d3  8b442408             mov eax, dword ptr [esp + 8]
// 006f43d7  33c9                 xor ecx, ecx
// 006f43d9  8908                 mov dword ptr [eax], ecx
// 006f43db  59                   pop ecx
// 006f43dc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
