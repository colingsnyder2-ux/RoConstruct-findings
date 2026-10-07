// roc 2011-06 0059f720  unit: RBX::Soundscape::VSoundId::?$TypedPropertyDescriptor  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0059f720
//
// 0059f720  51                   push ecx
// 0059f721  6a18                 push 0x18
// 0059f723  c744240400000000     mov dword ptr [esp + 4], 0
// 0059f72b  e82ea92600           call 0x80a05e
// 0059f730  83c404               add esp, 4
// 0059f733  85c0                 test eax, eax
// 0059f735  742c                 je 0x59f763
// 0059f737  c700f8c7a800         mov dword ptr [eax], 0xa8c7f8
// 0059f73d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059f741  894808               mov dword ptr [eax + 8], ecx
// 0059f744  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059f748  89500c               mov dword ptr [eax + 0xc], edx
// 0059f74b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0059f74f  894810               mov dword ptr [eax + 0x10], ecx
// 0059f752  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059f756  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059f75a  895014               mov dword ptr [eax + 0x14], edx
// 0059f75d  8901                 mov dword ptr [ecx], eax
// 0059f75f  8bc1                 mov eax, ecx
// 0059f761  59                   pop ecx
// 0059f762  c3                   ret 
// 0059f763  8b442408             mov eax, dword ptr [esp + 8]
// 0059f767  33c9                 xor ecx, ecx
// 0059f769  8908                 mov dword ptr [eax], ecx
// 0059f76b  59                   pop ecx
// 0059f76c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
