// roc 2011-06 00712df0  unit: RBX::VSkateboardController::?$FactoryProduct  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00712df0
//
// 00712df0  51                   push ecx
// 00712df1  6a10                 push 0x10
// 00712df3  c744240400000000     mov dword ptr [esp + 4], 0
// 00712dfb  e85e720f00           call 0x80a05e
// 00712e00  83c404               add esp, 4
// 00712e03  85c0                 test eax, eax
// 00712e05  741e                 je 0x712e25
// 00712e07  c700a4efaa00         mov dword ptr [eax], 0xaaefa4
// 00712e0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00712e11  894808               mov dword ptr [eax + 8], ecx
// 00712e14  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00712e18  8b542410             mov edx, dword ptr [esp + 0x10]
// 00712e1c  89500c               mov dword ptr [eax + 0xc], edx
// 00712e1f  8901                 mov dword ptr [ecx], eax
// 00712e21  8bc1                 mov eax, ecx
// 00712e23  59                   pop ecx
// 00712e24  c3                   ret 
// 00712e25  8b442408             mov eax, dword ptr [esp + 8]
// 00712e29  33c9                 xor ecx, ecx
// 00712e2b  8908                 mov dword ptr [eax], ecx
// 00712e2d  59                   pop ecx
// 00712e2e  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
