// roc 2007-03 004ae8e0  unit: seg_004a0000  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004ae8e0
//
// 004ae8e0  56                   push esi
// 004ae8e1  8bf1                 mov esi, ecx
// 004ae8e3  8b4608               mov eax, dword ptr [esi + 8]
// 004ae8e6  8b4808               mov ecx, dword ptr [eax + 8]
// 004ae8e9  8b5608               mov edx, dword ptr [esi + 8]
// 004ae8ec  894e0c               mov dword ptr [esi + 0xc], ecx
// 004ae8ef  8b4208               mov eax, dword ptr [edx + 8]
// 004ae8f2  3b4608               cmp eax, dword ptr [esi + 8]
// 004ae8f5  b901000000           mov ecx, 1
// 004ae8fa  7435                 je 0x4ae931
// 004ae8fc  8d642400             lea esp, [esp]
// 004ae900  8b4008               mov eax, dword ptr [eax + 8]
// 004ae903  83c101               add ecx, 1
// 004ae906  3b4608               cmp eax, dword ptr [esi + 8]
// 004ae909  75f5                 jne 0x4ae900
// 004ae90b  83f908               cmp ecx, 8
// 004ae90e  7e21                 jle 0x4ae931
// 004ae910  53                   push ebx
// 004ae911  57                   push edi
// 004ae912  8d59f8               lea ebx, [ecx - 8]
// 004ae915  8b460c               mov eax, dword ptr [esi + 0xc]
// 004ae918  8b7808               mov edi, dword ptr [eax + 8]
// 004ae91b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004ae91e  51                   push ecx
// 004ae91f  e8ccf71600           call 0x61e0f0
// 004ae924  83c404               add esp, 4
// 004ae927  83eb01               sub ebx, 1
// 004ae92a  897e0c               mov dword ptr [esi + 0xc], edi
// 004ae92d  75e6                 jne 0x4ae915
// 004ae92f  5f                   pop edi
// 004ae930  5b                   pop ebx
// 004ae931  8b460c               mov eax, dword ptr [esi + 0xc]
// 004ae934  8b5608               mov edx, dword ptr [esi + 8]
// 004ae937  894208               mov dword ptr [edx + 8], eax
// 004ae93a  8b4608               mov eax, dword ptr [esi + 8]
// 004ae93d  89460c               mov dword ptr [esi + 0xc], eax
// 004ae940  8906                 mov dword ptr [esi], eax
// 004ae942  894604               mov dword ptr [esi + 4], eax
// 004ae945  33c0                 xor eax, eax
// 004ae947  894614               mov dword ptr [esi + 0x14], eax
// 004ae94a  894610               mov dword ptr [esi + 0x10], eax
// 004ae94d  5e                   pop esi
// 004ae94e  c3                   ret 
// library rbxgs-raknet/TCPInterface.cpp (function ?Clear@?$SingleProducerConsumer@PAURemoteClient@@@DataStructures@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet TCPInterface.cpp
