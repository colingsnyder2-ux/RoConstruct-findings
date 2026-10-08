// roc 2007-08 004c4700  unit: RakPeer  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c4700
//
// 004c4700  8b442404             mov eax, dword ptr [esp + 4]
// 004c4704  50                   push eax
// 004c4705  ff1554ef7700         call dword ptr [0x77ef54]
// 004c470b  85c0                 test eax, eax
// 004c470d  7416                 je 0x4c4725
// 004c470f  8b400c               mov eax, dword ptr [eax + 0xc]
// 004c4712  833800               cmp dword ptr [eax], 0
// 004c4715  740e                 je 0x4c4725
// 004c4717  8b08                 mov ecx, dword ptr [eax]
// 004c4719  8b01                 mov eax, dword ptr [ecx]
// 004c471b  89442404             mov dword ptr [esp + 4], eax
// 004c471f  ff252cef7700         jmp dword ptr [0x77ef2c]
// 004c4725  33c0                 xor eax, eax
// 004c4727  c20400               ret 4
// library rbxgs-raknet/SocketLayer.cpp (function ?DomainNameToIP@SocketLayer@@QAEPBDPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SocketLayer.cpp
