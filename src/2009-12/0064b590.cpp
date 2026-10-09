// roc 2009-12 0064b590  unit: RBX::DataModelMesh::W4LODType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064b590
//
// 0064b590  56                   push esi
// 0064b591  6a08                 push 8
// 0064b593  8bf1                 mov esi, ecx
// 0064b595  e8c6821a00           call 0x7f3860
// 0064b59a  83c404               add esp, 4
// 0064b59d  85c0                 test eax, eax
// 0064b59f  740e                 je 0x64b5af
// 0064b5a1  c7009ccc9c00         mov dword ptr [eax], 0x9ccc9c
// 0064b5a7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064b5aa  894804               mov dword ptr [eax + 4], ecx
// 0064b5ad  5e                   pop esi
// 0064b5ae  c3                   ret 
// 0064b5af  33c0                 xor eax, eax
// 0064b5b1  5e                   pop esi
// 0064b5b2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
