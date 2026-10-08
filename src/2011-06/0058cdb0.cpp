// roc 2011-06 0058cdb0  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058cdb0
//
// 0058cdb0  51                   push ecx
// 0058cdb1  6a10                 push 0x10
// 0058cdb3  c744240400000000     mov dword ptr [esp + 4], 0
// 0058cdbb  e89ed22700           call 0x80a05e
// 0058cdc0  83c404               add esp, 4
// 0058cdc3  85c0                 test eax, eax
// 0058cdc5  741e                 je 0x58cde5
// 0058cdc7  c700408ca800         mov dword ptr [eax], 0xa88c40
// 0058cdcd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058cdd1  894808               mov dword ptr [eax + 8], ecx
// 0058cdd4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058cdd8  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058cddc  89500c               mov dword ptr [eax + 0xc], edx
// 0058cddf  8901                 mov dword ptr [ecx], eax
// 0058cde1  8bc1                 mov eax, ecx
// 0058cde3  59                   pop ecx
// 0058cde4  c3                   ret 
// 0058cde5  8b442408             mov eax, dword ptr [esp + 8]
// 0058cde9  33c9                 xor ecx, ecx
// 0058cdeb  8908                 mov dword ptr [eax], ecx
// 0058cded  59                   pop ecx
// 0058cdee  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
