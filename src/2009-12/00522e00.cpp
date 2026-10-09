// roc 2009-12 00522e00  unit: W4PacketReliability::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00522e00
//
// 00522e00  56                   push esi
// 00522e01  6a08                 push 8
// 00522e03  8bf1                 mov esi, ecx
// 00522e05  e8560a2d00           call 0x7f3860
// 00522e0a  83c404               add esp, 4
// 00522e0d  85c0                 test eax, eax
// 00522e0f  740e                 je 0x522e1f
// 00522e11  c700f4b99b00         mov dword ptr [eax], 0x9bb9f4
// 00522e17  8b4e04               mov ecx, dword ptr [esi + 4]
// 00522e1a  894804               mov dword ptr [eax + 4], ecx
// 00522e1d  5e                   pop esi
// 00522e1e  c3                   ret 
// 00522e1f  33c0                 xor eax, eax
// 00522e21  5e                   pop esi
// 00522e22  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
