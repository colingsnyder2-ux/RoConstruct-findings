// roc 2011-06 0058caa0  unit: std::Vlength_error::U?$error_info_injector::?$clone_impl  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058caa0
//
// 0058caa0  51                   push ecx
// 0058caa1  6a18                 push 0x18
// 0058caa3  c744240400000000     mov dword ptr [esp + 4], 0
// 0058caab  e8aed52700           call 0x80a05e
// 0058cab0  83c404               add esp, 4
// 0058cab3  85c0                 test eax, eax
// 0058cab5  742c                 je 0x58cae3
// 0058cab7  c7008c8ba800         mov dword ptr [eax], 0xa88b8c
// 0058cabd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058cac1  894808               mov dword ptr [eax + 8], ecx
// 0058cac4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058cac8  89500c               mov dword ptr [eax + 0xc], edx
// 0058cacb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0058cacf  894810               mov dword ptr [eax + 0x10], ecx
// 0058cad2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058cad6  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058cada  895014               mov dword ptr [eax + 0x14], edx
// 0058cadd  8901                 mov dword ptr [ecx], eax
// 0058cadf  8bc1                 mov eax, ecx
// 0058cae1  59                   pop ecx
// 0058cae2  c3                   ret 
// 0058cae3  8b442408             mov eax, dword ptr [esp + 8]
// 0058cae7  33c9                 xor ecx, ecx
// 0058cae9  8908                 mov dword ptr [eax], ecx
// 0058caeb  59                   pop ecx
// 0058caec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
