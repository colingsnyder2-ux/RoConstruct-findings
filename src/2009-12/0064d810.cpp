// roc 2009-12 0064d810  unit: RBX::Handles::W4VisualStyle::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064d810
//
// 0064d810  56                   push esi
// 0064d811  6a08                 push 8
// 0064d813  8bf1                 mov esi, ecx
// 0064d815  e846601a00           call 0x7f3860
// 0064d81a  83c404               add esp, 4
// 0064d81d  85c0                 test eax, eax
// 0064d81f  740e                 je 0x64d82f
// 0064d821  c700acce9c00         mov dword ptr [eax], 0x9cceac
// 0064d827  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064d82a  894804               mov dword ptr [eax + 4], ecx
// 0064d82d  5e                   pop esi
// 0064d82e  c3                   ret 
// 0064d82f  33c0                 xor eax, eax
// 0064d831  5e                   pop esi
// 0064d832  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
