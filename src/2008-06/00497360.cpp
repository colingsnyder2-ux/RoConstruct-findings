// roc 2008-06 00497360  unit: RBX::Network::Players  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00497360
//
// 00497360  51                   push ecx
// 00497361  6a18                 push 0x18
// 00497363  c744240400000000     mov dword ptr [esp + 4], 0
// 0049736b  e8b0952000           call 0x6a0920
// 00497370  83c404               add esp, 4
// 00497373  85c0                 test eax, eax
// 00497375  742c                 je 0x4973a3
// 00497377  c700dc268200         mov dword ptr [eax], 0x8226dc
// 0049737d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00497381  894808               mov dword ptr [eax + 8], ecx
// 00497384  8b542410             mov edx, dword ptr [esp + 0x10]
// 00497388  89500c               mov dword ptr [eax + 0xc], edx
// 0049738b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0049738f  894810               mov dword ptr [eax + 0x10], ecx
// 00497392  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00497396  8b542418             mov edx, dword ptr [esp + 0x18]
// 0049739a  895014               mov dword ptr [eax + 0x14], edx
// 0049739d  8901                 mov dword ptr [ecx], eax
// 0049739f  8bc1                 mov eax, ecx
// 004973a1  59                   pop ecx
// 004973a2  c3                   ret 
// 004973a3  8b442408             mov eax, dword ptr [esp + 8]
// 004973a7  33c9                 xor ecx, ecx
// 004973a9  8908                 mov dword ptr [eax], ecx
// 004973ab  59                   pop ecx
// 004973ac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
