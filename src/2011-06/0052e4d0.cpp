// roc 2011-06 0052e4d0  unit: RBX::Network::ProfiledRakPeer  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052e4d0
//
// 0052e4d0  ff4104               inc dword ptr [ecx + 4]
// 0052e4d3  8b4104               mov eax, dword ptr [ecx + 4]
// 0052e4d6  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0052e4d9  3bc2                 cmp eax, edx
// 0052e4db  7507                 jne 0x52e4e4
// 0052e4dd  c7410400000000       mov dword ptr [ecx + 4], 0
// 0052e4e4  8b4104               mov eax, dword ptr [ecx + 4]
// 0052e4e7  85c0                 test eax, eax
// 0052e4e9  750b                 jne 0x52e4f6
// 0052e4eb  8b01                 mov eax, dword ptr [ecx]
// 0052e4ed  c1e204               shl edx, 4
// 0052e4f0  8d4c02f0             lea ecx, [edx + eax - 0x10]
// 0052e4f4  eb09                 jmp 0x52e4ff
// 0052e4f6  8b11                 mov edx, dword ptr [ecx]
// 0052e4f8  c1e004               shl eax, 4
// 0052e4fb  8d4c10f0             lea ecx, [eax + edx - 0x10]
// 0052e4ff  8b442404             mov eax, dword ptr [esp + 4]
// 0052e503  8b11                 mov edx, dword ptr [ecx]
// 0052e505  8910                 mov dword ptr [eax], edx
// 0052e507  8b5104               mov edx, dword ptr [ecx + 4]
// 0052e50a  895004               mov dword ptr [eax + 4], edx
// 0052e50d  8b5108               mov edx, dword ptr [ecx + 8]
// 0052e510  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0052e513  895008               mov dword ptr [eax + 8], edx
// 0052e516  89480c               mov dword ptr [eax + 0xc], ecx
// 0052e519  c20400               ret 4
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?Pop@?$Queue@UTimeAndValue2@BPSTracker@RakNet@@@DataStructures@@QAE?AUTimeAndValue2@BPSTracker@RakNet@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
