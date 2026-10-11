// roc 2007-08 004b94c0  unit: RakPeer  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b94c0
//
// 004b94c0  56                   push esi
// 004b94c1  8bf1                 mov esi, ecx
// 004b94c3  8b4608               mov eax, dword ptr [esi + 8]
// 004b94c6  8b8824010000         mov ecx, dword ptr [eax + 0x124]
// 004b94cc  8b5608               mov edx, dword ptr [esi + 8]
// 004b94cf  894e0c               mov dword ptr [esi + 0xc], ecx
// 004b94d2  8b8224010000         mov eax, dword ptr [edx + 0x124]
// 004b94d8  3b4608               cmp eax, dword ptr [esi + 8]
// 004b94db  b901000000           mov ecx, 1
// 004b94e0  743d                 je 0x4b951f
// 004b94e2  8b8024010000         mov eax, dword ptr [eax + 0x124]
// 004b94e8  83c101               add ecx, 1
// 004b94eb  3b4608               cmp eax, dword ptr [esi + 8]
// 004b94ee  75f2                 jne 0x4b94e2
// 004b94f0  83f908               cmp ecx, 8
// 004b94f3  7e2a                 jle 0x4b951f
// 004b94f5  53                   push ebx
// 004b94f6  57                   push edi
// 004b94f7  8d59f8               lea ebx, [ecx - 8]
// 004b94fa  8d9b00000000         lea ebx, [ebx]
// 004b9500  8b460c               mov eax, dword ptr [esi + 0xc]
// 004b9503  8bb824010000         mov edi, dword ptr [eax + 0x124]
// 004b9509  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004b950c  51                   push ecx
// 004b950d  e850671700           call 0x62fc62
// 004b9512  83c404               add esp, 4
// 004b9515  83eb01               sub ebx, 1
// 004b9518  897e0c               mov dword ptr [esi + 0xc], edi
// 004b951b  75e3                 jne 0x4b9500
// 004b951d  5f                   pop edi
// 004b951e  5b                   pop ebx
// 004b951f  8b460c               mov eax, dword ptr [esi + 0xc]
// 004b9522  8b5608               mov edx, dword ptr [esi + 8]
// 004b9525  898224010000         mov dword ptr [edx + 0x124], eax
// 004b952b  8b4608               mov eax, dword ptr [esi + 8]
// 004b952e  89460c               mov dword ptr [esi + 0xc], eax
// 004b9531  8906                 mov dword ptr [esi], eax
// 004b9533  894604               mov dword ptr [esi + 4], eax
// 004b9536  33c0                 xor eax, eax
// 004b9538  894614               mov dword ptr [esi + 0x14], eax
// 004b953b  894610               mov dword ptr [esi + 0x10], eax
// 004b953e  5e                   pop esi
// 004b953f  c3                   ret 
// library openrbx-raknet/RakPeer.cpp (function ?Clear@?$SingleProducerConsumer@URequestedConnectionStruct@RakPeer@@@DataStructures@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet RakPeer.cpp
