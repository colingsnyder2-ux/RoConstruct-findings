// roc 2011-06 004dd180  unit: W4PacketReliability::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004dd180
//
// 004dd180  56                   push esi
// 004dd181  6a08                 push 8
// 004dd183  8bf1                 mov esi, ecx
// 004dd185  e8d4ce3200           call 0x80a05e
// 004dd18a  83c404               add esp, 4
// 004dd18d  85c0                 test eax, eax
// 004dd18f  740e                 je 0x4dd19f
// 004dd191  c700b496a700         mov dword ptr [eax], 0xa796b4
// 004dd197  8b4e04               mov ecx, dword ptr [esi + 4]
// 004dd19a  894804               mov dword ptr [eax + 4], ecx
// 004dd19d  5e                   pop esi
// 004dd19e  c3                   ret 
// 004dd19f  33c0                 xor eax, eax
// 004dd1a1  5e                   pop esi
// 004dd1a2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
