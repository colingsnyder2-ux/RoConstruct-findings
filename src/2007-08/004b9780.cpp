// roc 2007-08 004b9780  unit: RakPeer  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b9780
//
// 004b9780  56                   push esi
// 004b9781  8bf1                 mov esi, ecx
// 004b9783  8b4608               mov eax, dword ptr [esi + 8]
// 004b9786  8b4808               mov ecx, dword ptr [eax + 8]
// 004b9789  8b5608               mov edx, dword ptr [esi + 8]
// 004b978c  894e0c               mov dword ptr [esi + 0xc], ecx
// 004b978f  8b4208               mov eax, dword ptr [edx + 8]
// 004b9792  3b4608               cmp eax, dword ptr [esi + 8]
// 004b9795  b901000000           mov ecx, 1
// 004b979a  7435                 je 0x4b97d1
// 004b979c  8d642400             lea esp, [esp]
// 004b97a0  8b4008               mov eax, dword ptr [eax + 8]
// 004b97a3  83c101               add ecx, 1
// 004b97a6  3b4608               cmp eax, dword ptr [esi + 8]
// 004b97a9  75f5                 jne 0x4b97a0
// 004b97ab  83f908               cmp ecx, 8
// 004b97ae  7e21                 jle 0x4b97d1
// 004b97b0  53                   push ebx
// 004b97b1  57                   push edi
// 004b97b2  8d59f8               lea ebx, [ecx - 8]
// 004b97b5  8b460c               mov eax, dword ptr [esi + 0xc]
// 004b97b8  8b7808               mov edi, dword ptr [eax + 8]
// 004b97bb  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004b97be  51                   push ecx
// 004b97bf  e89e641700           call 0x62fc62
// 004b97c4  83c404               add esp, 4
// 004b97c7  83eb01               sub ebx, 1
// 004b97ca  897e0c               mov dword ptr [esi + 0xc], edi
// 004b97cd  75e6                 jne 0x4b97b5
// 004b97cf  5f                   pop edi
// 004b97d0  5b                   pop ebx
// 004b97d1  8b460c               mov eax, dword ptr [esi + 0xc]
// 004b97d4  8b5608               mov edx, dword ptr [esi + 8]
// 004b97d7  894208               mov dword ptr [edx + 8], eax
// 004b97da  8b4608               mov eax, dword ptr [esi + 8]
// 004b97dd  89460c               mov dword ptr [esi + 0xc], eax
// 004b97e0  8906                 mov dword ptr [esi], eax
// 004b97e2  894604               mov dword ptr [esi + 4], eax
// 004b97e5  33c0                 xor eax, eax
// 004b97e7  894614               mov dword ptr [esi + 0x14], eax
// 004b97ea  894610               mov dword ptr [esi + 0x10], eax
// 004b97ed  5e                   pop esi
// 004b97ee  c3                   ret 
// library rbxgs-raknet/TCPInterface.cpp (function ?Clear@?$SingleProducerConsumer@PAURemoteClient@@@DataStructures@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet TCPInterface.cpp
