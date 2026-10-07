// roc 2011-06 00530510  unit: RBX::Network::ProfiledRakPeer  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00530510
//
// 00530510  83791c00             cmp dword ptr [ecx + 0x1c], 0
// 00530514  7626                 jbe 0x53053c
// 00530516  8b4110               mov eax, dword ptr [ecx + 0x10]
// 00530519  85c0                 test eax, eax
// 0053051b  741f                 je 0x53053c
// 0053051d  8b48fc               mov ecx, dword ptr [eax - 4]
// 00530520  56                   push esi
// 00530521  8d70fc               lea esi, [eax - 4]
// 00530524  6840b68600           push 0x86b640
// 00530529  51                   push ecx
// 0053052a  6a10                 push 0x10
// 0053052c  50                   push eax
// 0053052d  e8a6ac2d00           call 0x80b1d8
// 00530532  56                   push esi
// 00530533  e8cc9d2d00           call 0x80a304
// 00530538  83c404               add esp, 4
// 0053053b  5e                   pop esi
// 0053053c  c3                   ret 
// library rbx2016-raknet/ReliabilityLayer.cpp (function ??1BPSTracker@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
