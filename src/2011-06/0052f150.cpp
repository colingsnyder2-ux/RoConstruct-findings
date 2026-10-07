// roc 2011-06 0052f150  unit: RBX::Network::ProfiledRakPeer  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052f150
//
// 0052f150  83790800             cmp dword ptr [ecx + 8], 0
// 0052f154  7609                 jbe 0x52f15f
// 0052f156  8b01                 mov eax, dword ptr [ecx]
// 0052f158  50                   push eax
// 0052f159  e8a6b12d00           call 0x80a304
// 0052f15e  59                   pop ecx
// 0052f15f  c3                   ret 
// library rbx2016-raknet/CloudClient.cpp (function ??1?$List@PAUCloudQueryRow@RakNet@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudClient.cpp
