// roc 2008-06 0048a990  unit: RBX::Network::VPlayer::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048a990
//
// 0048a990  51                   push ecx
// 0048a991  6a18                 push 0x18
// 0048a993  c744240400000000     mov dword ptr [esp + 4], 0
// 0048a99b  e8805f2100           call 0x6a0920
// 0048a9a0  83c404               add esp, 4
// 0048a9a3  85c0                 test eax, eax
// 0048a9a5  742c                 je 0x48a9d3
// 0048a9a7  c70088158200         mov dword ptr [eax], 0x821588
// 0048a9ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048a9b1  894808               mov dword ptr [eax + 8], ecx
// 0048a9b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0048a9b8  89500c               mov dword ptr [eax + 0xc], edx
// 0048a9bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0048a9bf  894810               mov dword ptr [eax + 0x10], ecx
// 0048a9c2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048a9c6  8b542418             mov edx, dword ptr [esp + 0x18]
// 0048a9ca  895014               mov dword ptr [eax + 0x14], edx
// 0048a9cd  8901                 mov dword ptr [ecx], eax
// 0048a9cf  8bc1                 mov eax, ecx
// 0048a9d1  59                   pop ecx
// 0048a9d2  c3                   ret 
// 0048a9d3  8b442408             mov eax, dword ptr [esp + 8]
// 0048a9d7  33c9                 xor ecx, ecx
// 0048a9d9  8908                 mov dword ptr [eax], ecx
// 0048a9db  59                   pop ecx
// 0048a9dc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
