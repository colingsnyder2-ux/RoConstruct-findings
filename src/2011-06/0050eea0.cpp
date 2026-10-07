// roc 2011-06 0050eea0  unit: RBX::Network::VMarker::?$EventDesc  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0050eea0
//
// 0050eea0  8b442404             mov eax, dword ptr [esp + 4]
// 0050eea4  50                   push eax
// 0050eea5  ff159c1da400         call dword ptr [0xa41d9c]
// 0050eeab  85c0                 test eax, eax
// 0050eead  7414                 je 0x50eec3
// 0050eeaf  8b400c               mov eax, dword ptr [eax + 0xc]
// 0050eeb2  833800               cmp dword ptr [eax], 0
// 0050eeb5  740c                 je 0x50eec3
// 0050eeb7  8b08                 mov ecx, dword ptr [eax]
// 0050eeb9  8b01                 mov eax, dword ptr [ecx]
// 0050eebb  50                   push eax
// 0050eebc  ff15601da400         call dword ptr [0xa41d60]
// 0050eec2  c3                   ret 
// 0050eec3  33c0                 xor eax, eax
// 0050eec5  c3                   ret 
// library rbx2016-raknet/SocketLayer.cpp (function ?DomainNameToIP_Old@SocketLayer@RakNet@@SAPBDPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SocketLayer.cpp
