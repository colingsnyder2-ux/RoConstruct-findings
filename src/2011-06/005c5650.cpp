// roc 2011-06 005c5650  unit: RBX::Humanoid::W4Status::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c5650
//
// 005c5650  56                   push esi
// 005c5651  6a08                 push 8
// 005c5653  8bf1                 mov esi, ecx
// 005c5655  e8044a2400           call 0x80a05e
// 005c565a  83c404               add esp, 4
// 005c565d  85c0                 test eax, eax
// 005c565f  740e                 je 0x5c566f
// 005c5661  c70060eea800         mov dword ptr [eax], 0xa8ee60
// 005c5667  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c566a  894804               mov dword ptr [eax + 4], ecx
// 005c566d  5e                   pop esi
// 005c566e  c3                   ret 
// 005c566f  33c0                 xor eax, eax
// 005c5671  5e                   pop esi
// 005c5672  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
