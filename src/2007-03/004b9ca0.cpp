// roc 2007-03 004b9ca0  unit: seg_004b0000  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b9ca0
//
// 004b9ca0  56                   push esi
// 004b9ca1  8bf1                 mov esi, ecx
// 004b9ca3  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004b9ca6  85c9                 test ecx, ecx
// 004b9ca8  752d                 jne 0x4b9cd7
// 004b9caa  6a40                 push 0x40
// 004b9cac  e857441600           call 0x61e108
// 004b9cb1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b9cb5  8906                 mov dword ptr [esi], eax
// 004b9cb7  c7460400000000       mov dword ptr [esi + 4], 0
// 004b9cbe  c7460801000000       mov dword ptr [esi + 8], 1
// 004b9cc5  8b11                 mov edx, dword ptr [ecx]
// 004b9cc7  83c404               add esp, 4
// 004b9cca  8910                 mov dword ptr [eax], edx
// 004b9ccc  c7460c10000000       mov dword ptr [esi + 0xc], 0x10
// 004b9cd3  5e                   pop esi
// 004b9cd4  c20800               ret 8
// 004b9cd7  8b4604               mov eax, dword ptr [esi + 4]
// 004b9cda  85c0                 test eax, eax
// 004b9cdc  7508                 jne 0x4b9ce6
// 004b9cde  83c1ff               add ecx, -1
// 004b9ce1  894e04               mov dword ptr [esi + 4], ecx
// 004b9ce4  eb06                 jmp 0x4b9cec
// 004b9ce6  83c0ff               add eax, -1
// 004b9ce9  894604               mov dword ptr [esi + 4], eax
// 004b9cec  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004b9cf0  33c0                 xor eax, eax
// 004b9cf2  85d2                 test edx, edx
// 004b9cf4  57                   push edi
// 004b9cf5  7616                 jbe 0x4b9d0d
// 004b9cf7  8b4e04               mov ecx, dword ptr [esi + 4]
// 004b9cfa  8b3e                 mov edi, dword ptr [esi]
// 004b9cfc  03c8                 add ecx, eax
// 004b9cfe  8d0c8f               lea ecx, [edi + ecx*4]
// 004b9d01  8b7904               mov edi, dword ptr [ecx + 4]
// 004b9d04  83c001               add eax, 1
// 004b9d07  3bc2                 cmp eax, edx
// 004b9d09  8939                 mov dword ptr [ecx], edi
// 004b9d0b  72ea                 jb 0x4b9cf7
// 004b9d0d  8b5604               mov edx, dword ptr [esi + 4]
// 004b9d10  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b9d14  8b09                 mov ecx, dword ptr [ecx]
// 004b9d16  03d0                 add edx, eax
// 004b9d18  8b06                 mov eax, dword ptr [esi]
// 004b9d1a  890c90               mov dword ptr [eax + edx*4], ecx
// 004b9d1d  8b5608               mov edx, dword ptr [esi + 8]
// 004b9d20  3b5604               cmp edx, dword ptr [esi + 4]
// 004b9d23  7565                 jne 0x4b9d8a
// 004b9d25  8b460c               mov eax, dword ptr [esi + 0xc]
// 004b9d28  33c9                 xor ecx, ecx
// 004b9d2a  03c0                 add eax, eax
// 004b9d2c  ba04000000           mov edx, 4
// 004b9d31  f7e2                 mul edx
// 004b9d33  0f90c1               seto cl
// 004b9d36  f7d9                 neg ecx
// 004b9d38  0bc8                 or ecx, eax
// 004b9d3a  51                   push ecx
// 004b9d3b  e8c8431600           call 0x61e108
// 004b9d40  33c9                 xor ecx, ecx
// 004b9d42  83c404               add esp, 4
// 004b9d45  394e0c               cmp dword ptr [esi + 0xc], ecx
// 004b9d48  8bf8                 mov edi, eax
// 004b9d4a  761f                 jbe 0x4b9d6b
// 004b9d4c  8d642400             lea esp, [esp]
// 004b9d50  8b4604               mov eax, dword ptr [esi + 4]
// 004b9d53  03c1                 add eax, ecx
// 004b9d55  33d2                 xor edx, edx
// 004b9d57  f7760c               div dword ptr [esi + 0xc]
// 004b9d5a  8b06                 mov eax, dword ptr [esi]
// 004b9d5c  83c101               add ecx, 1
// 004b9d5f  8b1490               mov edx, dword ptr [eax + edx*4]
// 004b9d62  89548ffc             mov dword ptr [edi + ecx*4 - 4], edx
// 004b9d66  3b4e0c               cmp ecx, dword ptr [esi + 0xc]
// 004b9d69  72e5                 jb 0x4b9d50
// 004b9d6b  8b460c               mov eax, dword ptr [esi + 0xc]
// 004b9d6e  8b0e                 mov ecx, dword ptr [esi]
// 004b9d70  894608               mov dword ptr [esi + 8], eax
// 004b9d73  03c0                 add eax, eax
// 004b9d75  51                   push ecx
// 004b9d76  c7460400000000       mov dword ptr [esi + 4], 0
// 004b9d7d  89460c               mov dword ptr [esi + 0xc], eax
// 004b9d80  e86b431600           call 0x61e0f0
// 004b9d85  83c404               add esp, 4
// 004b9d88  893e                 mov dword ptr [esi], edi
// 004b9d8a  5f                   pop edi
// 004b9d8b  5e                   pop esi
// 004b9d8c  c20800               ret 8
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?PushAtHead@?$Queue@PAUInternalPacket@@@DataStructures@@QAEXABQAUInternalPacket@@I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
