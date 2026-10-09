// roc 2009-12 0064a9d0  unit: RBX::GuiText::W4XAlignment::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064a9d0
//
// 0064a9d0  56                   push esi
// 0064a9d1  6a08                 push 8
// 0064a9d3  8bf1                 mov esi, ecx
// 0064a9d5  e8868e1a00           call 0x7f3860
// 0064a9da  83c404               add esp, 4
// 0064a9dd  85c0                 test eax, eax
// 0064a9df  740e                 je 0x64a9ef
// 0064a9e1  c700dccb9c00         mov dword ptr [eax], 0x9ccbdc
// 0064a9e7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064a9ea  894804               mov dword ptr [eax + 4], ecx
// 0064a9ed  5e                   pop esi
// 0064a9ee  c3                   ret 
// 0064a9ef  33c0                 xor eax, eax
// 0064a9f1  5e                   pop esi
// 0064a9f2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
