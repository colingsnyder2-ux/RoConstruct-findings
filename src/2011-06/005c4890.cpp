// roc 2011-06 005c4890  unit: RBX::Feature::W4TopBottom::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c4890
//
// 005c4890  56                   push esi
// 005c4891  6a08                 push 8
// 005c4893  8bf1                 mov esi, ecx
// 005c4895  e8c4572400           call 0x80a05e
// 005c489a  83c404               add esp, 4
// 005c489d  85c0                 test eax, eax
// 005c489f  740e                 je 0x5c48af
// 005c48a1  c70070eda800         mov dword ptr [eax], 0xa8ed70
// 005c48a7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c48aa  894804               mov dword ptr [eax + 4], ecx
// 005c48ad  5e                   pop esi
// 005c48ae  c3                   ret 
// 005c48af  33c0                 xor eax, eax
// 005c48b1  5e                   pop esi
// 005c48b2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
