// roc 2011-06 004f4b50  unit: RBX::VFaces::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f4b50
//
// 004f4b50  56                   push esi
// 004f4b51  6a08                 push 8
// 004f4b53  8bf1                 mov esi, ecx
// 004f4b55  e804553100           call 0x80a05e
// 004f4b5a  83c404               add esp, 4
// 004f4b5d  85c0                 test eax, eax
// 004f4b5f  740e                 je 0x4f4b6f
// 004f4b61  c700f4b2a700         mov dword ptr [eax], 0xa7b2f4
// 004f4b67  8b4e04               mov ecx, dword ptr [esi + 4]
// 004f4b6a  894804               mov dword ptr [eax + 4], ecx
// 004f4b6d  5e                   pop esi
// 004f4b6e  c3                   ret 
// 004f4b6f  33c0                 xor eax, eax
// 004f4b71  5e                   pop esi
// 004f4b72  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
