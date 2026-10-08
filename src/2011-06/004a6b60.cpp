// roc 2011-06 004a6b60  unit: RBX::VBrickColor::?$holder  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a6b60
//
// 004a6b60  51                   push ecx
// 004a6b61  6a10                 push 0x10
// 004a6b63  c744240400000000     mov dword ptr [esp + 4], 0
// 004a6b6b  e8ee343600           call 0x80a05e
// 004a6b70  83c404               add esp, 4
// 004a6b73  85c0                 test eax, eax
// 004a6b75  741e                 je 0x4a6b95
// 004a6b77  c700d46ba700         mov dword ptr [eax], 0xa76bd4
// 004a6b7d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a6b81  894808               mov dword ptr [eax + 8], ecx
// 004a6b84  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a6b88  8b542410             mov edx, dword ptr [esp + 0x10]
// 004a6b8c  89500c               mov dword ptr [eax + 0xc], edx
// 004a6b8f  8901                 mov dword ptr [ecx], eax
// 004a6b91  8bc1                 mov eax, ecx
// 004a6b93  59                   pop ecx
// 004a6b94  c3                   ret 
// 004a6b95  8b442408             mov eax, dword ptr [esp + 8]
// 004a6b99  33c9                 xor ecx, ecx
// 004a6b9b  8908                 mov dword ptr [eax], ecx
// 004a6b9d  59                   pop ecx
// 004a6b9e  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
