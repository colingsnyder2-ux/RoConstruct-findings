// roc 2011-06 005a7090  unit: RBX::VTeam::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a7090
//
// 005a7090  51                   push ecx
// 005a7091  6a18                 push 0x18
// 005a7093  c744240400000000     mov dword ptr [esp + 4], 0
// 005a709b  e8be2f2600           call 0x80a05e
// 005a70a0  83c404               add esp, 4
// 005a70a3  85c0                 test eax, eax
// 005a70a5  742c                 je 0x5a70d3
// 005a70a7  c70034d5a800         mov dword ptr [eax], 0xa8d534
// 005a70ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a70b1  894808               mov dword ptr [eax + 8], ecx
// 005a70b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 005a70b8  89500c               mov dword ptr [eax + 0xc], edx
// 005a70bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a70bf  894810               mov dword ptr [eax + 0x10], ecx
// 005a70c2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a70c6  8b542418             mov edx, dword ptr [esp + 0x18]
// 005a70ca  895014               mov dword ptr [eax + 0x14], edx
// 005a70cd  8901                 mov dword ptr [ecx], eax
// 005a70cf  8bc1                 mov eax, ecx
// 005a70d1  59                   pop ecx
// 005a70d2  c3                   ret 
// 005a70d3  8b442408             mov eax, dword ptr [esp + 8]
// 005a70d7  33c9                 xor ecx, ecx
// 005a70d9  8908                 mov dword ptr [eax], ecx
// 005a70db  59                   pop ecx
// 005a70dc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
