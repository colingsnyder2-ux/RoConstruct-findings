// roc 2008-06 004455e0  unit: G3D::VVector2int16::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004455e0
//
// 004455e0  56                   push esi
// 004455e1  6a08                 push 8
// 004455e3  8bf1                 mov esi, ecx
// 004455e5  e836b32500           call 0x6a0920
// 004455ea  83c404               add esp, 4
// 004455ed  85c0                 test eax, eax
// 004455ef  740e                 je 0x4455ff
// 004455f1  c700c45d8100         mov dword ptr [eax], 0x815dc4
// 004455f7  8b4e04               mov ecx, dword ptr [esi + 4]
// 004455fa  894804               mov dword ptr [eax + 4], ecx
// 004455fd  5e                   pop esi
// 004455fe  c3                   ret 
// 004455ff  33c0                 xor eax, eax
// 00445601  5e                   pop esi
// 00445602  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
