// roc 2008-06 004ceeb0  unit: RBX::Network::PhysicsSender  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ceeb0
//
// 004ceeb0  56                   push esi
// 004ceeb1  8bf1                 mov esi, ecx
// 004ceeb3  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004ceeb6  85c9                 test ecx, ecx
// 004ceeb8  752d                 jne 0x4ceee7
// 004ceeba  6a40                 push 0x40
// 004ceebc  e85f1a1d00           call 0x6a0920
// 004ceec1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004ceec5  8906                 mov dword ptr [esi], eax
// 004ceec7  c7460400000000       mov dword ptr [esi + 4], 0
// 004ceece  c7460801000000       mov dword ptr [esi + 8], 1
// 004ceed5  8b11                 mov edx, dword ptr [ecx]
// 004ceed7  83c404               add esp, 4
// 004ceeda  8910                 mov dword ptr [eax], edx
// 004ceedc  c7460c10000000       mov dword ptr [esi + 0xc], 0x10
// 004ceee3  5e                   pop esi
// 004ceee4  c20800               ret 8
// 004ceee7  8b4604               mov eax, dword ptr [esi + 4]
// 004ceeea  85c0                 test eax, eax
// 004ceeec  7506                 jne 0x4ceef4
// 004ceeee  49                   dec ecx
// 004ceeef  894e04               mov dword ptr [esi + 4], ecx
// 004ceef2  eb04                 jmp 0x4ceef8
// 004ceef4  48                   dec eax
// 004ceef5  894604               mov dword ptr [esi + 4], eax
// 004ceef8  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004ceefc  33c0                 xor eax, eax
// 004ceefe  57                   push edi
// 004ceeff  85d2                 test edx, edx
// 004cef01  7614                 jbe 0x4cef17
// 004cef03  8b4e04               mov ecx, dword ptr [esi + 4]
// 004cef06  8b3e                 mov edi, dword ptr [esi]
// 004cef08  03c8                 add ecx, eax
// 004cef0a  8d0c8f               lea ecx, [edi + ecx*4]
// 004cef0d  8b7904               mov edi, dword ptr [ecx + 4]
// 004cef10  40                   inc eax
// 004cef11  8939                 mov dword ptr [ecx], edi
// 004cef13  3bc2                 cmp eax, edx
// 004cef15  72ec                 jb 0x4cef03
// 004cef17  8b5604               mov edx, dword ptr [esi + 4]
// 004cef1a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004cef1e  8b09                 mov ecx, dword ptr [ecx]
// 004cef20  03d0                 add edx, eax
// 004cef22  8b06                 mov eax, dword ptr [esi]
// 004cef24  890c90               mov dword ptr [eax + edx*4], ecx
// 004cef27  8b5608               mov edx, dword ptr [esi + 8]
// 004cef2a  3b5604               cmp edx, dword ptr [esi + 4]
// 004cef2d  755f                 jne 0x4cef8e
// 004cef2f  8b460c               mov eax, dword ptr [esi + 0xc]
// 004cef32  33c9                 xor ecx, ecx
// 004cef34  03c0                 add eax, eax
// 004cef36  ba04000000           mov edx, 4
// 004cef3b  f7e2                 mul edx
// 004cef3d  0f90c1               seto cl
// 004cef40  f7d9                 neg ecx
// 004cef42  0bc8                 or ecx, eax
// 004cef44  51                   push ecx
// 004cef45  e8d6191d00           call 0x6a0920
// 004cef4a  33c9                 xor ecx, ecx
// 004cef4c  83c404               add esp, 4
// 004cef4f  8bf8                 mov edi, eax
// 004cef51  394e0c               cmp dword ptr [esi + 0xc], ecx
// 004cef54  7619                 jbe 0x4cef6f
// 004cef56  8b4604               mov eax, dword ptr [esi + 4]
// 004cef59  03c1                 add eax, ecx
// 004cef5b  33d2                 xor edx, edx
// 004cef5d  f7760c               div dword ptr [esi + 0xc]
// 004cef60  8b06                 mov eax, dword ptr [esi]
// 004cef62  41                   inc ecx
// 004cef63  8b1490               mov edx, dword ptr [eax + edx*4]
// 004cef66  89548ffc             mov dword ptr [edi + ecx*4 - 4], edx
// 004cef6a  3b4e0c               cmp ecx, dword ptr [esi + 0xc]
// 004cef6d  72e7                 jb 0x4cef56
// 004cef6f  8b460c               mov eax, dword ptr [esi + 0xc]
// 004cef72  8b0e                 mov ecx, dword ptr [esi]
// 004cef74  894608               mov dword ptr [esi + 8], eax
// 004cef77  03c0                 add eax, eax
// 004cef79  51                   push ecx
// 004cef7a  c7460400000000       mov dword ptr [esi + 4], 0
// 004cef81  89460c               mov dword ptr [esi + 0xc], eax
// 004cef84  e8f1161d00           call 0x6a067a
// 004cef89  83c404               add esp, 4
// 004cef8c  893e                 mov dword ptr [esi], edi
// 004cef8e  5f                   pop edi
// 004cef8f  5e                   pop esi
// 004cef90  c20800               ret 8
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?PushAtHead@?$Queue@PAUInternalPacket@@@DataStructures@@QAEXABQAUInternalPacket@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
