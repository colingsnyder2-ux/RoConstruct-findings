// roc 2010-06 005900e0  unit: RBX::Time::W4SampleMethod::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005900e0
//
// 005900e0  56                   push esi
// 005900e1  6a08                 push 8
// 005900e3  8bf1                 mov esi, ecx
// 005900e5  e8b6782100           call 0x7a79a0
// 005900ea  83c404               add esp, 4
// 005900ed  85c0                 test eax, eax
// 005900ef  740e                 je 0x5900ff
// 005900f1  c7009c8ea200         mov dword ptr [eax], 0xa28e9c
// 005900f7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005900fa  894804               mov dword ptr [eax + 4], ecx
// 005900fd  5e                   pop esi
// 005900fe  c3                   ret 
// 005900ff  33c0                 xor eax, eax
// 00590101  5e                   pop esi
// 00590102  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
