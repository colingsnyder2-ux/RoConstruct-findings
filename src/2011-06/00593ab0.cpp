// roc 2011-06 00593ab0  unit: RBX::Instance::AncestryChangedSignalData  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00593ab0
//
// 00593ab0  51                   push ecx
// 00593ab1  6a10                 push 0x10
// 00593ab3  c744240400000000     mov dword ptr [esp + 4], 0
// 00593abb  e89e652700           call 0x80a05e
// 00593ac0  83c404               add esp, 4
// 00593ac3  85c0                 test eax, eax
// 00593ac5  741e                 je 0x593ae5
// 00593ac7  c700f09ca800         mov dword ptr [eax], 0xa89cf0
// 00593acd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00593ad1  894808               mov dword ptr [eax + 8], ecx
// 00593ad4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00593ad8  8b542410             mov edx, dword ptr [esp + 0x10]
// 00593adc  89500c               mov dword ptr [eax + 0xc], edx
// 00593adf  8901                 mov dword ptr [ecx], eax
// 00593ae1  8bc1                 mov eax, ecx
// 00593ae3  59                   pop ecx
// 00593ae4  c3                   ret 
// 00593ae5  8b442408             mov eax, dword ptr [esp + 8]
// 00593ae9  33c9                 xor ecx, ecx
// 00593aeb  8908                 mov dword ptr [eax], ecx
// 00593aed  59                   pop ecx
// 00593aee  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
