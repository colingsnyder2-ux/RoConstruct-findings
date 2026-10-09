// roc 2009-12 006b60a0  unit: RBX::Soundscape::W4ReverbType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006b60a0
//
// 006b60a0  56                   push esi
// 006b60a1  6a08                 push 8
// 006b60a3  8bf1                 mov esi, ecx
// 006b60a5  e8b6d71300           call 0x7f3860
// 006b60aa  83c404               add esp, 4
// 006b60ad  85c0                 test eax, eax
// 006b60af  740e                 je 0x6b60bf
// 006b60b1  c7007c5e9d00         mov dword ptr [eax], 0x9d5e7c
// 006b60b7  8b4e04               mov ecx, dword ptr [esi + 4]
// 006b60ba  894804               mov dword ptr [eax + 4], ecx
// 006b60bd  5e                   pop esi
// 006b60be  c3                   ret 
// 006b60bf  33c0                 xor eax, eax
// 006b60c1  5e                   pop esi
// 006b60c2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
