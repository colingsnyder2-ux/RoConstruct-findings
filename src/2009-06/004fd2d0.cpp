// roc 2009-06 004fd2d0  unit: RBX::Network::NetworkOwnerJob  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004fd2d0
//
// 004fd2d0  8b442404             mov eax, dword ptr [esp + 4]
// 004fd2d4  50                   push eax
// 004fd2d5  ff1524f08900         call dword ptr [0x89f024]
// 004fd2db  85c0                 test eax, eax
// 004fd2dd  7416                 je 0x4fd2f5
// 004fd2df  8b400c               mov eax, dword ptr [eax + 0xc]
// 004fd2e2  833800               cmp dword ptr [eax], 0
// 004fd2e5  740e                 je 0x4fd2f5
// 004fd2e7  8b08                 mov ecx, dword ptr [eax]
// 004fd2e9  8b01                 mov eax, dword ptr [ecx]
// 004fd2eb  89442404             mov dword ptr [esp + 4], eax
// 004fd2ef  ff25e4ef8900         jmp dword ptr [0x89efe4]
// 004fd2f5  33c0                 xor eax, eax
// 004fd2f7  c20400               ret 4
// library rbxgs-raknet/SocketLayer.cpp (function ?DomainNameToIP@SocketLayer@@QAEPBDPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SocketLayer.cpp
