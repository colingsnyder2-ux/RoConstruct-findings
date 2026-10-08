// roc 2011-06 0058cd70  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058cd70
//
// 0058cd70  51                   push ecx
// 0058cd71  6a10                 push 0x10
// 0058cd73  c744240400000000     mov dword ptr [esp + 4], 0
// 0058cd7b  e8ded22700           call 0x80a05e
// 0058cd80  83c404               add esp, 4
// 0058cd83  85c0                 test eax, eax
// 0058cd85  741e                 je 0x58cda5
// 0058cd87  c7002c8ca800         mov dword ptr [eax], 0xa88c2c
// 0058cd8d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058cd91  894808               mov dword ptr [eax + 8], ecx
// 0058cd94  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058cd98  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058cd9c  89500c               mov dword ptr [eax + 0xc], edx
// 0058cd9f  8901                 mov dword ptr [ecx], eax
// 0058cda1  8bc1                 mov eax, ecx
// 0058cda3  59                   pop ecx
// 0058cda4  c3                   ret 
// 0058cda5  8b442408             mov eax, dword ptr [esp + 8]
// 0058cda9  33c9                 xor ecx, ecx
// 0058cdab  8908                 mov dword ptr [eax], ecx
// 0058cdad  59                   pop ecx
// 0058cdae  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
