// roc 2011-06 006c9fb0  unit: RBX::TextBox  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006c9fb0
//
// 006c9fb0  51                   push ecx
// 006c9fb1  6a18                 push 0x18
// 006c9fb3  c744240400000000     mov dword ptr [esp + 4], 0
// 006c9fbb  e89e001400           call 0x80a05e
// 006c9fc0  83c404               add esp, 4
// 006c9fc3  85c0                 test eax, eax
// 006c9fc5  742c                 je 0x6c9ff3
// 006c9fc7  c700cc50aa00         mov dword ptr [eax], 0xaa50cc
// 006c9fcd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c9fd1  894808               mov dword ptr [eax + 8], ecx
// 006c9fd4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006c9fd8  89500c               mov dword ptr [eax + 0xc], edx
// 006c9fdb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006c9fdf  894810               mov dword ptr [eax + 0x10], ecx
// 006c9fe2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006c9fe6  8b542418             mov edx, dword ptr [esp + 0x18]
// 006c9fea  895014               mov dword ptr [eax + 0x14], edx
// 006c9fed  8901                 mov dword ptr [ecx], eax
// 006c9fef  8bc1                 mov eax, ecx
// 006c9ff1  59                   pop ecx
// 006c9ff2  c3                   ret 
// 006c9ff3  8b442408             mov eax, dword ptr [esp + 8]
// 006c9ff7  33c9                 xor ecx, ecx
// 006c9ff9  8908                 mov dword ptr [eax], ecx
// 006c9ffb  59                   pop ecx
// 006c9ffc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
