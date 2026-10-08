// roc 2011-06 007374a0  unit: RBX::Network::P8Player::?$GetImpl  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007374a0
//
// 007374a0  51                   push ecx
// 007374a1  6a10                 push 0x10
// 007374a3  c744240400000000     mov dword ptr [esp + 4], 0
// 007374ab  e8ae2b0d00           call 0x80a05e
// 007374b0  83c404               add esp, 4
// 007374b3  85c0                 test eax, eax
// 007374b5  741e                 je 0x7374d5
// 007374b7  c7007040ab00         mov dword ptr [eax], 0xab4070
// 007374bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007374c1  894808               mov dword ptr [eax + 8], ecx
// 007374c4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007374c8  8b542410             mov edx, dword ptr [esp + 0x10]
// 007374cc  89500c               mov dword ptr [eax + 0xc], edx
// 007374cf  8901                 mov dword ptr [ecx], eax
// 007374d1  8bc1                 mov eax, ecx
// 007374d3  59                   pop ecx
// 007374d4  c3                   ret 
// 007374d5  8b442408             mov eax, dword ptr [esp + 8]
// 007374d9  33c9                 xor ecx, ecx
// 007374db  8908                 mov dword ptr [eax], ecx
// 007374dd  59                   pop ecx
// 007374de  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
