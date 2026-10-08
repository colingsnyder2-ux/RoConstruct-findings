// roc 2008-06 004ce940  unit: RBX::Network::PhysicsSender  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ce940
//
// 004ce940  83ec14               sub esp, 0x14
// 004ce943  8b542418             mov edx, dword ptr [esp + 0x18]
// 004ce947  8d0424               lea eax, [esp]
// 004ce94a  50                   push eax
// 004ce94b  8d4c2408             lea ecx, [esp + 8]
// 004ce94f  51                   push ecx
// 004ce950  52                   push edx
// 004ce951  c744240c10000000     mov dword ptr [esp + 0xc], 0x10
// 004ce959  ff15c82e8000         call dword ptr [0x802ec8]
// 004ce95f  85c0                 test eax, eax
// 004ce961  7408                 je 0x4ce96b
// 004ce963  33c0                 xor eax, eax
// 004ce965  83c414               add esp, 0x14
// 004ce968  c20400               ret 4
// 004ce96b  8b442406             mov eax, dword ptr [esp + 6]
// 004ce96f  50                   push eax
// 004ce970  ff15c42e8000         call dword ptr [0x802ec4]
// 004ce976  83c414               add esp, 0x14
// 004ce979  c20400               ret 4
// library rbxgs-raknet/SocketLayer.cpp (function ?GetLocalPort@SocketLayer@@QAEGI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SocketLayer.cpp
