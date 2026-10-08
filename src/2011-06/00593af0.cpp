// roc 2011-06 00593af0  unit: RBX::Instance::AncestryChangedSignalData  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00593af0
//
// 00593af0  51                   push ecx
// 00593af1  6a10                 push 0x10
// 00593af3  c744240400000000     mov dword ptr [esp + 4], 0
// 00593afb  e85e652700           call 0x80a05e
// 00593b00  83c404               add esp, 4
// 00593b03  85c0                 test eax, eax
// 00593b05  741e                 je 0x593b25
// 00593b07  c700049da800         mov dword ptr [eax], 0xa89d04
// 00593b0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00593b11  894808               mov dword ptr [eax + 8], ecx
// 00593b14  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00593b18  8b542410             mov edx, dword ptr [esp + 0x10]
// 00593b1c  89500c               mov dword ptr [eax + 0xc], edx
// 00593b1f  8901                 mov dword ptr [ecx], eax
// 00593b21  8bc1                 mov eax, ecx
// 00593b23  59                   pop ecx
// 00593b24  c3                   ret 
// 00593b25  8b442408             mov eax, dword ptr [esp + 8]
// 00593b29  33c9                 xor ecx, ecx
// 00593b2b  8908                 mov dword ptr [eax], ecx
// 00593b2d  59                   pop ecx
// 00593b2e  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
