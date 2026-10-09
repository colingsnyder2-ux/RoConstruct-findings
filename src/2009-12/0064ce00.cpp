// roc 2009-12 0064ce00  unit: RBX::Humanoid::W4Status::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064ce00
//
// 0064ce00  56                   push esi
// 0064ce01  6a08                 push 8
// 0064ce03  8bf1                 mov esi, ecx
// 0064ce05  e8566a1a00           call 0x7f3860
// 0064ce0a  83c404               add esp, 4
// 0064ce0d  85c0                 test eax, eax
// 0064ce0f  740e                 je 0x64ce1f
// 0064ce11  c7001cce9c00         mov dword ptr [eax], 0x9cce1c
// 0064ce17  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064ce1a  894804               mov dword ptr [eax + 4], ecx
// 0064ce1d  5e                   pop esi
// 0064ce1e  c3                   ret 
// 0064ce1f  33c0                 xor eax, eax
// 0064ce21  5e                   pop esi
// 0064ce22  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
