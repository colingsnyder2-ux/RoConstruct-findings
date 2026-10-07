// roc 2011-06 0062da60  unit: RBX::VTextureId::?$holder  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0062da60
//
// 0062da60  51                   push ecx
// 0062da61  6a18                 push 0x18
// 0062da63  c744240400000000     mov dword ptr [esp + 4], 0
// 0062da6b  e8eec51d00           call 0x80a05e
// 0062da70  83c404               add esp, 4
// 0062da73  85c0                 test eax, eax
// 0062da75  742c                 je 0x62daa3
// 0062da77  c700285ba900         mov dword ptr [eax], 0xa95b28
// 0062da7d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062da81  894808               mov dword ptr [eax + 8], ecx
// 0062da84  8b542410             mov edx, dword ptr [esp + 0x10]
// 0062da88  89500c               mov dword ptr [eax + 0xc], edx
// 0062da8b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0062da8f  894810               mov dword ptr [eax + 0x10], ecx
// 0062da92  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062da96  8b542418             mov edx, dword ptr [esp + 0x18]
// 0062da9a  895014               mov dword ptr [eax + 0x14], edx
// 0062da9d  8901                 mov dword ptr [ecx], eax
// 0062da9f  8bc1                 mov eax, ecx
// 0062daa1  59                   pop ecx
// 0062daa2  c3                   ret 
// 0062daa3  8b442408             mov eax, dword ptr [esp + 8]
// 0062daa7  33c9                 xor ecx, ecx
// 0062daa9  8908                 mov dword ptr [eax], ecx
// 0062daab  59                   pop ecx
// 0062daac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
