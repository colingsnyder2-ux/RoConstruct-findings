// roc 2009-12 00537d10  unit: RBX::VAxes::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00537d10
//
// 00537d10  56                   push esi
// 00537d11  6a08                 push 8
// 00537d13  8bf1                 mov esi, ecx
// 00537d15  e846bb2b00           call 0x7f3860
// 00537d1a  83c404               add esp, 4
// 00537d1d  85c0                 test eax, eax
// 00537d1f  740e                 je 0x537d2f
// 00537d21  c700c8d19b00         mov dword ptr [eax], 0x9bd1c8
// 00537d27  8b4e04               mov ecx, dword ptr [esi + 4]
// 00537d2a  894804               mov dword ptr [eax + 4], ecx
// 00537d2d  5e                   pop esi
// 00537d2e  c3                   ret 
// 00537d2f  33c0                 xor eax, eax
// 00537d31  5e                   pop esi
// 00537d32  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
