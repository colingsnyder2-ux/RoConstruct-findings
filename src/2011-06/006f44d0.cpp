// roc 2011-06 006f44d0  unit: RBX::VDialogRoot::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006f44d0
//
// 006f44d0  51                   push ecx
// 006f44d1  6a18                 push 0x18
// 006f44d3  c744240400000000     mov dword ptr [esp + 4], 0
// 006f44db  e87e5b1100           call 0x80a05e
// 006f44e0  83c404               add esp, 4
// 006f44e3  85c0                 test eax, eax
// 006f44e5  742c                 je 0x6f4513
// 006f44e7  c7000c99aa00         mov dword ptr [eax], 0xaa990c
// 006f44ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f44f1  894808               mov dword ptr [eax + 8], ecx
// 006f44f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f44f8  89500c               mov dword ptr [eax + 0xc], edx
// 006f44fb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006f44ff  894810               mov dword ptr [eax + 0x10], ecx
// 006f4502  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006f4506  8b542418             mov edx, dword ptr [esp + 0x18]
// 006f450a  895014               mov dword ptr [eax + 0x14], edx
// 006f450d  8901                 mov dword ptr [ecx], eax
// 006f450f  8bc1                 mov eax, ecx
// 006f4511  59                   pop ecx
// 006f4512  c3                   ret 
// 006f4513  8b442408             mov eax, dword ptr [esp + 8]
// 006f4517  33c9                 xor ecx, ecx
// 006f4519  8908                 mov dword ptr [eax], ecx
// 006f451b  59                   pop ecx
// 006f451c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
