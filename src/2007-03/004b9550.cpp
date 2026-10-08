// roc 2007-03 004b9550  unit: seg_004b0000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b9550
//
// 004b9550  8b442404             mov eax, dword ptr [esp + 4]
// 004b9554  50                   push eax
// 004b9555  ff155cf07700         call dword ptr [0x77f05c]
// 004b955b  85c0                 test eax, eax
// 004b955d  7416                 je 0x4b9575
// 004b955f  8b400c               mov eax, dword ptr [eax + 0xc]
// 004b9562  833800               cmp dword ptr [eax], 0
// 004b9565  740e                 je 0x4b9575
// 004b9567  8b08                 mov ecx, dword ptr [eax]
// 004b9569  8b01                 mov eax, dword ptr [ecx]
// 004b956b  89442404             mov dword ptr [esp + 4], eax
// 004b956f  ff253cf07700         jmp dword ptr [0x77f03c]
// 004b9575  33c0                 xor eax, eax
// 004b9577  c20400               ret 4
// library rbxgs-raknet/SocketLayer.cpp (function ?DomainNameToIP@SocketLayer@@QAEPBDPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SocketLayer.cpp
