// roc 2007-08 004ba0e0  unit: RakPeer  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ba0e0
//
// 004ba0e0  8b442408             mov eax, dword ptr [esp + 8]
// 004ba0e4  85c0                 test eax, eax
// 004ba0e6  53                   push ebx
// 004ba0e7  56                   push esi
// 004ba0e8  57                   push edi
// 004ba0e9  745a                 je 0x4ba145
// 004ba0eb  8b10                 mov edx, dword ptr [eax]
// 004ba0ed  8b700c               mov esi, dword ptr [eax + 0xc]
// 004ba0f0  8b442440             mov eax, dword ptr [esp + 0x40]
// 004ba0f4  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 004ba0f8  50                   push eax
// 004ba0f9  83ec0c               sub esp, 0xc
// 004ba0fc  8bc4                 mov eax, esp
// 004ba0fe  8918                 mov dword ptr [eax], ebx
// 004ba100  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 004ba104  895804               mov dword ptr [eax + 4], ebx
// 004ba107  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 004ba10b  8b39                 mov edi, dword ptr [ecx]
// 004ba10d  895808               mov dword ptr [eax + 8], ebx
// 004ba110  8b442440             mov eax, dword ptr [esp + 0x40]
// 004ba114  50                   push eax
// 004ba115  8b442440             mov eax, dword ptr [esp + 0x40]
// 004ba119  50                   push eax
// 004ba11a  8b442440             mov eax, dword ptr [esp + 0x40]
// 004ba11e  50                   push eax
// 004ba11f  8b442440             mov eax, dword ptr [esp + 0x40]
// 004ba123  50                   push eax
// 004ba124  8b442440             mov eax, dword ptr [esp + 0x40]
// 004ba128  50                   push eax
// 004ba129  8b442440             mov eax, dword ptr [esp + 0x40]
// 004ba12d  50                   push eax
// 004ba12e  8b442440             mov eax, dword ptr [esp + 0x40]
// 004ba132  50                   push eax
// 004ba133  8b4760               mov eax, dword ptr [edi + 0x60]
// 004ba136  52                   push edx
// 004ba137  8b542440             mov edx, dword ptr [esp + 0x40]
// 004ba13b  56                   push esi
// 004ba13c  52                   push edx
// 004ba13d  ffd0                 call eax
// 004ba13f  5f                   pop edi
// 004ba140  5e                   pop esi
// 004ba141  5b                   pop ebx
// 004ba142  c23400               ret 0x34
// 004ba145  8b442440             mov eax, dword ptr [esp + 0x40]
// 004ba149  8b742434             mov esi, dword ptr [esp + 0x34]
// 004ba14d  50                   push eax
// 004ba14e  83ec0c               sub esp, 0xc
// 004ba151  8bc4                 mov eax, esp
// 004ba153  8930                 mov dword ptr [eax], esi
// 004ba155  8b742448             mov esi, dword ptr [esp + 0x48]
// 004ba159  897004               mov dword ptr [eax + 4], esi
// 004ba15c  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 004ba160  8b11                 mov edx, dword ptr [ecx]
// 004ba162  897008               mov dword ptr [eax + 8], esi
// 004ba165  8b442440             mov eax, dword ptr [esp + 0x40]
// 004ba169  50                   push eax
// 004ba16a  8b442440             mov eax, dword ptr [esp + 0x40]
// 004ba16e  50                   push eax
// 004ba16f  8b442440             mov eax, dword ptr [esp + 0x40]
// 004ba173  8b5260               mov edx, dword ptr [edx + 0x60]
// 004ba176  50                   push eax
// 004ba177  8b442440             mov eax, dword ptr [esp + 0x40]
// 004ba17b  50                   push eax
// 004ba17c  8b442440             mov eax, dword ptr [esp + 0x40]
// 004ba180  50                   push eax
// 004ba181  8b442440             mov eax, dword ptr [esp + 0x40]
// 004ba185  50                   push eax
// 004ba186  8b442440             mov eax, dword ptr [esp + 0x40]
// 004ba18a  50                   push eax
// 004ba18b  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 004ba18f  6a00                 push 0
// 004ba191  6a00                 push 0
// 004ba193  50                   push eax
// 004ba194  ffd2                 call edx
// 004ba196  5f                   pop edi
// 004ba197  5e                   pop esi
// 004ba198  5b                   pop ebx
// 004ba199  c23400               ret 0x34
// library openrbx-raknet/RakPeer.cpp (function ?RPC@RakPeer@@UAE_NPBDPBVBitStream@RakNet@@W4PacketPriority@@W4PacketReliability@@DUSystemAddress@@_NPAIUNetworkID@@PAV23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet RakPeer.cpp
