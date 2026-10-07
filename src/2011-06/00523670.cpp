// roc 2011-06 00523670  unit: RBX::Network::ProfiledRakPeer  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00523670
//
// 00523670  83790800             cmp dword ptr [ecx + 8], 0
// 00523674  7625                 jbe 0x52369b
// 00523676  8b01                 mov eax, dword ptr [ecx]
// 00523678  85c0                 test eax, eax
// 0052367a  741f                 je 0x52369b
// 0052367c  8b48fc               mov ecx, dword ptr [eax - 4]
// 0052367f  56                   push esi
// 00523680  8d70fc               lea esi, [eax - 4]
// 00523683  6840695100           push 0x516940
// 00523688  51                   push ecx
// 00523689  6a04                 push 4
// 0052368b  50                   push eax
// 0052368c  e8477b2e00           call 0x80b1d8
// 00523691  56                   push esi
// 00523692  e86d6c2e00           call 0x80a304
// 00523697  83c404               add esp, 4
// 0052369a  5e                   pop esi
// 0052369b  c3                   ret 
// library rbx2016-raknet/RPC4Plugin.cpp (function ??1?$List@VRakString@RakNet@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RPC4Plugin.cpp
