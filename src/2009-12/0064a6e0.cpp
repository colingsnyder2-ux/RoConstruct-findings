// roc 2009-12 0064a6e0  unit: RBX::GuiObject::W4SizeConstraint::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064a6e0
//
// 0064a6e0  56                   push esi
// 0064a6e1  6a08                 push 8
// 0064a6e3  8bf1                 mov esi, ecx
// 0064a6e5  e876911a00           call 0x7f3860
// 0064a6ea  83c404               add esp, 4
// 0064a6ed  85c0                 test eax, eax
// 0064a6ef  740e                 je 0x64a6ff
// 0064a6f1  c700accb9c00         mov dword ptr [eax], 0x9ccbac
// 0064a6f7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064a6fa  894804               mov dword ptr [eax + 4], ecx
// 0064a6fd  5e                   pop esi
// 0064a6fe  c3                   ret 
// 0064a6ff  33c0                 xor eax, eax
// 0064a701  5e                   pop esi
// 0064a702  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
