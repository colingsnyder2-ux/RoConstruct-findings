// roc 2010-06 005136d0  unit: RBX::Network::InterpolatingPhysicsReceiver::Job  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005136d0
//
// 005136d0  83ec14               sub esp, 0x14
// 005136d3  8b542418             mov edx, dword ptr [esp + 0x18]
// 005136d7  8d0424               lea eax, [esp]
// 005136da  50                   push eax
// 005136db  8d4c2408             lea ecx, [esp + 8]
// 005136df  51                   push ecx
// 005136e0  52                   push edx
// 005136e1  c744240c10000000     mov dword ptr [esp + 0xc], 0x10
// 005136e9  ff15a8bd9e00         call dword ptr [0x9ebda8]
// 005136ef  85c0                 test eax, eax
// 005136f1  7408                 je 0x5136fb
// 005136f3  33c0                 xor eax, eax
// 005136f5  83c414               add esp, 0x14
// 005136f8  c20400               ret 4
// 005136fb  8b442406             mov eax, dword ptr [esp + 6]
// 005136ff  50                   push eax
// 00513700  ff1580bd9e00         call dword ptr [0x9ebd80]
// 00513706  83c414               add esp, 0x14
// 00513709  c20400               ret 4
// library rbxgs-raknet/SocketLayer.cpp (function ?GetLocalPort@SocketLayer@@QAEGI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SocketLayer.cpp
