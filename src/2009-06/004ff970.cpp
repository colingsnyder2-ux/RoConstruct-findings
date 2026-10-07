// roc 2009-06 004ff970  unit: RakPeer  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004ff970
//
// 004ff970  83790800             cmp dword ptr [ecx + 8], 0
// 004ff974  7609                 jbe 0x4ff97f
// 004ff976  8b01                 mov eax, dword ptr [ecx]
// 004ff978  50                   push eax
// 004ff979  e860932100           call 0x718cde
// 004ff97e  59                   pop ecx
// 004ff97f  c3                   ret 
// library rbx2016-raknet/CloudClient.cpp (function ??1?$List@PAUCloudQueryRow@RakNet@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudClient.cpp
