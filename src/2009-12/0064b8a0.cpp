// roc 2009-12 0064b8a0  unit: RBX::Feature::W4InOut::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064b8a0
//
// 0064b8a0  56                   push esi
// 0064b8a1  6a08                 push 8
// 0064b8a3  8bf1                 mov esi, ecx
// 0064b8a5  e8b67f1a00           call 0x7f3860
// 0064b8aa  83c404               add esp, 4
// 0064b8ad  85c0                 test eax, eax
// 0064b8af  740e                 je 0x64b8bf
// 0064b8b1  c700cccc9c00         mov dword ptr [eax], 0x9ccccc
// 0064b8b7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064b8ba  894804               mov dword ptr [eax + 4], ecx
// 0064b8bd  5e                   pop esi
// 0064b8be  c3                   ret 
// 0064b8bf  33c0                 xor eax, eax
// 0064b8c1  5e                   pop esi
// 0064b8c2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
