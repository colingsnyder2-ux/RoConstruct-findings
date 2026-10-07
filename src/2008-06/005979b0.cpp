// roc 2008-06 005979b0  unit: RBX::VDecal::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005979b0
//
// 005979b0  51                   push ecx
// 005979b1  6a18                 push 0x18
// 005979b3  c744240400000000     mov dword ptr [esp + 4], 0
// 005979bb  e8608f1000           call 0x6a0920
// 005979c0  83c404               add esp, 4
// 005979c3  85c0                 test eax, eax
// 005979c5  742c                 je 0x5979f3
// 005979c7  c70080248300         mov dword ptr [eax], 0x832480
// 005979cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005979d1  894808               mov dword ptr [eax + 8], ecx
// 005979d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 005979d8  89500c               mov dword ptr [eax + 0xc], edx
// 005979db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005979df  894810               mov dword ptr [eax + 0x10], ecx
// 005979e2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005979e6  8b542418             mov edx, dword ptr [esp + 0x18]
// 005979ea  895014               mov dword ptr [eax + 0x14], edx
// 005979ed  8901                 mov dword ptr [ecx], eax
// 005979ef  8bc1                 mov eax, ecx
// 005979f1  59                   pop ecx
// 005979f2  c3                   ret 
// 005979f3  8b442408             mov eax, dword ptr [esp + 8]
// 005979f7  33c9                 xor ecx, ecx
// 005979f9  8908                 mov dword ptr [eax], ecx
// 005979fb  59                   pop ecx
// 005979fc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
