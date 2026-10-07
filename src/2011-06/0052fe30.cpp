// roc 2011-06 0052fe30  unit: RBX::Network::ProfiledRakPeer  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052fe30
//
// 0052fe30  83790c00             cmp dword ptr [ecx + 0xc], 0
// 0052fe34  7625                 jbe 0x52fe5b
// 0052fe36  8b01                 mov eax, dword ptr [ecx]
// 0052fe38  85c0                 test eax, eax
// 0052fe3a  741f                 je 0x52fe5b
// 0052fe3c  8b48fc               mov ecx, dword ptr [eax - 4]
// 0052fe3f  56                   push esi
// 0052fe40  8d70fc               lea esi, [eax - 4]
// 0052fe43  6840b68600           push 0x86b640
// 0052fe48  51                   push ecx
// 0052fe49  6a10                 push 0x10
// 0052fe4b  50                   push eax
// 0052fe4c  e887b32d00           call 0x80b1d8
// 0052fe51  56                   push esi
// 0052fe52  e8ada42d00           call 0x80a304
// 0052fe57  83c404               add esp, 4
// 0052fe5a  5e                   pop esi
// 0052fe5b  c3                   ret 
// library rbx2016-raknet/ReliabilityLayer.cpp (function ??1?$Queue@UTimeAndValue2@BPSTracker@RakNet@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
