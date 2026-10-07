// roc 2010-06 0051ef60  unit: CSHA1  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0051ef60
//
// 0051ef60  83790800             cmp dword ptr [ecx + 8], 0
// 0051ef64  7609                 jbe 0x51ef6f
// 0051ef66  8b01                 mov eax, dword ptr [ecx]
// 0051ef68  50                   push eax
// 0051ef69  e8d88c2800           call 0x7a7c46
// 0051ef6e  59                   pop ecx
// 0051ef6f  c3                   ret 
// library rbx2016-raknet/CloudClient.cpp (function ??1?$List@PAUCloudQueryRow@RakNet@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudClient.cpp
