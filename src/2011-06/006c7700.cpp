// roc 2011-06 006c7700  unit: RBX::Hint  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006c7700
//
// 006c7700  51                   push ecx
// 006c7701  6a18                 push 0x18
// 006c7703  c744240400000000     mov dword ptr [esp + 4], 0
// 006c770b  e84e291400           call 0x80a05e
// 006c7710  83c404               add esp, 4
// 006c7713  85c0                 test eax, eax
// 006c7715  742c                 je 0x6c7743
// 006c7717  c700c449aa00         mov dword ptr [eax], 0xaa49c4
// 006c771d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c7721  894808               mov dword ptr [eax + 8], ecx
// 006c7724  8b542410             mov edx, dword ptr [esp + 0x10]
// 006c7728  89500c               mov dword ptr [eax + 0xc], edx
// 006c772b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006c772f  894810               mov dword ptr [eax + 0x10], ecx
// 006c7732  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006c7736  8b542418             mov edx, dword ptr [esp + 0x18]
// 006c773a  895014               mov dword ptr [eax + 0x14], edx
// 006c773d  8901                 mov dword ptr [ecx], eax
// 006c773f  8bc1                 mov eax, ecx
// 006c7741  59                   pop ecx
// 006c7742  c3                   ret 
// 006c7743  8b442408             mov eax, dword ptr [esp + 8]
// 006c7747  33c9                 xor ecx, ecx
// 006c7749  8908                 mov dword ptr [eax], ecx
// 006c774b  59                   pop ecx
// 006c774c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
