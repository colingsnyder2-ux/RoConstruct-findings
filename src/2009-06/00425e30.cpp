// roc 2009-06 00425e30  unit: boost::any::H::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00425e30
//
// 00425e30  56                   push esi
// 00425e31  6a08                 push 8
// 00425e33  8bf1                 mov esi, ecx
// 00425e35  e8fe2b2f00           call 0x718a38
// 00425e3a  83c404               add esp, 4
// 00425e3d  85c0                 test eax, eax
// 00425e3f  740e                 je 0x425e4f
// 00425e41  c700b00c8b00         mov dword ptr [eax], 0x8b0cb0
// 00425e47  8b4e04               mov ecx, dword ptr [esi + 4]
// 00425e4a  894804               mov dword ptr [eax + 4], ecx
// 00425e4d  5e                   pop esi
// 00425e4e  c3                   ret 
// 00425e4f  33c0                 xor eax, eax
// 00425e51  5e                   pop esi
// 00425e52  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
