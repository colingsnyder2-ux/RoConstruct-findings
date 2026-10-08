// roc 2007-08 00534bd0  unit: RBX::VBrickColor::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00534bd0
//
// 00534bd0  56                   push esi
// 00534bd1  6a08                 push 8
// 00534bd3  8bf1                 mov esi, ecx
// 00534bd5  e81cb30f00           call 0x62fef6
// 00534bda  83c404               add esp, 4
// 00534bdd  85c0                 test eax, eax
// 00534bdf  740e                 je 0x534bef
// 00534be1  c7007c577a00         mov dword ptr [eax], 0x7a577c
// 00534be7  8b4e04               mov ecx, dword ptr [esi + 4]
// 00534bea  894804               mov dword ptr [eax + 4], ecx
// 00534bed  5e                   pop esi
// 00534bee  c3                   ret 
// 00534bef  33c0                 xor eax, eax
// 00534bf1  5e                   pop esi
// 00534bf2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
