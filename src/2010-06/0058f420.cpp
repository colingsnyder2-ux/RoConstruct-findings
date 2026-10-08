// roc 2010-06 0058f420  unit: RBX::TaskScheduler::W4ThreadPoolConfig::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058f420
//
// 0058f420  56                   push esi
// 0058f421  6a08                 push 8
// 0058f423  8bf1                 mov esi, ecx
// 0058f425  e876852100           call 0x7a79a0
// 0058f42a  83c404               add esp, 4
// 0058f42d  85c0                 test eax, eax
// 0058f42f  740e                 je 0x58f43f
// 0058f431  c700dc8da200         mov dword ptr [eax], 0xa28ddc
// 0058f437  8b4e04               mov ecx, dword ptr [esi + 4]
// 0058f43a  894804               mov dword ptr [eax + 4], ecx
// 0058f43d  5e                   pop esi
// 0058f43e  c3                   ret 
// 0058f43f  33c0                 xor eax, eax
// 0058f441  5e                   pop esi
// 0058f442  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
