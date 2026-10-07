// roc 2011-06 0073f180  unit: RBX::Scale9Frame  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0073f180
//
// 0073f180  51                   push ecx
// 0073f181  6a18                 push 0x18
// 0073f183  c744240400000000     mov dword ptr [esp + 4], 0
// 0073f18b  e8ceae0c00           call 0x80a05e
// 0073f190  83c404               add esp, 4
// 0073f193  85c0                 test eax, eax
// 0073f195  742c                 je 0x73f1c3
// 0073f197  c700c845ab00         mov dword ptr [eax], 0xab45c8
// 0073f19d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0073f1a1  894808               mov dword ptr [eax + 8], ecx
// 0073f1a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0073f1a8  89500c               mov dword ptr [eax + 0xc], edx
// 0073f1ab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0073f1af  894810               mov dword ptr [eax + 0x10], ecx
// 0073f1b2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0073f1b6  8b542418             mov edx, dword ptr [esp + 0x18]
// 0073f1ba  895014               mov dword ptr [eax + 0x14], edx
// 0073f1bd  8901                 mov dword ptr [ecx], eax
// 0073f1bf  8bc1                 mov eax, ecx
// 0073f1c1  59                   pop ecx
// 0073f1c2  c3                   ret 
// 0073f1c3  8b442408             mov eax, dword ptr [esp + 8]
// 0073f1c7  33c9                 xor ecx, ecx
// 0073f1c9  8908                 mov dword ptr [eax], ecx
// 0073f1cb  59                   pop ecx
// 0073f1cc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
