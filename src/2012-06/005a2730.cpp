// roc 2012-06 005a2730  unit: RBX::Network::ClientReplicator  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005a2730
//
// 005a2730  8b442404             mov eax, dword ptr [esp + 4]
// 005a2734  50                   push eax
// 005a2735  ff152c3eb200         call dword ptr [0xb23e2c]
// 005a273b  85c0                 test eax, eax
// 005a273d  7414                 je 0x5a2753
// 005a273f  8b400c               mov eax, dword ptr [eax + 0xc]
// 005a2742  833800               cmp dword ptr [eax], 0
// 005a2745  740c                 je 0x5a2753
// 005a2747  8b08                 mov ecx, dword ptr [eax]
// 005a2749  8b01                 mov eax, dword ptr [ecx]
// 005a274b  50                   push eax
// 005a274c  ff15183eb200         call dword ptr [0xb23e18]
// 005a2752  c3                   ret 
// 005a2753  33c0                 xor eax, eax
// 005a2755  c3                   ret 
// library rbx2016-raknet/SocketLayer.cpp (function ?DomainNameToIP_Old@SocketLayer@RakNet@@SAPBDPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SocketLayer.cpp
