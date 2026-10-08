// roc 2010-06 00591fb0  unit: RBX::EThrottle::W4EThrottleType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00591fb0
//
// 00591fb0  56                   push esi
// 00591fb1  6a08                 push 8
// 00591fb3  8bf1                 mov esi, ecx
// 00591fb5  e8e6592100           call 0x7a79a0
// 00591fba  83c404               add esp, 4
// 00591fbd  85c0                 test eax, eax
// 00591fbf  740e                 je 0x591fcf
// 00591fc1  c7005092a200         mov dword ptr [eax], 0xa29250
// 00591fc7  8b4e04               mov ecx, dword ptr [esi + 4]
// 00591fca  894804               mov dword ptr [eax + 4], ecx
// 00591fcd  5e                   pop esi
// 00591fce  c3                   ret 
// 00591fcf  33c0                 xor eax, eax
// 00591fd1  5e                   pop esi
// 00591fd2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
