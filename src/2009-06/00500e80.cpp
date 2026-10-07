// roc 2009-06 00500e80  unit: RakPeer  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00500e80
//
// 00500e80  83790800             cmp dword ptr [ecx + 8], 0
// 00500e84  7625                 jbe 0x500eab
// 00500e86  8b01                 mov eax, dword ptr [ecx]
// 00500e88  85c0                 test eax, eax
// 00500e8a  741f                 je 0x500eab
// 00500e8c  8b48fc               mov ecx, dword ptr [eax - 4]
// 00500e8f  56                   push esi
// 00500e90  8d70fc               lea esi, [eax - 4]
// 00500e93  6890d04f00           push 0x4fd090
// 00500e98  51                   push ecx
// 00500e99  6a04                 push 4
// 00500e9b  50                   push eax
// 00500e9c  e8d58c2100           call 0x719b76
// 00500ea1  56                   push esi
// 00500ea2  e8377e2100           call 0x718cde
// 00500ea7  83c404               add esp, 4
// 00500eaa  5e                   pop esi
// 00500eab  c3                   ret 
// library rbx2016-raknet/RPC4Plugin.cpp (function ??1?$List@VRakString@RakNet@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RPC4Plugin.cpp
