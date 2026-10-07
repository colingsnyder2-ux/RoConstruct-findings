// roc 2011-06 0059f770  unit: RBX::Soundscape::VSoundId::?$TypedPropertyDescriptor  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0059f770
//
// 0059f770  51                   push ecx
// 0059f771  6a18                 push 0x18
// 0059f773  c744240400000000     mov dword ptr [esp + 4], 0
// 0059f77b  e8dea82600           call 0x80a05e
// 0059f780  83c404               add esp, 4
// 0059f783  85c0                 test eax, eax
// 0059f785  742c                 je 0x59f7b3
// 0059f787  c7000cc8a800         mov dword ptr [eax], 0xa8c80c
// 0059f78d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059f791  894808               mov dword ptr [eax + 8], ecx
// 0059f794  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059f798  89500c               mov dword ptr [eax + 0xc], edx
// 0059f79b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0059f79f  894810               mov dword ptr [eax + 0x10], ecx
// 0059f7a2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059f7a6  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059f7aa  895014               mov dword ptr [eax + 0x14], edx
// 0059f7ad  8901                 mov dword ptr [ecx], eax
// 0059f7af  8bc1                 mov eax, ecx
// 0059f7b1  59                   pop ecx
// 0059f7b2  c3                   ret 
// 0059f7b3  8b442408             mov eax, dword ptr [esp + 8]
// 0059f7b7  33c9                 xor ecx, ecx
// 0059f7b9  8908                 mov dword ptr [eax], ecx
// 0059f7bb  59                   pop ecx
// 0059f7bc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
