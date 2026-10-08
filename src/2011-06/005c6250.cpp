// roc 2011-06 005c6250  unit: RBX::DataModel::W4GearType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c6250
//
// 005c6250  56                   push esi
// 005c6251  6a08                 push 8
// 005c6253  8bf1                 mov esi, ecx
// 005c6255  e8043e2400           call 0x80a05e
// 005c625a  83c404               add esp, 4
// 005c625d  85c0                 test eax, eax
// 005c625f  740e                 je 0x5c626f
// 005c6261  c70020efa800         mov dword ptr [eax], 0xa8ef20
// 005c6267  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c626a  894804               mov dword ptr [eax + 4], ecx
// 005c626d  5e                   pop esi
// 005c626e  c3                   ret 
// 005c626f  33c0                 xor eax, eax
// 005c6271  5e                   pop esi
// 005c6272  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
