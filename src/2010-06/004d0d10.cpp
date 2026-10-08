// roc 2010-06 004d0d10  unit: RBX::NetworkSettings::W4PhysicsSendMethod::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004d0d10
//
// 004d0d10  56                   push esi
// 004d0d11  6a08                 push 8
// 004d0d13  8bf1                 mov esi, ecx
// 004d0d15  e8866c2d00           call 0x7a79a0
// 004d0d1a  83c404               add esp, 4
// 004d0d1d  85c0                 test eax, eax
// 004d0d1f  740e                 je 0x4d0d2f
// 004d0d21  c7000498a100         mov dword ptr [eax], 0xa19804
// 004d0d27  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d0d2a  894804               mov dword ptr [eax + 4], ecx
// 004d0d2d  5e                   pop esi
// 004d0d2e  c3                   ret 
// 004d0d2f  33c0                 xor eax, eax
// 004d0d31  5e                   pop esi
// 004d0d32  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
