// roc 2009-06 004400d0  unit: G3D::VVector2int16::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004400d0
//
// 004400d0  56                   push esi
// 004400d1  6a08                 push 8
// 004400d3  8bf1                 mov esi, ecx
// 004400d5  e85e892d00           call 0x718a38
// 004400da  83c404               add esp, 4
// 004400dd  85c0                 test eax, eax
// 004400df  740e                 je 0x4400ef
// 004400e1  c70038628b00         mov dword ptr [eax], 0x8b6238
// 004400e7  8b4e04               mov ecx, dword ptr [esi + 4]
// 004400ea  894804               mov dword ptr [eax + 4], ecx
// 004400ed  5e                   pop esi
// 004400ee  c3                   ret 
// 004400ef  33c0                 xor eax, eax
// 004400f1  5e                   pop esi
// 004400f2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
