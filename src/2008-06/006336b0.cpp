// roc 2008-06 006336b0  unit: RBX::Network::VPlayer::?$BoundPropGetSet  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006336b0
//
// 006336b0  51                   push ecx
// 006336b1  6a18                 push 0x18
// 006336b3  c744240400000000     mov dword ptr [esp + 4], 0
// 006336bb  e860d20600           call 0x6a0920
// 006336c0  83c404               add esp, 4
// 006336c3  85c0                 test eax, eax
// 006336c5  742c                 je 0x6336f3
// 006336c7  c70084838400         mov dword ptr [eax], 0x848384
// 006336cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006336d1  894808               mov dword ptr [eax + 8], ecx
// 006336d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006336d8  89500c               mov dword ptr [eax + 0xc], edx
// 006336db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006336df  894810               mov dword ptr [eax + 0x10], ecx
// 006336e2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006336e6  8b542418             mov edx, dword ptr [esp + 0x18]
// 006336ea  895014               mov dword ptr [eax + 0x14], edx
// 006336ed  8901                 mov dword ptr [ecx], eax
// 006336ef  8bc1                 mov eax, ecx
// 006336f1  59                   pop ecx
// 006336f2  c3                   ret 
// 006336f3  8b442408             mov eax, dword ptr [esp + 8]
// 006336f7  33c9                 xor ecx, ecx
// 006336f9  8908                 mov dword ptr [eax], ecx
// 006336fb  59                   pop ecx
// 006336fc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
