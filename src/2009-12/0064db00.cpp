// roc 2009-12 0064db00  unit: RBX::W4SoundType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064db00
//
// 0064db00  56                   push esi
// 0064db01  6a08                 push 8
// 0064db03  8bf1                 mov esi, ecx
// 0064db05  e8565d1a00           call 0x7f3860
// 0064db0a  83c404               add esp, 4
// 0064db0d  85c0                 test eax, eax
// 0064db0f  740e                 je 0x64db1f
// 0064db11  c700dcce9c00         mov dword ptr [eax], 0x9ccedc
// 0064db17  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064db1a  894804               mov dword ptr [eax + 4], ecx
// 0064db1d  5e                   pop esi
// 0064db1e  c3                   ret 
// 0064db1f  33c0                 xor eax, eax
// 0064db21  5e                   pop esi
// 0064db22  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
