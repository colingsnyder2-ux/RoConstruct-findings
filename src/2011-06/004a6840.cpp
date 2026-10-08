// roc 2011-06 004a6840  unit: RBX::VBrickColor::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a6840
//
// 004a6840  56                   push esi
// 004a6841  6a08                 push 8
// 004a6843  8bf1                 mov esi, ecx
// 004a6845  e814383600           call 0x80a05e
// 004a684a  83c404               add esp, 4
// 004a684d  85c0                 test eax, eax
// 004a684f  740e                 je 0x4a685f
// 004a6851  c700b06ea700         mov dword ptr [eax], 0xa76eb0
// 004a6857  8b4e04               mov ecx, dword ptr [esi + 4]
// 004a685a  894804               mov dword ptr [eax + 4], ecx
// 004a685d  5e                   pop esi
// 004a685e  c3                   ret 
// 004a685f  33c0                 xor eax, eax
// 004a6861  5e                   pop esi
// 004a6862  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
