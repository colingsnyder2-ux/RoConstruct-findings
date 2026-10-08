// roc 2010-06 007a0930  unit: W4_D3DFORMAT::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007a0930
//
// 007a0930  56                   push esi
// 007a0931  6a08                 push 8
// 007a0933  8bf1                 mov esi, ecx
// 007a0935  e866700000           call 0x7a79a0
// 007a093a  83c404               add esp, 4
// 007a093d  85c0                 test eax, eax
// 007a093f  740e                 je 0x7a094f
// 007a0941  c7003c48a500         mov dword ptr [eax], 0xa5483c
// 007a0947  8b4e04               mov ecx, dword ptr [esi + 4]
// 007a094a  894804               mov dword ptr [eax + 4], ecx
// 007a094d  5e                   pop esi
// 007a094e  c3                   ret 
// 007a094f  33c0                 xor eax, eax
// 007a0951  5e                   pop esi
// 007a0952  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
