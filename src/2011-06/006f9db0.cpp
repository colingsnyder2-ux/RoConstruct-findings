// roc 2011-06 006f9db0  unit: RBX::VHole::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006f9db0
//
// 006f9db0  51                   push ecx
// 006f9db1  6a18                 push 0x18
// 006f9db3  c744240400000000     mov dword ptr [esp + 4], 0
// 006f9dbb  e89e021100           call 0x80a05e
// 006f9dc0  83c404               add esp, 4
// 006f9dc3  85c0                 test eax, eax
// 006f9dc5  742c                 je 0x6f9df3
// 006f9dc7  c700a4a9aa00         mov dword ptr [eax], 0xaaa9a4
// 006f9dcd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f9dd1  894808               mov dword ptr [eax + 8], ecx
// 006f9dd4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f9dd8  89500c               mov dword ptr [eax + 0xc], edx
// 006f9ddb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006f9ddf  894810               mov dword ptr [eax + 0x10], ecx
// 006f9de2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006f9de6  8b542418             mov edx, dword ptr [esp + 0x18]
// 006f9dea  895014               mov dword ptr [eax + 0x14], edx
// 006f9ded  8901                 mov dword ptr [ecx], eax
// 006f9def  8bc1                 mov eax, ecx
// 006f9df1  59                   pop ecx
// 006f9df2  c3                   ret 
// 006f9df3  8b442408             mov eax, dword ptr [esp + 8]
// 006f9df7  33c9                 xor ecx, ecx
// 006f9df9  8908                 mov dword ptr [eax], ecx
// 006f9dfb  59                   pop ecx
// 006f9dfc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
