// roc 2011-06 00652880  unit: RBX::Soundscape::P8SoundChannel::?$GetSetImpl  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00652880
//
// 00652880  51                   push ecx
// 00652881  6a18                 push 0x18
// 00652883  c744240400000000     mov dword ptr [esp + 4], 0
// 0065288b  e8ce771b00           call 0x80a05e
// 00652890  83c404               add esp, 4
// 00652893  85c0                 test eax, eax
// 00652895  742c                 je 0x6528c3
// 00652897  c70050a3a900         mov dword ptr [eax], 0xa9a350
// 0065289d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006528a1  894808               mov dword ptr [eax + 8], ecx
// 006528a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006528a8  89500c               mov dword ptr [eax + 0xc], edx
// 006528ab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006528af  894810               mov dword ptr [eax + 0x10], ecx
// 006528b2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006528b6  8b542418             mov edx, dword ptr [esp + 0x18]
// 006528ba  895014               mov dword ptr [eax + 0x14], edx
// 006528bd  8901                 mov dword ptr [ecx], eax
// 006528bf  8bc1                 mov eax, ecx
// 006528c1  59                   pop ecx
// 006528c2  c3                   ret 
// 006528c3  8b442408             mov eax, dword ptr [esp + 8]
// 006528c7  33c9                 xor ecx, ecx
// 006528c9  8908                 mov dword ptr [eax], ecx
// 006528cb  59                   pop ecx
// 006528cc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
