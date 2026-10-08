// roc 2010-06 007a0570  unit: W4_D3DDEVTYPE::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007a0570
//
// 007a0570  56                   push esi
// 007a0571  6a08                 push 8
// 007a0573  8bf1                 mov esi, ecx
// 007a0575  e826740000           call 0x7a79a0
// 007a057a  83c404               add esp, 4
// 007a057d  85c0                 test eax, eax
// 007a057f  740e                 je 0x7a058f
// 007a0581  c7000c48a500         mov dword ptr [eax], 0xa5480c
// 007a0587  8b4e04               mov ecx, dword ptr [esi + 4]
// 007a058a  894804               mov dword ptr [eax + 4], ecx
// 007a058d  5e                   pop esi
// 007a058e  c3                   ret 
// 007a058f  33c0                 xor eax, eax
// 007a0591  5e                   pop esi
// 007a0592  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
