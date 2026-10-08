// roc 2011-06 004c97a0  unit: RBX::Network::Players::W4PlayerChatType::?$holder  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004c97a0
//
// 004c97a0  51                   push ecx
// 004c97a1  6a10                 push 0x10
// 004c97a3  c744240400000000     mov dword ptr [esp + 4], 0
// 004c97ab  e8ae083400           call 0x80a05e
// 004c97b0  83c404               add esp, 4
// 004c97b3  85c0                 test eax, eax
// 004c97b5  741e                 je 0x4c97d5
// 004c97b7  c7003c8aa700         mov dword ptr [eax], 0xa78a3c
// 004c97bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c97c1  894808               mov dword ptr [eax + 8], ecx
// 004c97c4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004c97c8  8b542410             mov edx, dword ptr [esp + 0x10]
// 004c97cc  89500c               mov dword ptr [eax + 0xc], edx
// 004c97cf  8901                 mov dword ptr [ecx], eax
// 004c97d1  8bc1                 mov eax, ecx
// 004c97d3  59                   pop ecx
// 004c97d4  c3                   ret 
// 004c97d5  8b442408             mov eax, dword ptr [esp + 8]
// 004c97d9  33c9                 xor ecx, ecx
// 004c97db  8908                 mov dword ptr [eax], ecx
// 004c97dd  59                   pop ecx
// 004c97de  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
