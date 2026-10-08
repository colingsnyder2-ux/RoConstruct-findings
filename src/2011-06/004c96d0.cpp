// roc 2011-06 004c96d0  unit: RBX::Network::Players::W4PlayerChatType::?$holder  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004c96d0
//
// 004c96d0  51                   push ecx
// 004c96d1  6a10                 push 0x10
// 004c96d3  c744240400000000     mov dword ptr [esp + 4], 0
// 004c96db  e87e093400           call 0x80a05e
// 004c96e0  83c404               add esp, 4
// 004c96e3  85c0                 test eax, eax
// 004c96e5  741e                 je 0x4c9705
// 004c96e7  c700008aa700         mov dword ptr [eax], 0xa78a00
// 004c96ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c96f1  894808               mov dword ptr [eax + 8], ecx
// 004c96f4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004c96f8  8b542410             mov edx, dword ptr [esp + 0x10]
// 004c96fc  89500c               mov dword ptr [eax + 0xc], edx
// 004c96ff  8901                 mov dword ptr [ecx], eax
// 004c9701  8bc1                 mov eax, ecx
// 004c9703  59                   pop ecx
// 004c9704  c3                   ret 
// 004c9705  8b442408             mov eax, dword ptr [esp + 8]
// 004c9709  33c9                 xor ecx, ecx
// 004c970b  8908                 mov dword ptr [eax], ecx
// 004c970d  59                   pop ecx
// 004c970e  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
