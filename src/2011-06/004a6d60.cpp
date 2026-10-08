// roc 2011-06 004a6d60  unit: RBX::VBrickColor::?$holder  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a6d60
//
// 004a6d60  51                   push ecx
// 004a6d61  6a10                 push 0x10
// 004a6d63  c744240400000000     mov dword ptr [esp + 4], 0
// 004a6d6b  e8ee323600           call 0x80a05e
// 004a6d70  83c404               add esp, 4
// 004a6d73  85c0                 test eax, eax
// 004a6d75  741e                 je 0x4a6d95
// 004a6d77  c700006ea700         mov dword ptr [eax], 0xa76e00
// 004a6d7d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a6d81  894808               mov dword ptr [eax + 8], ecx
// 004a6d84  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a6d88  8b542410             mov edx, dword ptr [esp + 0x10]
// 004a6d8c  89500c               mov dword ptr [eax + 0xc], edx
// 004a6d8f  8901                 mov dword ptr [ecx], eax
// 004a6d91  8bc1                 mov eax, ecx
// 004a6d93  59                   pop ecx
// 004a6d94  c3                   ret 
// 004a6d95  8b442408             mov eax, dword ptr [esp + 8]
// 004a6d99  33c9                 xor ecx, ecx
// 004a6d9b  8908                 mov dword ptr [eax], ecx
// 004a6d9d  59                   pop ecx
// 004a6d9e  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
