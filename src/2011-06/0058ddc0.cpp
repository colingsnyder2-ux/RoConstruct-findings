// roc 2011-06 0058ddc0  unit: RBX::TaskScheduler::W4PriorityMethod::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058ddc0
//
// 0058ddc0  56                   push esi
// 0058ddc1  6a08                 push 8
// 0058ddc3  8bf1                 mov esi, ecx
// 0058ddc5  e894c22700           call 0x80a05e
// 0058ddca  83c404               add esp, 4
// 0058ddcd  85c0                 test eax, eax
// 0058ddcf  740e                 je 0x58dddf
// 0058ddd1  c7005c8ea800         mov dword ptr [eax], 0xa88e5c
// 0058ddd7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0058ddda  894804               mov dword ptr [eax + 4], ecx
// 0058dddd  5e                   pop esi
// 0058ddde  c3                   ret 
// 0058dddf  33c0                 xor eax, eax
// 0058dde1  5e                   pop esi
// 0058dde2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
