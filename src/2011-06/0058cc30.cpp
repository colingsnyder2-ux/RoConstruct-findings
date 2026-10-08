// roc 2011-06 0058cc30  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058cc30
//
// 0058cc30  51                   push ecx
// 0058cc31  6a10                 push 0x10
// 0058cc33  c744240400000000     mov dword ptr [esp + 4], 0
// 0058cc3b  e81ed42700           call 0x80a05e
// 0058cc40  83c404               add esp, 4
// 0058cc43  85c0                 test eax, eax
// 0058cc45  741e                 je 0x58cc65
// 0058cc47  c700c88ba800         mov dword ptr [eax], 0xa88bc8
// 0058cc4d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058cc51  894808               mov dword ptr [eax + 8], ecx
// 0058cc54  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058cc58  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058cc5c  89500c               mov dword ptr [eax + 0xc], edx
// 0058cc5f  8901                 mov dword ptr [ecx], eax
// 0058cc61  8bc1                 mov eax, ecx
// 0058cc63  59                   pop ecx
// 0058cc64  c3                   ret 
// 0058cc65  8b442408             mov eax, dword ptr [esp + 8]
// 0058cc69  33c9                 xor ecx, ecx
// 0058cc6b  8908                 mov dword ptr [eax], ecx
// 0058cc6d  59                   pop ecx
// 0058cc6e  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
