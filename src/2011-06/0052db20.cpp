// roc 2011-06 0052db20  unit: RBX::Network::ProfiledRakPeer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052db20
//
// 0052db20  8bc1                 mov eax, ecx
// 0052db22  33c9                 xor ecx, ecx
// 0052db24  894808               mov dword ptr [eax + 8], ecx
// 0052db27  8908                 mov dword ptr [eax], ecx
// 0052db29  894804               mov dword ptr [eax + 4], ecx
// 0052db2c  c3                   ret 
// library rbx2016-raknet/CloudClient.cpp (function ??0?$List@UCloudKey@RakNet@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudClient.cpp
