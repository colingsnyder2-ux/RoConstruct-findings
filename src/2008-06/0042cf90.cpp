// roc 2008-06 0042cf90  unit: boost::any::H::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042cf90
//
// 0042cf90  56                   push esi
// 0042cf91  6a08                 push 8
// 0042cf93  8bf1                 mov esi, ecx
// 0042cf95  e886392700           call 0x6a0920
// 0042cf9a  83c404               add esp, 4
// 0042cf9d  85c0                 test eax, eax
// 0042cf9f  740e                 je 0x42cfaf
// 0042cfa1  c700cc068100         mov dword ptr [eax], 0x8106cc
// 0042cfa7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0042cfaa  894804               mov dword ptr [eax + 4], ecx
// 0042cfad  5e                   pop esi
// 0042cfae  c3                   ret 
// 0042cfaf  33c0                 xor eax, eax
// 0042cfb1  5e                   pop esi
// 0042cfb2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
