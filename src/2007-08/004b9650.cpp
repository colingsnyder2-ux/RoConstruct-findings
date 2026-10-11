// roc 2007-08 004b9650  unit: RakPeer  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b9650
//
// 004b9650  56                   push esi
// 004b9651  8bf1                 mov esi, ecx
// 004b9653  8b4608               mov eax, dword ptr [esi + 8]
// 004b9656  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 004b9659  8b5608               mov edx, dword ptr [esi + 8]
// 004b965c  894e0c               mov dword ptr [esi + 0xc], ecx
// 004b965f  8b423c               mov eax, dword ptr [edx + 0x3c]
// 004b9662  3b4608               cmp eax, dword ptr [esi + 8]
// 004b9665  b901000000           mov ecx, 1
// 004b966a  7435                 je 0x4b96a1
// 004b966c  8d642400             lea esp, [esp]
// 004b9670  8b403c               mov eax, dword ptr [eax + 0x3c]
// 004b9673  83c101               add ecx, 1
// 004b9676  3b4608               cmp eax, dword ptr [esi + 8]
// 004b9679  75f5                 jne 0x4b9670
// 004b967b  83f908               cmp ecx, 8
// 004b967e  7e21                 jle 0x4b96a1
// 004b9680  53                   push ebx
// 004b9681  57                   push edi
// 004b9682  8d59f8               lea ebx, [ecx - 8]
// 004b9685  8b460c               mov eax, dword ptr [esi + 0xc]
// 004b9688  8b783c               mov edi, dword ptr [eax + 0x3c]
// 004b968b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004b968e  51                   push ecx
// 004b968f  e8ce651700           call 0x62fc62
// 004b9694  83c404               add esp, 4
// 004b9697  83eb01               sub ebx, 1
// 004b969a  897e0c               mov dword ptr [esi + 0xc], edi
// 004b969d  75e6                 jne 0x4b9685
// 004b969f  5f                   pop edi
// 004b96a0  5b                   pop ebx
// 004b96a1  8b460c               mov eax, dword ptr [esi + 0xc]
// 004b96a4  8b5608               mov edx, dword ptr [esi + 8]
// 004b96a7  89423c               mov dword ptr [edx + 0x3c], eax
// 004b96aa  8b4608               mov eax, dword ptr [esi + 8]
// 004b96ad  89460c               mov dword ptr [esi + 0xc], eax
// 004b96b0  8906                 mov dword ptr [esi], eax
// 004b96b2  894604               mov dword ptr [esi + 4], eax
// 004b96b5  33c0                 xor eax, eax
// 004b96b7  894614               mov dword ptr [esi + 0x14], eax
// 004b96ba  894610               mov dword ptr [esi + 0x10], eax
// 004b96bd  5e                   pop esi
// 004b96be  c3                   ret 
// library openrbx-raknet/RakPeer.cpp (function ?Clear@?$SingleProducerConsumer@UBufferedCommandStruct@RakPeer@@@DataStructures@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet RakPeer.cpp
