// roc 2007-08 004c5160  unit: RakPeer  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c5160
//
// 004c5160  83790800             cmp dword ptr [ecx + 8], 0
// 004c5164  7609                 jbe 0x4c516f
// 004c5166  8b01                 mov eax, dword ptr [ecx]
// 004c5168  50                   push eax
// 004c5169  e8f4aa1600           call 0x62fc62
// 004c516e  59                   pop ecx
// 004c516f  c3                   ret 
// library rbx2016-raknet/CloudClient.cpp (function ??1?$List@PAUCloudQueryRow@RakNet@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudClient.cpp
