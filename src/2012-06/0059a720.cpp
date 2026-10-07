// roc 2012-06 0059a720  unit: RBX::Network::Marker  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059a720
//
// 0059a720  ff4104               inc dword ptr [ecx + 4]
// 0059a723  8b4104               mov eax, dword ptr [ecx + 4]
// 0059a726  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0059a729  3bc2                 cmp eax, edx
// 0059a72b  7507                 jne 0x59a734
// 0059a72d  c7410400000000       mov dword ptr [ecx + 4], 0
// 0059a734  8b4104               mov eax, dword ptr [ecx + 4]
// 0059a737  85c0                 test eax, eax
// 0059a739  7507                 jne 0x59a742
// 0059a73b  8b01                 mov eax, dword ptr [ecx]
// 0059a73d  8a4402ff             mov al, byte ptr [edx + eax - 1]
// 0059a741  c3                   ret 
// 0059a742  8b09                 mov ecx, dword ptr [ecx]
// 0059a744  8a4408ff             mov al, byte ptr [eax + ecx - 1]
// 0059a748  c3                   ret 
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?Pop@?$Queue@_N@DataStructures@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
