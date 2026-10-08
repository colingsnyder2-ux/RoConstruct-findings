// roc 2011-06 0058ccf0  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058ccf0
//
// 0058ccf0  51                   push ecx
// 0058ccf1  6a10                 push 0x10
// 0058ccf3  c744240400000000     mov dword ptr [esp + 4], 0
// 0058ccfb  e85ed32700           call 0x80a05e
// 0058cd00  83c404               add esp, 4
// 0058cd03  85c0                 test eax, eax
// 0058cd05  741e                 je 0x58cd25
// 0058cd07  c700048ca800         mov dword ptr [eax], 0xa88c04
// 0058cd0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058cd11  894808               mov dword ptr [eax + 8], ecx
// 0058cd14  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058cd18  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058cd1c  89500c               mov dword ptr [eax + 0xc], edx
// 0058cd1f  8901                 mov dword ptr [ecx], eax
// 0058cd21  8bc1                 mov eax, ecx
// 0058cd23  59                   pop ecx
// 0058cd24  c3                   ret 
// 0058cd25  8b442408             mov eax, dword ptr [esp + 8]
// 0058cd29  33c9                 xor ecx, ecx
// 0058cd2b  8908                 mov dword ptr [eax], ecx
// 0058cd2d  59                   pop ecx
// 0058cd2e  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
