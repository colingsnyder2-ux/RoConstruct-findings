// roc 2012-06 005c7930  unit: RakNet::RakPeer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005c7930
//
// 005c7930  8bc1                 mov eax, ecx
// 005c7932  c780c8090000ffffffff mov dword ptr [eax + 0x9c8], 0xffffffff
// 005c793c  c3                   ret 
// library rbx2016-raknet/Rand.cpp (function ??0RakNetRandom@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet Rand.cpp
