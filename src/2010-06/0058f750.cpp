// roc 2010-06 0058f750  unit: RBX::TaskScheduler::W4PriorityMethod::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058f750
//
// 0058f750  56                   push esi
// 0058f751  6a08                 push 8
// 0058f753  8bf1                 mov esi, ecx
// 0058f755  e846822100           call 0x7a79a0
// 0058f75a  83c404               add esp, 4
// 0058f75d  85c0                 test eax, eax
// 0058f75f  740e                 je 0x58f76f
// 0058f761  c7000c8ea200         mov dword ptr [eax], 0xa28e0c
// 0058f767  8b4e04               mov ecx, dword ptr [esi + 4]
// 0058f76a  894804               mov dword ptr [eax + 4], ecx
// 0058f76d  5e                   pop esi
// 0058f76e  c3                   ret 
// 0058f76f  33c0                 xor eax, eax
// 0058f771  5e                   pop esi
// 0058f772  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
