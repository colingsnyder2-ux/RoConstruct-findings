// roc 2011-06 00652830  unit: RBX::Soundscape::P8SoundChannel::?$GetSetImpl  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00652830
//
// 00652830  51                   push ecx
// 00652831  6a18                 push 0x18
// 00652833  c744240400000000     mov dword ptr [esp + 4], 0
// 0065283b  e81e781b00           call 0x80a05e
// 00652840  83c404               add esp, 4
// 00652843  85c0                 test eax, eax
// 00652845  742c                 je 0x652873
// 00652847  c7003ca3a900         mov dword ptr [eax], 0xa9a33c
// 0065284d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00652851  894808               mov dword ptr [eax + 8], ecx
// 00652854  8b542410             mov edx, dword ptr [esp + 0x10]
// 00652858  89500c               mov dword ptr [eax + 0xc], edx
// 0065285b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065285f  894810               mov dword ptr [eax + 0x10], ecx
// 00652862  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00652866  8b542418             mov edx, dword ptr [esp + 0x18]
// 0065286a  895014               mov dword ptr [eax + 0x14], edx
// 0065286d  8901                 mov dword ptr [ecx], eax
// 0065286f  8bc1                 mov eax, ecx
// 00652871  59                   pop ecx
// 00652872  c3                   ret 
// 00652873  8b442408             mov eax, dword ptr [esp + 8]
// 00652877  33c9                 xor ecx, ecx
// 00652879  8908                 mov dword ptr [eax], ecx
// 0065287b  59                   pop ecx
// 0065287c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
