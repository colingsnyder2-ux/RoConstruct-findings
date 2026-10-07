// roc 2009-06 005104b0  unit: CSHA1  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005104b0
//
// 005104b0  8bc1                 mov eax, ecx
// 005104b2  c780c8090000ffffffff mov dword ptr [eax + 0x9c8], 0xffffffff
// 005104bc  c3                   ret 
// library rbx2016-raknet/Rand.cpp (function ??0RakNetRandom@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet Rand.cpp
