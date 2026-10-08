// roc 2009-06 004fd5d0  unit: RBX::Network::NetworkOwnerJob  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004fd5d0
//
// 004fd5d0  83ec14               sub esp, 0x14
// 004fd5d3  8b542418             mov edx, dword ptr [esp + 0x18]
// 004fd5d7  8d0424               lea eax, [esp]
// 004fd5da  50                   push eax
// 004fd5db  8d4c2408             lea ecx, [esp + 8]
// 004fd5df  51                   push ecx
// 004fd5e0  52                   push edx
// 004fd5e1  c744240c10000000     mov dword ptr [esp + 0xc], 0x10
// 004fd5e9  ff1508f08900         call dword ptr [0x89f008]
// 004fd5ef  85c0                 test eax, eax
// 004fd5f1  7408                 je 0x4fd5fb
// 004fd5f3  33c0                 xor eax, eax
// 004fd5f5  83c414               add esp, 0x14
// 004fd5f8  c20400               ret 4
// 004fd5fb  8b442406             mov eax, dword ptr [esp + 6]
// 004fd5ff  50                   push eax
// 004fd600  ff1520f08900         call dword ptr [0x89f020]
// 004fd606  83c414               add esp, 0x14
// 004fd609  c20400               ret 4
// library rbxgs-raknet/SocketLayer.cpp (function ?GetLocalPort@SocketLayer@@QAEGI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SocketLayer.cpp
