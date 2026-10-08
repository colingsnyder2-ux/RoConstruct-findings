// roc 2007-08 00413aa0  unit: boost::any::H::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00413aa0
//
// 00413aa0  56                   push esi
// 00413aa1  6a08                 push 8
// 00413aa3  8bf1                 mov esi, ecx
// 00413aa5  e84cc42100           call 0x62fef6
// 00413aaa  83c404               add esp, 4
// 00413aad  85c0                 test eax, eax
// 00413aaf  740e                 je 0x413abf
// 00413ab1  c70098717800         mov dword ptr [eax], 0x787198
// 00413ab7  8b4e04               mov ecx, dword ptr [esi + 4]
// 00413aba  894804               mov dword ptr [eax + 4], ecx
// 00413abd  5e                   pop esi
// 00413abe  c3                   ret 
// 00413abf  33c0                 xor eax, eax
// 00413ac1  5e                   pop esi
// 00413ac2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
