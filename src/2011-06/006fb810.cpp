// roc 2011-06 006fb810  unit: RBX::Fire  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006fb810
//
// 006fb810  51                   push ecx
// 006fb811  6a18                 push 0x18
// 006fb813  c744240400000000     mov dword ptr [esp + 4], 0
// 006fb81b  e83ee81000           call 0x80a05e
// 006fb820  83c404               add esp, 4
// 006fb823  85c0                 test eax, eax
// 006fb825  742c                 je 0x6fb853
// 006fb827  c70000b1aa00         mov dword ptr [eax], 0xaab100
// 006fb82d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006fb831  894808               mov dword ptr [eax + 8], ecx
// 006fb834  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fb838  89500c               mov dword ptr [eax + 0xc], edx
// 006fb83b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006fb83f  894810               mov dword ptr [eax + 0x10], ecx
// 006fb842  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006fb846  8b542418             mov edx, dword ptr [esp + 0x18]
// 006fb84a  895014               mov dword ptr [eax + 0x14], edx
// 006fb84d  8901                 mov dword ptr [ecx], eax
// 006fb84f  8bc1                 mov eax, ecx
// 006fb851  59                   pop ecx
// 006fb852  c3                   ret 
// 006fb853  8b442408             mov eax, dword ptr [esp + 8]
// 006fb857  33c9                 xor ecx, ecx
// 006fb859  8908                 mov dword ptr [eax], ecx
// 006fb85b  59                   pop ecx
// 006fb85c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
