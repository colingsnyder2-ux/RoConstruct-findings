// roc 2011-06 007374e0  unit: RBX::Network::P8Player::?$GetImpl  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007374e0
//
// 007374e0  51                   push ecx
// 007374e1  6a18                 push 0x18
// 007374e3  c744240400000000     mov dword ptr [esp + 4], 0
// 007374eb  e86e2b0d00           call 0x80a05e
// 007374f0  83c404               add esp, 4
// 007374f3  85c0                 test eax, eax
// 007374f5  742c                 je 0x737523
// 007374f7  c7008440ab00         mov dword ptr [eax], 0xab4084
// 007374fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00737501  894808               mov dword ptr [eax + 8], ecx
// 00737504  8b542410             mov edx, dword ptr [esp + 0x10]
// 00737508  89500c               mov dword ptr [eax + 0xc], edx
// 0073750b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0073750f  894810               mov dword ptr [eax + 0x10], ecx
// 00737512  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00737516  8b542418             mov edx, dword ptr [esp + 0x18]
// 0073751a  895014               mov dword ptr [eax + 0x14], edx
// 0073751d  8901                 mov dword ptr [ecx], eax
// 0073751f  8bc1                 mov eax, ecx
// 00737521  59                   pop ecx
// 00737522  c3                   ret 
// 00737523  8b442408             mov eax, dword ptr [esp + 8]
// 00737527  33c9                 xor ecx, ecx
// 00737529  8908                 mov dword ptr [eax], ecx
// 0073752b  59                   pop ecx
// 0073752c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
