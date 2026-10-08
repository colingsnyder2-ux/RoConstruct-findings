// roc 2011-06 004c87c0  unit: RBX::Network::Players::W4ChatOption::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004c87c0
//
// 004c87c0  56                   push esi
// 004c87c1  6a08                 push 8
// 004c87c3  8bf1                 mov esi, ecx
// 004c87c5  e894183400           call 0x80a05e
// 004c87ca  83c404               add esp, 4
// 004c87cd  85c0                 test eax, eax
// 004c87cf  740e                 je 0x4c87df
// 004c87d1  c700508aa700         mov dword ptr [eax], 0xa78a50
// 004c87d7  8b4e04               mov ecx, dword ptr [esi + 4]
// 004c87da  894804               mov dword ptr [eax + 4], ecx
// 004c87dd  5e                   pop esi
// 004c87de  c3                   ret 
// 004c87df  33c0                 xor eax, eax
// 004c87e1  5e                   pop esi
// 004c87e2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
