// roc 2009-12 0064d230  unit: RBX::BasicPartInstance::W4LegacyPartType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064d230
//
// 0064d230  56                   push esi
// 0064d231  6a08                 push 8
// 0064d233  8bf1                 mov esi, ecx
// 0064d235  e826661a00           call 0x7f3860
// 0064d23a  83c404               add esp, 4
// 0064d23d  85c0                 test eax, eax
// 0064d23f  740e                 je 0x64d24f
// 0064d241  c7004cce9c00         mov dword ptr [eax], 0x9cce4c
// 0064d247  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064d24a  894804               mov dword ptr [eax + 4], ecx
// 0064d24d  5e                   pop esi
// 0064d24e  c3                   ret 
// 0064d24f  33c0                 xor eax, eax
// 0064d251  5e                   pop esi
// 0064d252  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
