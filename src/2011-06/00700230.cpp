// roc 2011-06 00700230  unit: RBX::Network::VPlayer::?$BoundPropGetSet  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00700230
//
// 00700230  51                   push ecx
// 00700231  6a18                 push 0x18
// 00700233  c744240400000000     mov dword ptr [esp + 4], 0
// 0070023b  e81e9e1000           call 0x80a05e
// 00700240  83c404               add esp, 4
// 00700243  85c0                 test eax, eax
// 00700245  742c                 je 0x700273
// 00700247  c7001ccaaa00         mov dword ptr [eax], 0xaaca1c
// 0070024d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00700251  894808               mov dword ptr [eax + 8], ecx
// 00700254  8b542410             mov edx, dword ptr [esp + 0x10]
// 00700258  89500c               mov dword ptr [eax + 0xc], edx
// 0070025b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0070025f  894810               mov dword ptr [eax + 0x10], ecx
// 00700262  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00700266  8b542418             mov edx, dword ptr [esp + 0x18]
// 0070026a  895014               mov dword ptr [eax + 0x14], edx
// 0070026d  8901                 mov dword ptr [ecx], eax
// 0070026f  8bc1                 mov eax, ecx
// 00700271  59                   pop ecx
// 00700272  c3                   ret 
// 00700273  8b442408             mov eax, dword ptr [esp + 8]
// 00700277  33c9                 xor ecx, ecx
// 00700279  8908                 mov dword ptr [eax], ecx
// 0070027b  59                   pop ecx
// 0070027c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
