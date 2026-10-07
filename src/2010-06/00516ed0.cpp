// roc 2010-06 00516ed0  unit: RakPeer  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00516ed0
//
// 00516ed0  83790800             cmp dword ptr [ecx + 8], 0
// 00516ed4  7625                 jbe 0x516efb
// 00516ed6  8b01                 mov eax, dword ptr [ecx]
// 00516ed8  85c0                 test eax, eax
// 00516eda  741f                 je 0x516efb
// 00516edc  8b48fc               mov ecx, dword ptr [eax - 4]
// 00516edf  56                   push esi
// 00516ee0  8d70fc               lea esi, [eax - 4]
// 00516ee3  68b0ae5000           push 0x50aeb0
// 00516ee8  51                   push ecx
// 00516ee9  6a04                 push 4
// 00516eeb  50                   push eax
// 00516eec  e8ed1b2900           call 0x7a8ade
// 00516ef1  56                   push esi
// 00516ef2  e84f0d2900           call 0x7a7c46
// 00516ef7  83c404               add esp, 4
// 00516efa  5e                   pop esi
// 00516efb  c3                   ret 
// library rbx2016-raknet/RPC4Plugin.cpp (function ??1?$List@VRakString@RakNet@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RPC4Plugin.cpp
