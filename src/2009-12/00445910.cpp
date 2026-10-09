// roc 2009-12 00445910  unit: RBX::CRenderSettings::W4AASamples::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00445910
//
// 00445910  56                   push esi
// 00445911  6a08                 push 8
// 00445913  8bf1                 mov esi, ecx
// 00445915  e846df3a00           call 0x7f3860
// 0044591a  83c404               add esp, 4
// 0044591d  85c0                 test eax, eax
// 0044591f  740e                 je 0x44592f
// 00445921  c70018a39a00         mov dword ptr [eax], 0x9aa318
// 00445927  8b4e04               mov ecx, dword ptr [esi + 4]
// 0044592a  894804               mov dword ptr [eax + 4], ecx
// 0044592d  5e                   pop esi
// 0044592e  c3                   ret 
// 0044592f  33c0                 xor eax, eax
// 00445931  5e                   pop esi
// 00445932  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
