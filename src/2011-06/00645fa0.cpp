// roc 2011-06 00645fa0  unit: RBX::VPlayerGui::?$FactoryProduct  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00645fa0
//
// 00645fa0  51                   push ecx
// 00645fa1  6a10                 push 0x10
// 00645fa3  c744240400000000     mov dword ptr [esp + 4], 0
// 00645fab  e8ae401c00           call 0x80a05e
// 00645fb0  83c404               add esp, 4
// 00645fb3  85c0                 test eax, eax
// 00645fb5  741e                 je 0x645fd5
// 00645fb7  c700a884a900         mov dword ptr [eax], 0xa984a8
// 00645fbd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00645fc1  894808               mov dword ptr [eax + 8], ecx
// 00645fc4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00645fc8  8b542410             mov edx, dword ptr [esp + 0x10]
// 00645fcc  89500c               mov dword ptr [eax + 0xc], edx
// 00645fcf  8901                 mov dword ptr [ecx], eax
// 00645fd1  8bc1                 mov eax, ecx
// 00645fd3  59                   pop ecx
// 00645fd4  c3                   ret 
// 00645fd5  8b442408             mov eax, dword ptr [esp + 8]
// 00645fd9  33c9                 xor ecx, ecx
// 00645fdb  8908                 mov dword ptr [eax], ecx
// 00645fdd  59                   pop ecx
// 00645fde  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
