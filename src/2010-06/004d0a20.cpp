// roc 2010-06 004d0a20  unit: W4PacketReliability::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004d0a20
//
// 004d0a20  56                   push esi
// 004d0a21  6a08                 push 8
// 004d0a23  8bf1                 mov esi, ecx
// 004d0a25  e8766f2d00           call 0x7a79a0
// 004d0a2a  83c404               add esp, 4
// 004d0a2d  85c0                 test eax, eax
// 004d0a2f  740e                 je 0x4d0a3f
// 004d0a31  c700d497a100         mov dword ptr [eax], 0xa197d4
// 004d0a37  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d0a3a  894804               mov dword ptr [eax + 4], ecx
// 004d0a3d  5e                   pop esi
// 004d0a3e  c3                   ret 
// 004d0a3f  33c0                 xor eax, eax
// 004d0a41  5e                   pop esi
// 004d0a42  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
