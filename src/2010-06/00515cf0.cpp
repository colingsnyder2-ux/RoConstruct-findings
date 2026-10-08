// roc 2010-06 00515cf0  unit: RakPeer  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00515cf0
//
// 00515cf0  56                   push esi
// 00515cf1  8bf1                 mov esi, ecx
// 00515cf3  8b4608               mov eax, dword ptr [esi + 8]
// 00515cf6  8b4808               mov ecx, dword ptr [eax + 8]
// 00515cf9  8b5608               mov edx, dword ptr [esi + 8]
// 00515cfc  894e0c               mov dword ptr [esi + 0xc], ecx
// 00515cff  8b4208               mov eax, dword ptr [edx + 8]
// 00515d02  b901000000           mov ecx, 1
// 00515d07  3b4608               cmp eax, dword ptr [esi + 8]
// 00515d0a  7433                 je 0x515d3f
// 00515d0c  8d642400             lea esp, [esp]
// 00515d10  8b4008               mov eax, dword ptr [eax + 8]
// 00515d13  41                   inc ecx
// 00515d14  3b4608               cmp eax, dword ptr [esi + 8]
// 00515d17  75f7                 jne 0x515d10
// 00515d19  83f908               cmp ecx, 8
// 00515d1c  7e21                 jle 0x515d3f
// 00515d1e  53                   push ebx
// 00515d1f  57                   push edi
// 00515d20  8d59f8               lea ebx, [ecx - 8]
// 00515d23  8b460c               mov eax, dword ptr [esi + 0xc]
// 00515d26  8b7808               mov edi, dword ptr [eax + 8]
// 00515d29  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00515d2c  51                   push ecx
// 00515d2d  e8681c2900           call 0x7a799a
// 00515d32  83c404               add esp, 4
// 00515d35  83eb01               sub ebx, 1
// 00515d38  897e0c               mov dword ptr [esi + 0xc], edi
// 00515d3b  75e6                 jne 0x515d23
// 00515d3d  5f                   pop edi
// 00515d3e  5b                   pop ebx
// 00515d3f  8b460c               mov eax, dword ptr [esi + 0xc]
// 00515d42  8b5608               mov edx, dword ptr [esi + 8]
// 00515d45  894208               mov dword ptr [edx + 8], eax
// 00515d48  8b4608               mov eax, dword ptr [esi + 8]
// 00515d4b  89460c               mov dword ptr [esi + 0xc], eax
// 00515d4e  8906                 mov dword ptr [esi], eax
// 00515d50  894604               mov dword ptr [esi + 4], eax
// 00515d53  33c0                 xor eax, eax
// 00515d55  894614               mov dword ptr [esi + 0x14], eax
// 00515d58  894610               mov dword ptr [esi + 0x10], eax
// 00515d5b  5e                   pop esi
// 00515d5c  c3                   ret 
// library rbxgs-raknet/TCPInterface.cpp (function ?Clear@?$SingleProducerConsumer@PAURemoteClient@@@DataStructures@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet TCPInterface.cpp
