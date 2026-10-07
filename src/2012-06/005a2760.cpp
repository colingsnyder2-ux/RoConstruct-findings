// roc 2012-06 005a2760  unit: RBX::Network::ClientReplicator  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005a2760
//
// 005a2760  83ec14               sub esp, 0x14
// 005a2763  33c0                 xor eax, eax
// 005a2765  89442404             mov dword ptr [esp + 4], eax
// 005a2769  89442408             mov dword ptr [esp + 8], eax
// 005a276d  8944240c             mov dword ptr [esp + 0xc], eax
// 005a2771  89442410             mov dword ptr [esp + 0x10], eax
// 005a2775  b802000000           mov eax, 2
// 005a277a  8d1424               lea edx, [esp]
// 005a277d  52                   push edx
// 005a277e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005a2782  6689442408           mov word ptr [esp + 8], ax
// 005a2787  33c9                 xor ecx, ecx
// 005a2789  8d442408             lea eax, [esp + 8]
// 005a278d  50                   push eax
// 005a278e  51                   push ecx
// 005a278f  66894c2412           mov word ptr [esp + 0x12], cx
// 005a2794  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005a2798  68d4050000           push 0x5d4
// 005a279d  51                   push ecx
// 005a279e  52                   push edx
// 005a279f  c744241810000000     mov dword ptr [esp + 0x18], 0x10
// 005a27a7  ff15303eb200         call dword ptr [0xb23e30]
// 005a27ad  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005a27b1  8901                 mov dword ptr [ecx], eax
// 005a27b3  85c0                 test eax, eax
// 005a27b5  7e27                 jle 0x5a27de
// 005a27b7  56                   push esi
// 005a27b8  e803620100           call 0x5b89c0
// 005a27bd  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 005a27c1  8b742434             mov esi, dword ptr [esp + 0x34]
// 005a27c5  895104               mov dword ptr [ecx + 4], edx
// 005a27c8  8b54240a             mov edx, dword ptr [esp + 0xa]
// 005a27cc  8901                 mov dword ptr [ecx], eax
// 005a27ce  52                   push edx
// 005a27cf  8bce                 mov ecx, esi
// 005a27d1  e8aaf0fbff           call 0x561880
// 005a27d6  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a27da  894604               mov dword ptr [esi + 4], eax
// 005a27dd  5e                   pop esi
// 005a27de  83c414               add esp, 0x14
// 005a27e1  c3                   ret 
// library rbx2016-raknet/SocketLayer.cpp (function ?RecvFromBlocking_Old@SocketLayer@RakNet@@SAXIPAVRakPeer@2@GIPADPAHPAUSystemAddress@2@PA_K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SocketLayer.cpp
