// roc 2012-06 005a2af0  unit: RBX::Network::ClientReplicator  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005a2af0
//
// 005a2af0  83ec14               sub esp, 0x14
// 005a2af3  8b542418             mov edx, dword ptr [esp + 0x18]
// 005a2af7  33c0                 xor eax, eax
// 005a2af9  89442404             mov dword ptr [esp + 4], eax
// 005a2afd  89442408             mov dword ptr [esp + 8], eax
// 005a2b01  8944240c             mov dword ptr [esp + 0xc], eax
// 005a2b05  89442410             mov dword ptr [esp + 0x10], eax
// 005a2b09  8d0424               lea eax, [esp]
// 005a2b0c  50                   push eax
// 005a2b0d  8d4c2408             lea ecx, [esp + 8]
// 005a2b11  51                   push ecx
// 005a2b12  52                   push edx
// 005a2b13  c744240c10000000     mov dword ptr [esp + 0xc], 0x10
// 005a2b1b  ff15443eb200         call dword ptr [0xb23e44]
// 005a2b21  85c0                 test eax, eax
// 005a2b23  7412                 je 0x5a2b37
// 005a2b25  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005a2b29  684457e200           push 0xe25744
// 005a2b2e  e8ddecfbff           call 0x561810
// 005a2b33  83c414               add esp, 0x14
// 005a2b36  c3                   ret 
// 005a2b37  8b442406             mov eax, dword ptr [esp + 6]
// 005a2b3b  56                   push esi
// 005a2b3c  8b742420             mov esi, dword ptr [esp + 0x20]
// 005a2b40  50                   push eax
// 005a2b41  8bce                 mov ecx, esi
// 005a2b43  e838edfbff           call 0x561880
// 005a2b48  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a2b4c  894e04               mov dword ptr [esi + 4], ecx
// 005a2b4f  5e                   pop esi
// 005a2b50  83c414               add esp, 0x14
// 005a2b53  c3                   ret 
// library rbx2016-raknet/SocketLayer.cpp (function ?GetSystemAddress_Old@SocketLayer@RakNet@@SAXIPAUSystemAddress@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SocketLayer.cpp
