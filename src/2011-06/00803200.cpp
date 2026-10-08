// roc 2011-06 00803200  unit: W4_D3DFORMAT::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00803200
//
// 00803200  56                   push esi
// 00803201  6a08                 push 8
// 00803203  8bf1                 mov esi, ecx
// 00803205  e8546e0000           call 0x80a05e
// 0080320a  83c404               add esp, 4
// 0080320d  85c0                 test eax, eax
// 0080320f  740e                 je 0x80321f
// 00803211  c7002004ac00         mov dword ptr [eax], 0xac0420
// 00803217  8b4e04               mov ecx, dword ptr [esi + 4]
// 0080321a  894804               mov dword ptr [eax + 4], ecx
// 0080321d  5e                   pop esi
// 0080321e  c3                   ret 
// 0080321f  33c0                 xor eax, eax
// 00803221  5e                   pop esi
// 00803222  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
