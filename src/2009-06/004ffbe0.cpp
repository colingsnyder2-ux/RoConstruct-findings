// roc 2009-06 004ffbe0  unit: RakPeer  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004ffbe0
//
// 004ffbe0  56                   push esi
// 004ffbe1  8bf1                 mov esi, ecx
// 004ffbe3  8b4608               mov eax, dword ptr [esi + 8]
// 004ffbe6  8b4808               mov ecx, dword ptr [eax + 8]
// 004ffbe9  8b5608               mov edx, dword ptr [esi + 8]
// 004ffbec  894e0c               mov dword ptr [esi + 0xc], ecx
// 004ffbef  8b4208               mov eax, dword ptr [edx + 8]
// 004ffbf2  b901000000           mov ecx, 1
// 004ffbf7  3b4608               cmp eax, dword ptr [esi + 8]
// 004ffbfa  7433                 je 0x4ffc2f
// 004ffbfc  8d642400             lea esp, [esp]
// 004ffc00  8b4008               mov eax, dword ptr [eax + 8]
// 004ffc03  41                   inc ecx
// 004ffc04  3b4608               cmp eax, dword ptr [esi + 8]
// 004ffc07  75f7                 jne 0x4ffc00
// 004ffc09  83f908               cmp ecx, 8
// 004ffc0c  7e21                 jle 0x4ffc2f
// 004ffc0e  53                   push ebx
// 004ffc0f  57                   push edi
// 004ffc10  8d59f8               lea ebx, [ecx - 8]
// 004ffc13  8b460c               mov eax, dword ptr [esi + 0xc]
// 004ffc16  8b7808               mov edi, dword ptr [eax + 8]
// 004ffc19  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004ffc1c  51                   push ecx
// 004ffc1d  e8108e2100           call 0x718a32
// 004ffc22  83c404               add esp, 4
// 004ffc25  83eb01               sub ebx, 1
// 004ffc28  897e0c               mov dword ptr [esi + 0xc], edi
// 004ffc2b  75e6                 jne 0x4ffc13
// 004ffc2d  5f                   pop edi
// 004ffc2e  5b                   pop ebx
// 004ffc2f  8b460c               mov eax, dword ptr [esi + 0xc]
// 004ffc32  8b5608               mov edx, dword ptr [esi + 8]
// 004ffc35  894208               mov dword ptr [edx + 8], eax
// 004ffc38  8b4608               mov eax, dword ptr [esi + 8]
// 004ffc3b  89460c               mov dword ptr [esi + 0xc], eax
// 004ffc3e  8906                 mov dword ptr [esi], eax
// 004ffc40  894604               mov dword ptr [esi + 4], eax
// 004ffc43  33c0                 xor eax, eax
// 004ffc45  894614               mov dword ptr [esi + 0x14], eax
// 004ffc48  894610               mov dword ptr [esi + 0x10], eax
// 004ffc4b  5e                   pop esi
// 004ffc4c  c3                   ret 
// library rbxgs-raknet/TCPInterface.cpp (function ?Clear@?$SingleProducerConsumer@PAURemoteClient@@@DataStructures@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet TCPInterface.cpp
