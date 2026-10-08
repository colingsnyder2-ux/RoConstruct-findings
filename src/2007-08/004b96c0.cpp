// roc 2007-08 004b96c0  unit: RakPeer  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b96c0
//
// 004b96c0  53                   push ebx
// 004b96c1  56                   push esi
// 004b96c2  57                   push edi
// 004b96c3  6a0c                 push 0xc
// 004b96c5  8bf1                 mov esi, ecx
// 004b96c7  e82a681700           call 0x62fef6
// 004b96cc  894608               mov dword ptr [esi + 8], eax
// 004b96cf  33db                 xor ebx, ebx
// 004b96d1  885804               mov byte ptr [eax + 4], bl
// 004b96d4  8b4608               mov eax, dword ptr [esi + 8]
// 004b96d7  6a0c                 push 0xc
// 004b96d9  89460c               mov dword ptr [esi + 0xc], eax
// 004b96dc  e815681700           call 0x62fef6
// 004b96e1  8b4e08               mov ecx, dword ptr [esi + 8]
// 004b96e4  83c408               add esp, 8
// 004b96e7  894108               mov dword ptr [ecx + 8], eax
// 004b96ea  bf06000000           mov edi, 6
// 004b96ef  90                   nop 
// 004b96f0  8b5608               mov edx, dword ptr [esi + 8]
// 004b96f3  8b4208               mov eax, dword ptr [edx + 8]
// 004b96f6  6a0c                 push 0xc
// 004b96f8  894608               mov dword ptr [esi + 8], eax
// 004b96fb  e8f6671700           call 0x62fef6
// 004b9700  8b4e08               mov ecx, dword ptr [esi + 8]
// 004b9703  894108               mov dword ptr [ecx + 8], eax
// 004b9706  8b5608               mov edx, dword ptr [esi + 8]
// 004b9709  83c404               add esp, 4
// 004b970c  83ef01               sub edi, 1
// 004b970f  885a04               mov byte ptr [edx + 4], bl
// 004b9712  75dc                 jne 0x4b96f0
// 004b9714  8b4608               mov eax, dword ptr [esi + 8]
// 004b9717  8b4808               mov ecx, dword ptr [eax + 8]
// 004b971a  8b560c               mov edx, dword ptr [esi + 0xc]
// 004b971d  895108               mov dword ptr [ecx + 8], edx
// 004b9720  8b460c               mov eax, dword ptr [esi + 0xc]
// 004b9723  894608               mov dword ptr [esi + 8], eax
// 004b9726  8906                 mov dword ptr [esi], eax
// 004b9728  894604               mov dword ptr [esi + 4], eax
// 004b972b  5f                   pop edi
// 004b972c  895e14               mov dword ptr [esi + 0x14], ebx
// 004b972f  895e10               mov dword ptr [esi + 0x10], ebx
// 004b9732  8bc6                 mov eax, esi
// 004b9734  5e                   pop esi
// 004b9735  5b                   pop ebx
// 004b9736  c3                   ret 
// library rbxgs-raknet/TCPInterface.cpp (function ??0?$SingleProducerConsumer@PAURemoteClient@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet TCPInterface.cpp
