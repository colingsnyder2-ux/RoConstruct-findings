// roc 2011-06 004f6da0  unit: RBX::VRbxRay::?$holder  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f6da0
//
// 004f6da0  51                   push ecx
// 004f6da1  6a10                 push 0x10
// 004f6da3  c744240400000000     mov dword ptr [esp + 4], 0
// 004f6dab  e8ae323100           call 0x80a05e
// 004f6db0  83c404               add esp, 4
// 004f6db3  85c0                 test eax, eax
// 004f6db5  741e                 je 0x4f6dd5
// 004f6db7  c7000cb4a700         mov dword ptr [eax], 0xa7b40c
// 004f6dbd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004f6dc1  894808               mov dword ptr [eax + 8], ecx
// 004f6dc4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004f6dc8  8b542410             mov edx, dword ptr [esp + 0x10]
// 004f6dcc  89500c               mov dword ptr [eax + 0xc], edx
// 004f6dcf  8901                 mov dword ptr [ecx], eax
// 004f6dd1  8bc1                 mov eax, ecx
// 004f6dd3  59                   pop ecx
// 004f6dd4  c3                   ret 
// 004f6dd5  8b442408             mov eax, dword ptr [esp + 8]
// 004f6dd9  33c9                 xor ecx, ecx
// 004f6ddb  8908                 mov dword ptr [eax], ecx
// 004f6ddd  59                   pop ecx
// 004f6dde  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
