// roc 2009-06 00663030  unit: RBX::W4SurfaceType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00663030
//
// 00663030  56                   push esi
// 00663031  6a08                 push 8
// 00663033  8bf1                 mov esi, ecx
// 00663035  e8fe590b00           call 0x718a38
// 0066303a  83c404               add esp, 4
// 0066303d  85c0                 test eax, eax
// 0066303f  740e                 je 0x66304f
// 00663041  c700d41b8e00         mov dword ptr [eax], 0x8e1bd4
// 00663047  8b4e04               mov ecx, dword ptr [esi + 4]
// 0066304a  894804               mov dword ptr [eax + 4], ecx
// 0066304d  5e                   pop esi
// 0066304e  c3                   ret 
// 0066304f  33c0                 xor eax, eax
// 00663051  5e                   pop esi
// 00663052  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
