// roc 2011-06 006eef90  unit: RBX::P8GuiObject::?$GetSetImpl  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006eef90
//
// 006eef90  51                   push ecx
// 006eef91  6a18                 push 0x18
// 006eef93  c744240400000000     mov dword ptr [esp + 4], 0
// 006eef9b  e8beb01100           call 0x80a05e
// 006eefa0  83c404               add esp, 4
// 006eefa3  85c0                 test eax, eax
// 006eefa5  742c                 je 0x6eefd3
// 006eefa7  c700d48baa00         mov dword ptr [eax], 0xaa8bd4
// 006eefad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006eefb1  894808               mov dword ptr [eax + 8], ecx
// 006eefb4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006eefb8  89500c               mov dword ptr [eax + 0xc], edx
// 006eefbb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006eefbf  894810               mov dword ptr [eax + 0x10], ecx
// 006eefc2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006eefc6  8b542418             mov edx, dword ptr [esp + 0x18]
// 006eefca  895014               mov dword ptr [eax + 0x14], edx
// 006eefcd  8901                 mov dword ptr [ecx], eax
// 006eefcf  8bc1                 mov eax, ecx
// 006eefd1  59                   pop ecx
// 006eefd2  c3                   ret 
// 006eefd3  8b442408             mov eax, dword ptr [esp + 8]
// 006eefd7  33c9                 xor ecx, ecx
// 006eefd9  8908                 mov dword ptr [eax], ecx
// 006eefdb  59                   pop ecx
// 006eefdc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
