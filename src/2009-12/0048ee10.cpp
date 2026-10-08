// roc 2009-12 0048ee10  unit: RBX::TextureProxyBase  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0048ee10
//
// 0048ee10  8b442404             mov eax, dword ptr [esp + 4]
// 0048ee14  89410c               mov dword ptr [ecx + 0xc], eax
// 0048ee17  c20400               ret 4
// library raknet-4.081/ReplicaManager3.cpp (function ?SetDefaultPacketPriority@ReplicaManager3@RakNet@@QAEXW4PacketPriority@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: raknet-4.081 ReplicaManager3.cpp
