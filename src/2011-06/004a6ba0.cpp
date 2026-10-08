// roc 2011-06 004a6ba0  unit: RBX::VBrickColor::?$holder  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a6ba0
//
// 004a6ba0  51                   push ecx
// 004a6ba1  6a10                 push 0x10
// 004a6ba3  c744240400000000     mov dword ptr [esp + 4], 0
// 004a6bab  e8ae343600           call 0x80a05e
// 004a6bb0  83c404               add esp, 4
// 004a6bb3  85c0                 test eax, eax
// 004a6bb5  741e                 je 0x4a6bd5
// 004a6bb7  c7009c6da700         mov dword ptr [eax], 0xa76d9c
// 004a6bbd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a6bc1  894808               mov dword ptr [eax + 8], ecx
// 004a6bc4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a6bc8  8b542410             mov edx, dword ptr [esp + 0x10]
// 004a6bcc  89500c               mov dword ptr [eax + 0xc], edx
// 004a6bcf  8901                 mov dword ptr [ecx], eax
// 004a6bd1  8bc1                 mov eax, ecx
// 004a6bd3  59                   pop ecx
// 004a6bd4  c3                   ret 
// 004a6bd5  8b442408             mov eax, dword ptr [esp + 8]
// 004a6bd9  33c9                 xor ecx, ecx
// 004a6bdb  8908                 mov dword ptr [eax], ecx
// 004a6bdd  59                   pop ecx
// 004a6bde  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
