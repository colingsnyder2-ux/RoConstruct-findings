// roc 2010-06 005133d0  unit: RBX::Network::InterpolatingPhysicsReceiver::Job  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005133d0
//
// 005133d0  8b442404             mov eax, dword ptr [esp + 4]
// 005133d4  50                   push eax
// 005133d5  ff1584bd9e00         call dword ptr [0x9ebd84]
// 005133db  85c0                 test eax, eax
// 005133dd  7416                 je 0x5133f5
// 005133df  8b400c               mov eax, dword ptr [eax + 0xc]
// 005133e2  833800               cmp dword ptr [eax], 0
// 005133e5  740e                 je 0x5133f5
// 005133e7  8b08                 mov ecx, dword ptr [eax]
// 005133e9  8b01                 mov eax, dword ptr [ecx]
// 005133eb  89442404             mov dword ptr [esp + 4], eax
// 005133ef  ff25a0bd9e00         jmp dword ptr [0x9ebda0]
// 005133f5  33c0                 xor eax, eax
// 005133f7  c20400               ret 4
// library rbxgs-raknet/SocketLayer.cpp (function ?DomainNameToIP@SocketLayer@@QAEPBDPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SocketLayer.cpp
