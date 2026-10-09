// roc 2009-12 0064e0e0  unit: RBX::W4SurfaceType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064e0e0
//
// 0064e0e0  56                   push esi
// 0064e0e1  6a08                 push 8
// 0064e0e3  8bf1                 mov esi, ecx
// 0064e0e5  e876571a00           call 0x7f3860
// 0064e0ea  83c404               add esp, 4
// 0064e0ed  85c0                 test eax, eax
// 0064e0ef  740e                 je 0x64e0ff
// 0064e0f1  c7003ccf9c00         mov dword ptr [eax], 0x9ccf3c
// 0064e0f7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064e0fa  894804               mov dword ptr [eax + 4], ecx
// 0064e0fd  5e                   pop esi
// 0064e0fe  c3                   ret 
// 0064e0ff  33c0                 xor eax, eax
// 0064e101  5e                   pop esi
// 0064e102  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
