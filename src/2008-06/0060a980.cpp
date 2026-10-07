// roc 2008-06 0060a980  unit: RBX::VHole::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060a980
//
// 0060a980  51                   push ecx
// 0060a981  6a18                 push 0x18
// 0060a983  c744240400000000     mov dword ptr [esp + 4], 0
// 0060a98b  e8905f0900           call 0x6a0920
// 0060a990  83c404               add esp, 4
// 0060a993  85c0                 test eax, eax
// 0060a995  742c                 je 0x60a9c3
// 0060a997  c700902b8400         mov dword ptr [eax], 0x842b90
// 0060a99d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060a9a1  894808               mov dword ptr [eax + 8], ecx
// 0060a9a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0060a9a8  89500c               mov dword ptr [eax + 0xc], edx
// 0060a9ab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0060a9af  894810               mov dword ptr [eax + 0x10], ecx
// 0060a9b2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060a9b6  8b542418             mov edx, dword ptr [esp + 0x18]
// 0060a9ba  895014               mov dword ptr [eax + 0x14], edx
// 0060a9bd  8901                 mov dword ptr [ecx], eax
// 0060a9bf  8bc1                 mov eax, ecx
// 0060a9c1  59                   pop ecx
// 0060a9c2  c3                   ret 
// 0060a9c3  8b442408             mov eax, dword ptr [esp + 8]
// 0060a9c7  33c9                 xor ecx, ecx
// 0060a9c9  8908                 mov dword ptr [eax], ecx
// 0060a9cb  59                   pop ecx
// 0060a9cc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
