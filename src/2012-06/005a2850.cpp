// roc 2012-06 005a2850  unit: RBX::Network::ClientReplicator  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005a2850
//
// 005a2850  8b0d4057e200         mov ecx, dword ptr [0xe25740]
// 005a2856  85c9                 test ecx, ecx
// 005a2858  7426                 je 0x5a2880
// 005a285a  8b542410             mov edx, dword ptr [esp + 0x10]
// 005a285e  8b01                 mov eax, dword ptr [ecx]
// 005a2860  8b4004               mov eax, dword ptr [eax + 4]
// 005a2863  52                   push edx
// 005a2864  8b542410             mov edx, dword ptr [esp + 0x10]
// 005a2868  52                   push edx
// 005a2869  8b542410             mov edx, dword ptr [esp + 0x10]
// 005a286d  52                   push edx
// 005a286e  8b542410             mov edx, dword ptr [esp + 0x10]
// 005a2872  52                   push edx
// 005a2873  ffd0                 call eax
// 005a2875  33c9                 xor ecx, ecx
// 005a2877  83f8ff               cmp eax, -1
// 005a287a  0f94c1               sete cl
// 005a287d  8bc1                 mov eax, ecx
// 005a287f  c3                   ret 
// 005a2880  8b442404             mov eax, dword ptr [esp + 4]
// 005a2884  83f8ff               cmp eax, -1
// 005a2887  7503                 jne 0x5a288c
// 005a2889  0bc0                 or eax, eax
// 005a288b  c3                   ret 
// 005a288c  66837c241400         cmp word ptr [esp + 0x14], 0
// 005a2892  7527                 jne 0x5a28bb
// 005a2894  8b542420             mov edx, dword ptr [esp + 0x20]
// 005a2898  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005a289c  52                   push edx
// 005a289d  8b542414             mov edx, dword ptr [esp + 0x14]
// 005a28a1  51                   push ecx
// 005a28a2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a28a6  52                   push edx
// 005a28a7  8b542414             mov edx, dword ptr [esp + 0x14]
// 005a28ab  51                   push ecx
// 005a28ac  52                   push edx
// 005a28ad  50                   push eax
// 005a28ae  e84dffffff           call 0x5a2800
// 005a28b3  83c418               add esp, 0x18
// 005a28b6  83f8ff               cmp eax, -1
// 005a28b9  7403                 je 0x5a28be
// 005a28bb  33c0                 xor eax, eax
// 005a28bd  c3                   ret 
// 005a28be  ff25383eb200         jmp dword ptr [0xb23e38]
// library rbx2016-raknet/SocketLayer.cpp (function ?SendTo@SocketLayer@RakNet@@SAHIPBDHAAUSystemAddress@2@GI0J@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SocketLayer.cpp
