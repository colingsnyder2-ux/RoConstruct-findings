// roc 2011-06 0058ccb0  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058ccb0
//
// 0058ccb0  51                   push ecx
// 0058ccb1  6a10                 push 0x10
// 0058ccb3  c744240400000000     mov dword ptr [esp + 4], 0
// 0058ccbb  e89ed32700           call 0x80a05e
// 0058ccc0  83c404               add esp, 4
// 0058ccc3  85c0                 test eax, eax
// 0058ccc5  741e                 je 0x58cce5
// 0058ccc7  c700f08ba800         mov dword ptr [eax], 0xa88bf0
// 0058cccd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058ccd1  894808               mov dword ptr [eax + 8], ecx
// 0058ccd4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058ccd8  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058ccdc  89500c               mov dword ptr [eax + 0xc], edx
// 0058ccdf  8901                 mov dword ptr [ecx], eax
// 0058cce1  8bc1                 mov eax, ecx
// 0058cce3  59                   pop ecx
// 0058cce4  c3                   ret 
// 0058cce5  8b442408             mov eax, dword ptr [esp + 8]
// 0058cce9  33c9                 xor ecx, ecx
// 0058cceb  8908                 mov dword ptr [eax], ecx
// 0058cced  59                   pop ecx
// 0058ccee  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
