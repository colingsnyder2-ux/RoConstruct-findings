// roc 2012-06 005bc4a0  unit: RakNet::RakPeer  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bc4a0
//
// 005bc4a0  83790800             cmp dword ptr [ecx + 8], 0
// 005bc4a4  7609                 jbe 0x5bc4af
// 005bc4a6  8b01                 mov eax, dword ptr [ecx]
// 005bc4a8  50                   push eax
// 005bc4a9  e80c5f3c00           call 0x9823ba
// 005bc4ae  59                   pop ecx
// 005bc4af  c3                   ret 
// library rbx2016-raknet/CloudClient.cpp (function ??1?$List@PAUCloudQueryRow@RakNet@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudClient.cpp
