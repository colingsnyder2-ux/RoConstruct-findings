// roc 2011-06 0058daf0  unit: RBX::TaskScheduler::W4ThreadPoolConfig::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058daf0
//
// 0058daf0  56                   push esi
// 0058daf1  6a08                 push 8
// 0058daf3  8bf1                 mov esi, ecx
// 0058daf5  e864c52700           call 0x80a05e
// 0058dafa  83c404               add esp, 4
// 0058dafd  85c0                 test eax, eax
// 0058daff  740e                 je 0x58db0f
// 0058db01  c7002c8ea800         mov dword ptr [eax], 0xa88e2c
// 0058db07  8b4e04               mov ecx, dword ptr [esi + 4]
// 0058db0a  894804               mov dword ptr [eax + 4], ecx
// 0058db0d  5e                   pop esi
// 0058db0e  c3                   ret 
// 0058db0f  33c0                 xor eax, eax
// 0058db11  5e                   pop esi
// 0058db12  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
