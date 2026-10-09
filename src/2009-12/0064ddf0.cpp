// roc 2009-12 0064ddf0  unit: RBX::SpecialShape::W4MeshType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064ddf0
//
// 0064ddf0  56                   push esi
// 0064ddf1  6a08                 push 8
// 0064ddf3  8bf1                 mov esi, ecx
// 0064ddf5  e8665a1a00           call 0x7f3860
// 0064ddfa  83c404               add esp, 4
// 0064ddfd  85c0                 test eax, eax
// 0064ddff  740e                 je 0x64de0f
// 0064de01  c7000ccf9c00         mov dword ptr [eax], 0x9ccf0c
// 0064de07  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064de0a  894804               mov dword ptr [eax + 4], ecx
// 0064de0d  5e                   pop esi
// 0064de0e  c3                   ret 
// 0064de0f  33c0                 xor eax, eax
// 0064de11  5e                   pop esi
// 0064de12  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
