// roc 2008-06 004d41e0  unit: seg_004d0000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d41e0
//
// 004d41e0  83790800             cmp dword ptr [ecx + 8], 0
// 004d41e4  7609                 jbe 0x4d41ef
// 004d41e6  8b01                 mov eax, dword ptr [ecx]
// 004d41e8  50                   push eax
// 004d41e9  e88cc41c00           call 0x6a067a
// 004d41ee  59                   pop ecx
// 004d41ef  c3                   ret 
// library rbx2016-raknet/CloudClient.cpp (function ??1?$List@PAUCloudQueryRow@RakNet@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudClient.cpp
