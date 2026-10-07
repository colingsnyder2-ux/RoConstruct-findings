// roc 2012-06 005a2700  unit: RBX::Network::ClientReplicator  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005a2700
//
// 005a2700  8b442414             mov eax, dword ptr [esp + 0x14]
// 005a2704  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a2708  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005a270c  50                   push eax
// 005a270d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a2711  51                   push ecx
// 005a2712  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a2716  52                   push edx
// 005a2717  50                   push eax
// 005a2718  51                   push ecx
// 005a2719  e852feffff           call 0x5a2570
// 005a271e  83c414               add esp, 0x14
// 005a2721  c3                   ret 
// library rbx2016-raknet/SocketLayer.cpp (function ?CreateBoundSocket@SocketLayer@RakNet@@SAIG_NPBDIIG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SocketLayer.cpp
