// roc 2010-06 0051ea40  unit: CSHA1  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0051ea40
//
// 0051ea40  8bc1                 mov eax, ecx
// 0051ea42  c780c8090000ffffffff mov dword ptr [eax + 0x9c8], 0xffffffff
// 0051ea4c  c3                   ret 
// library rbx2016-raknet/Rand.cpp (function ??0RakNetRandom@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet Rand.cpp
