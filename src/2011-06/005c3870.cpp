// roc 2011-06 005c3870  unit: RBX::TextService::W4Font::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c3870
//
// 005c3870  56                   push esi
// 005c3871  6a08                 push 8
// 005c3873  8bf1                 mov esi, ecx
// 005c3875  e8e4672400           call 0x80a05e
// 005c387a  83c404               add esp, 4
// 005c387d  85c0                 test eax, eax
// 005c387f  740e                 je 0x5c388f
// 005c3881  c70050eca800         mov dword ptr [eax], 0xa8ec50
// 005c3887  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c388a  894804               mov dword ptr [eax + 4], ecx
// 005c388d  5e                   pop esi
// 005c388e  c3                   ret 
// 005c388f  33c0                 xor eax, eax
// 005c3891  5e                   pop esi
// 005c3892  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
