// roc 2008-06 004973b0  unit: RBX::Network::Players  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004973b0
//
// 004973b0  51                   push ecx
// 004973b1  6a10                 push 0x10
// 004973b3  c744240400000000     mov dword ptr [esp + 4], 0
// 004973bb  e860952000           call 0x6a0920
// 004973c0  83c404               add esp, 4
// 004973c3  85c0                 test eax, eax
// 004973c5  741e                 je 0x4973e5
// 004973c7  c700f0268200         mov dword ptr [eax], 0x8226f0
// 004973cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004973d1  894808               mov dword ptr [eax + 8], ecx
// 004973d4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004973d8  8b542410             mov edx, dword ptr [esp + 0x10]
// 004973dc  89500c               mov dword ptr [eax + 0xc], edx
// 004973df  8901                 mov dword ptr [ecx], eax
// 004973e1  8bc1                 mov eax, ecx
// 004973e3  59                   pop ecx
// 004973e4  c3                   ret 
// 004973e5  8b442408             mov eax, dword ptr [esp + 8]
// 004973e9  33c9                 xor ecx, ecx
// 004973eb  8908                 mov dword ptr [eax], ecx
// 004973ed  59                   pop ecx
// 004973ee  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
