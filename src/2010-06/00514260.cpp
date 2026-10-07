// roc 2010-06 00514260  unit: RakPeerInterface  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00514260
//
// 00514260  56                   push esi
// 00514261  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00514265  57                   push edi
// 00514266  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0051426a  56                   push esi
// 0051426b  8bcf                 mov ecx, edi
// 0051426d  e83e99feff           call 0x4fdbb0
// 00514272  84c0                 test al, al
// 00514274  7406                 je 0x51427c
// 00514276  5f                   pop edi
// 00514277  83c8ff               or eax, 0xffffffff
// 0051427a  5e                   pop esi
// 0051427b  c3                   ret 
// 0051427c  56                   push esi
// 0051427d  8bcf                 mov ecx, edi
// 0051427f  e89ceb1700           call 0x692e20
// 00514284  33c9                 xor ecx, ecx
// 00514286  84c0                 test al, al
// 00514288  0f94c1               sete cl
// 0051428b  5f                   pop edi
// 0051428c  5e                   pop esi
// 0051428d  8bc1                 mov eax, ecx
// 0051428f  c3                   ret 
// library rbx2016-raknet/CloudServer.cpp (function ??$defaultOrderedListComparison@URakNetGUID@RakNet@@U12@@DataStructures@@YAHABURakNetGUID@RakNet@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudServer.cpp
