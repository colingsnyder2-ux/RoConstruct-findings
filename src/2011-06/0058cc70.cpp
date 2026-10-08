// roc 2011-06 0058cc70  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058cc70
//
// 0058cc70  51                   push ecx
// 0058cc71  6a10                 push 0x10
// 0058cc73  c744240400000000     mov dword ptr [esp + 4], 0
// 0058cc7b  e8ded32700           call 0x80a05e
// 0058cc80  83c404               add esp, 4
// 0058cc83  85c0                 test eax, eax
// 0058cc85  741e                 je 0x58cca5
// 0058cc87  c700dc8ba800         mov dword ptr [eax], 0xa88bdc
// 0058cc8d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058cc91  894808               mov dword ptr [eax + 8], ecx
// 0058cc94  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058cc98  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058cc9c  89500c               mov dword ptr [eax + 0xc], edx
// 0058cc9f  8901                 mov dword ptr [ecx], eax
// 0058cca1  8bc1                 mov eax, ecx
// 0058cca3  59                   pop ecx
// 0058cca4  c3                   ret 
// 0058cca5  8b442408             mov eax, dword ptr [esp + 8]
// 0058cca9  33c9                 xor ecx, ecx
// 0058ccab  8908                 mov dword ptr [eax], ecx
// 0058ccad  59                   pop ecx
// 0058ccae  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
