// roc 2011-06 0040b870  unit: boost::any::H::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0040b870
//
// 0040b870  56                   push esi
// 0040b871  6a08                 push 8
// 0040b873  8bf1                 mov esi, ecx
// 0040b875  e8e4e73f00           call 0x80a05e
// 0040b87a  83c404               add esp, 4
// 0040b87d  85c0                 test eax, eax
// 0040b87f  740e                 je 0x40b88f
// 0040b881  c700e4c1a500         mov dword ptr [eax], 0xa5c1e4
// 0040b887  8b4e04               mov ecx, dword ptr [esi + 4]
// 0040b88a  894804               mov dword ptr [eax + 4], ecx
// 0040b88d  5e                   pop esi
// 0040b88e  c3                   ret 
// 0040b88f  33c0                 xor eax, eax
// 0040b891  5e                   pop esi
// 0040b892  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
