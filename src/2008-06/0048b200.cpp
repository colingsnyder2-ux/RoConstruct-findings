// roc 2008-06 0048b200  unit: RBX::VBrickColor::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048b200
//
// 0048b200  56                   push esi
// 0048b201  6a08                 push 8
// 0048b203  8bf1                 mov esi, ecx
// 0048b205  e816572100           call 0x6a0920
// 0048b20a  83c404               add esp, 4
// 0048b20d  85c0                 test eax, eax
// 0048b20f  740e                 je 0x48b21f
// 0048b211  c700c4168200         mov dword ptr [eax], 0x8216c4
// 0048b217  8b4e04               mov ecx, dword ptr [esi + 4]
// 0048b21a  894804               mov dword ptr [eax + 4], ecx
// 0048b21d  5e                   pop esi
// 0048b21e  c3                   ret 
// 0048b21f  33c0                 xor eax, eax
// 0048b221  5e                   pop esi
// 0048b222  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
