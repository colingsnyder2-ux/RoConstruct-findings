// roc 2011-06 0059f7c0  unit: RBX::Soundscape::VSoundId::?$TypedPropertyDescriptor  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0059f7c0
//
// 0059f7c0  51                   push ecx
// 0059f7c1  6a18                 push 0x18
// 0059f7c3  c744240400000000     mov dword ptr [esp + 4], 0
// 0059f7cb  e88ea82600           call 0x80a05e
// 0059f7d0  83c404               add esp, 4
// 0059f7d3  85c0                 test eax, eax
// 0059f7d5  742c                 je 0x59f803
// 0059f7d7  c70020c8a800         mov dword ptr [eax], 0xa8c820
// 0059f7dd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059f7e1  894808               mov dword ptr [eax + 8], ecx
// 0059f7e4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059f7e8  89500c               mov dword ptr [eax + 0xc], edx
// 0059f7eb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0059f7ef  894810               mov dword ptr [eax + 0x10], ecx
// 0059f7f2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059f7f6  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059f7fa  895014               mov dword ptr [eax + 0x14], edx
// 0059f7fd  8901                 mov dword ptr [ecx], eax
// 0059f7ff  8bc1                 mov eax, ecx
// 0059f801  59                   pop ecx
// 0059f802  c3                   ret 
// 0059f803  8b442408             mov eax, dword ptr [esp + 8]
// 0059f807  33c9                 xor ecx, ecx
// 0059f809  8908                 mov dword ptr [eax], ecx
// 0059f80b  59                   pop ecx
// 0059f80c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
