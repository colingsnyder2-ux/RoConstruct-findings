// roc 2011-06 0052e4a0  unit: RBX::Network::ProfiledRakPeer  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052e4a0
//
// 0052e4a0  8b5104               mov edx, dword ptr [ecx + 4]
// 0052e4a3  8b442404             mov eax, dword ptr [esp + 4]
// 0052e4a7  c1e204               shl edx, 4
// 0052e4aa  0311                 add edx, dword ptr [ecx]
// 0052e4ac  8b0a                 mov ecx, dword ptr [edx]
// 0052e4ae  8908                 mov dword ptr [eax], ecx
// 0052e4b0  8b4a04               mov ecx, dword ptr [edx + 4]
// 0052e4b3  894804               mov dword ptr [eax + 4], ecx
// 0052e4b6  8b4a08               mov ecx, dword ptr [edx + 8]
// 0052e4b9  8b520c               mov edx, dword ptr [edx + 0xc]
// 0052e4bc  894808               mov dword ptr [eax + 8], ecx
// 0052e4bf  89500c               mov dword ptr [eax + 0xc], edx
// 0052e4c2  c20400               ret 4
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?Peek@?$Queue@UTimeAndValue2@BPSTracker@RakNet@@@DataStructures@@QBE?AUTimeAndValue2@BPSTracker@RakNet@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
