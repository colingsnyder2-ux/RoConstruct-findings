// roc 2008-06 004bc500  unit: ProfiledRakPeer  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004bc500
//
// 004bc500  53                   push ebx
// 004bc501  56                   push esi
// 004bc502  57                   push edi
// 004bc503  6a0c                 push 0xc
// 004bc505  8bf1                 mov esi, ecx
// 004bc507  e814441e00           call 0x6a0920
// 004bc50c  894608               mov dword ptr [esi + 8], eax
// 004bc50f  33db                 xor ebx, ebx
// 004bc511  885804               mov byte ptr [eax + 4], bl
// 004bc514  8b4608               mov eax, dword ptr [esi + 8]
// 004bc517  6a0c                 push 0xc
// 004bc519  89460c               mov dword ptr [esi + 0xc], eax
// 004bc51c  e8ff431e00           call 0x6a0920
// 004bc521  8b4e08               mov ecx, dword ptr [esi + 8]
// 004bc524  83c408               add esp, 8
// 004bc527  894108               mov dword ptr [ecx + 8], eax
// 004bc52a  8d7b06               lea edi, [ebx + 6]
// 004bc52d  8d4900               lea ecx, [ecx]
// 004bc530  8b5608               mov edx, dword ptr [esi + 8]
// 004bc533  8b4208               mov eax, dword ptr [edx + 8]
// 004bc536  6a0c                 push 0xc
// 004bc538  894608               mov dword ptr [esi + 8], eax
// 004bc53b  e8e0431e00           call 0x6a0920
// 004bc540  8b4e08               mov ecx, dword ptr [esi + 8]
// 004bc543  894108               mov dword ptr [ecx + 8], eax
// 004bc546  8b5608               mov edx, dword ptr [esi + 8]
// 004bc549  83c404               add esp, 4
// 004bc54c  83ef01               sub edi, 1
// 004bc54f  885a04               mov byte ptr [edx + 4], bl
// 004bc552  75dc                 jne 0x4bc530
// 004bc554  8b4608               mov eax, dword ptr [esi + 8]
// 004bc557  8b4808               mov ecx, dword ptr [eax + 8]
// 004bc55a  8b560c               mov edx, dword ptr [esi + 0xc]
// 004bc55d  895108               mov dword ptr [ecx + 8], edx
// 004bc560  8b460c               mov eax, dword ptr [esi + 0xc]
// 004bc563  894608               mov dword ptr [esi + 8], eax
// 004bc566  8906                 mov dword ptr [esi], eax
// 004bc568  894604               mov dword ptr [esi + 4], eax
// 004bc56b  5f                   pop edi
// 004bc56c  895e14               mov dword ptr [esi + 0x14], ebx
// 004bc56f  895e10               mov dword ptr [esi + 0x10], ebx
// 004bc572  8bc6                 mov eax, esi
// 004bc574  5e                   pop esi
// 004bc575  5b                   pop ebx
// 004bc576  c3                   ret 
// library rbxgs-raknet/TCPInterface.cpp (function ??0?$SingleProducerConsumer@PAURemoteClient@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet TCPInterface.cpp
