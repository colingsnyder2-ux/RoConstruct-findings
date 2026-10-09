// roc 2009-12 007ec8b0  unit: W4_D3DFORMAT::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007ec8b0
//
// 007ec8b0  56                   push esi
// 007ec8b1  6a08                 push 8
// 007ec8b3  8bf1                 mov esi, ecx
// 007ec8b5  e8a66f0000           call 0x7f3860
// 007ec8ba  83c404               add esp, 4
// 007ec8bd  85c0                 test eax, eax
// 007ec8bf  740e                 je 0x7ec8cf
// 007ec8c1  c7002c059f00         mov dword ptr [eax], 0x9f052c
// 007ec8c7  8b4e04               mov ecx, dword ptr [esi + 4]
// 007ec8ca  894804               mov dword ptr [eax + 4], ecx
// 007ec8cd  5e                   pop esi
// 007ec8ce  c3                   ret 
// 007ec8cf  33c0                 xor eax, eax
// 007ec8d1  5e                   pop esi
// 007ec8d2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
