// roc 2011-06 004527a0  unit: RBX::CRenderSettings::W4GraphicsMode::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004527a0
//
// 004527a0  56                   push esi
// 004527a1  6a08                 push 8
// 004527a3  8bf1                 mov esi, ecx
// 004527a5  e8b4783b00           call 0x80a05e
// 004527aa  83c404               add esp, 4
// 004527ad  85c0                 test eax, eax
// 004527af  740e                 je 0x4527bf
// 004527b1  c700accba600         mov dword ptr [eax], 0xa6cbac
// 004527b7  8b4e04               mov ecx, dword ptr [esi + 4]
// 004527ba  894804               mov dword ptr [eax + 4], ecx
// 004527bd  5e                   pop esi
// 004527be  c3                   ret 
// 004527bf  33c0                 xor eax, eax
// 004527c1  5e                   pop esi
// 004527c2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
