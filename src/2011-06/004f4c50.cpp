// roc 2011-06 004f4c50  unit: G3D::VVector2int16::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f4c50
//
// 004f4c50  56                   push esi
// 004f4c51  6a08                 push 8
// 004f4c53  8bf1                 mov esi, ecx
// 004f4c55  e804543100           call 0x80a05e
// 004f4c5a  83c404               add esp, 4
// 004f4c5d  85c0                 test eax, eax
// 004f4c5f  740e                 je 0x4f4c6f
// 004f4c61  c70034b3a700         mov dword ptr [eax], 0xa7b334
// 004f4c67  8b4e04               mov ecx, dword ptr [esi + 4]
// 004f4c6a  894804               mov dword ptr [eax + 4], ecx
// 004f4c6d  5e                   pop esi
// 004f4c6e  c3                   ret 
// 004f4c6f  33c0                 xor eax, eax
// 004f4c71  5e                   pop esi
// 004f4c72  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
