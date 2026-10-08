// roc 2010-06 00445b50  unit: G3D::VVector2int16::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00445b50
//
// 00445b50  56                   push esi
// 00445b51  6a08                 push 8
// 00445b53  8bf1                 mov esi, ecx
// 00445b55  e8461e3600           call 0x7a79a0
// 00445b5a  83c404               add esp, 4
// 00445b5d  85c0                 test eax, eax
// 00445b5f  740e                 je 0x445b6f
// 00445b61  c7005cb0a000         mov dword ptr [eax], 0xa0b05c
// 00445b67  8b4e04               mov ecx, dword ptr [esi + 4]
// 00445b6a  894804               mov dword ptr [eax + 4], ecx
// 00445b6d  5e                   pop esi
// 00445b6e  c3                   ret 
// 00445b6f  33c0                 xor eax, eax
// 00445b71  5e                   pop esi
// 00445b72  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
