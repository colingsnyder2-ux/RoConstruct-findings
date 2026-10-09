// roc 2009-12 0064c4e0  unit: RBX::W4KeywordFilterType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064c4e0
//
// 0064c4e0  56                   push esi
// 0064c4e1  6a08                 push 8
// 0064c4e3  8bf1                 mov esi, ecx
// 0064c4e5  e876731a00           call 0x7f3860
// 0064c4ea  83c404               add esp, 4
// 0064c4ed  85c0                 test eax, eax
// 0064c4ef  740e                 je 0x64c4ff
// 0064c4f1  c7008ccd9c00         mov dword ptr [eax], 0x9ccd8c
// 0064c4f7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064c4fa  894804               mov dword ptr [eax + 4], ecx
// 0064c4fd  5e                   pop esi
// 0064c4fe  c3                   ret 
// 0064c4ff  33c0                 xor eax, eax
// 0064c501  5e                   pop esi
// 0064c502  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
