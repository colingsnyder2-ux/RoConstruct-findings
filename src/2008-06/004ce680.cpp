// roc 2008-06 004ce680  unit: RBX::Network::PhysicsSender  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ce680
//
// 004ce680  8b442404             mov eax, dword ptr [esp + 4]
// 004ce684  50                   push eax
// 004ce685  ff15e42e8000         call dword ptr [0x802ee4]
// 004ce68b  85c0                 test eax, eax
// 004ce68d  7416                 je 0x4ce6a5
// 004ce68f  8b400c               mov eax, dword ptr [eax + 0xc]
// 004ce692  833800               cmp dword ptr [eax], 0
// 004ce695  740e                 je 0x4ce6a5
// 004ce697  8b08                 mov ecx, dword ptr [eax]
// 004ce699  8b01                 mov eax, dword ptr [ecx]
// 004ce69b  89442404             mov dword ptr [esp + 4], eax
// 004ce69f  ff25b82e8000         jmp dword ptr [0x802eb8]
// 004ce6a5  33c0                 xor eax, eax
// 004ce6a7  c20400               ret 4
// library rbxgs-raknet/SocketLayer.cpp (function ?DomainNameToIP@SocketLayer@@QAEPBDPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SocketLayer.cpp
