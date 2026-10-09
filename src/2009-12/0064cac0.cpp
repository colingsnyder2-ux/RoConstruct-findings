// roc 2009-12 0064cac0  unit: G3D::Vector3::W4Axis::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064cac0
//
// 0064cac0  56                   push esi
// 0064cac1  6a08                 push 8
// 0064cac3  8bf1                 mov esi, ecx
// 0064cac5  e8966d1a00           call 0x7f3860
// 0064caca  83c404               add esp, 4
// 0064cacd  85c0                 test eax, eax
// 0064cacf  740e                 je 0x64cadf
// 0064cad1  c700eccd9c00         mov dword ptr [eax], 0x9ccdec
// 0064cad7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064cada  894804               mov dword ptr [eax + 4], ecx
// 0064cadd  5e                   pop esi
// 0064cade  c3                   ret 
// 0064cadf  33c0                 xor eax, eax
// 0064cae1  5e                   pop esi
// 0064cae2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
