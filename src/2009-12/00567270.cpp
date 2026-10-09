// roc 2009-12 00567270  unit: RakPeer  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00567270
//
// 00567270  56                   push esi
// 00567271  8bf1                 mov esi, ecx
// 00567273  8b4608               mov eax, dword ptr [esi + 8]
// 00567276  8b4808               mov ecx, dword ptr [eax + 8]
// 00567279  8b5608               mov edx, dword ptr [esi + 8]
// 0056727c  894e0c               mov dword ptr [esi + 0xc], ecx
// 0056727f  8b4208               mov eax, dword ptr [edx + 8]
// 00567282  b901000000           mov ecx, 1
// 00567287  3b4608               cmp eax, dword ptr [esi + 8]
// 0056728a  7433                 je 0x5672bf
// 0056728c  8d642400             lea esp, [esp]
// 00567290  8b4008               mov eax, dword ptr [eax + 8]
// 00567293  41                   inc ecx
// 00567294  3b4608               cmp eax, dword ptr [esi + 8]
// 00567297  75f7                 jne 0x567290
// 00567299  83f908               cmp ecx, 8
// 0056729c  7e21                 jle 0x5672bf
// 0056729e  53                   push ebx
// 0056729f  57                   push edi
// 005672a0  8d59f8               lea ebx, [ecx - 8]
// 005672a3  8b460c               mov eax, dword ptr [esi + 0xc]
// 005672a6  8b7808               mov edi, dword ptr [eax + 8]
// 005672a9  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005672ac  51                   push ecx
// 005672ad  e8a8c52800           call 0x7f385a
// 005672b2  83c404               add esp, 4
// 005672b5  83eb01               sub ebx, 1
// 005672b8  897e0c               mov dword ptr [esi + 0xc], edi
// 005672bb  75e6                 jne 0x5672a3
// 005672bd  5f                   pop edi
// 005672be  5b                   pop ebx
// 005672bf  8b460c               mov eax, dword ptr [esi + 0xc]
// 005672c2  8b5608               mov edx, dword ptr [esi + 8]
// 005672c5  894208               mov dword ptr [edx + 8], eax
// 005672c8  8b4608               mov eax, dword ptr [esi + 8]
// 005672cb  89460c               mov dword ptr [esi + 0xc], eax
// 005672ce  8906                 mov dword ptr [esi], eax
// 005672d0  894604               mov dword ptr [esi + 4], eax
// 005672d3  33c0                 xor eax, eax
// 005672d5  894614               mov dword ptr [esi + 0x14], eax
// 005672d8  894610               mov dword ptr [esi + 0x10], eax
// 005672db  5e                   pop esi
// 005672dc  c3                   ret 
// library rbxgs-raknet/TCPInterface.cpp (function ?Clear@?$SingleProducerConsumer@PAURemoteClient@@@DataStructures@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet TCPInterface.cpp
