// roc 2009-12 0064e3d0  unit: RBX::PartInstance::W4FormFactor::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064e3d0
//
// 0064e3d0  56                   push esi
// 0064e3d1  6a08                 push 8
// 0064e3d3  8bf1                 mov esi, ecx
// 0064e3d5  e886541a00           call 0x7f3860
// 0064e3da  83c404               add esp, 4
// 0064e3dd  85c0                 test eax, eax
// 0064e3df  740e                 je 0x64e3ef
// 0064e3e1  c7006ccf9c00         mov dword ptr [eax], 0x9ccf6c
// 0064e3e7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064e3ea  894804               mov dword ptr [eax + 4], ecx
// 0064e3ed  5e                   pop esi
// 0064e3ee  c3                   ret 
// 0064e3ef  33c0                 xor eax, eax
// 0064e3f1  5e                   pop esi
// 0064e3f2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
