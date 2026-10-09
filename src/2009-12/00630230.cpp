// roc 2009-12 00630230  unit: RBX::EThrottle::W4EThrottleType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00630230
//
// 00630230  56                   push esi
// 00630231  6a08                 push 8
// 00630233  8bf1                 mov esi, ecx
// 00630235  e826361c00           call 0x7f3860
// 0063023a  83c404               add esp, 4
// 0063023d  85c0                 test eax, eax
// 0063023f  740e                 je 0x63024f
// 00630241  c700a8b49c00         mov dword ptr [eax], 0x9cb4a8
// 00630247  8b4e04               mov ecx, dword ptr [esi + 4]
// 0063024a  894804               mov dword ptr [eax + 4], ecx
// 0063024d  5e                   pop esi
// 0063024e  c3                   ret 
// 0063024f  33c0                 xor eax, eax
// 00630251  5e                   pop esi
// 00630252  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
