// roc 2011-06 006d35b0  unit: RBX::VMotor::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d35b0
//
// 006d35b0  51                   push ecx
// 006d35b1  6a18                 push 0x18
// 006d35b3  c744240400000000     mov dword ptr [esp + 4], 0
// 006d35bb  e89e6a1300           call 0x80a05e
// 006d35c0  83c404               add esp, 4
// 006d35c3  85c0                 test eax, eax
// 006d35c5  742c                 je 0x6d35f3
// 006d35c7  c700fc5faa00         mov dword ptr [eax], 0xaa5ffc
// 006d35cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d35d1  894808               mov dword ptr [eax + 8], ecx
// 006d35d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d35d8  89500c               mov dword ptr [eax + 0xc], edx
// 006d35db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006d35df  894810               mov dword ptr [eax + 0x10], ecx
// 006d35e2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006d35e6  8b542418             mov edx, dword ptr [esp + 0x18]
// 006d35ea  895014               mov dword ptr [eax + 0x14], edx
// 006d35ed  8901                 mov dword ptr [ecx], eax
// 006d35ef  8bc1                 mov eax, ecx
// 006d35f1  59                   pop ecx
// 006d35f2  c3                   ret 
// 006d35f3  8b442408             mov eax, dword ptr [esp + 8]
// 006d35f7  33c9                 xor ecx, ecx
// 006d35f9  8908                 mov dword ptr [eax], ecx
// 006d35fb  59                   pop ecx
// 006d35fc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
