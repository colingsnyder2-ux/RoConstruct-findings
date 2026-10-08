// roc 2011-06 005c2250  unit: RBX::HopperBin::W4BinType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c2250
//
// 005c2250  56                   push esi
// 005c2251  6a08                 push 8
// 005c2253  8bf1                 mov esi, ecx
// 005c2255  e8047e2400           call 0x80a05e
// 005c225a  83c404               add esp, 4
// 005c225d  85c0                 test eax, eax
// 005c225f  740e                 je 0x5c226f
// 005c2261  c700d0eaa800         mov dword ptr [eax], 0xa8ead0
// 005c2267  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c226a  894804               mov dword ptr [eax + 4], ecx
// 005c226d  5e                   pop esi
// 005c226e  c3                   ret 
// 005c226f  33c0                 xor eax, eax
// 005c2271  5e                   pop esi
// 005c2272  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
