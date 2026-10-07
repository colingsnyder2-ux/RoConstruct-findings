// roc 2012-06 005bf100  unit: RakNet::RakPeer  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bf100
//
// 005bf100  83790800             cmp dword ptr [ecx + 8], 0
// 005bf104  7625                 jbe 0x5bf12b
// 005bf106  8b01                 mov eax, dword ptr [ecx]
// 005bf108  85c0                 test eax, eax
// 005bf10a  741f                 je 0x5bf12b
// 005bf10c  8b48fc               mov ecx, dword ptr [eax - 4]
// 005bf10f  56                   push esi
// 005bf110  8d70fc               lea esi, [eax - 4]
// 005bf113  68807e5a00           push 0x5a7e80
// 005bf118  51                   push ecx
// 005bf119  6a04                 push 4
// 005bf11b  50                   push eax
// 005bf11c  e84f413c00           call 0x983270
// 005bf121  56                   push esi
// 005bf122  e893323c00           call 0x9823ba
// 005bf127  83c404               add esp, 4
// 005bf12a  5e                   pop esi
// 005bf12b  c3                   ret 
// library rbx2016-raknet/RPC4Plugin.cpp (function ??1?$List@VRakString@RakNet@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RPC4Plugin.cpp
