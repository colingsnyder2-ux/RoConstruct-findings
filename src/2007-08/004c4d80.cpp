// roc 2007-08 004c4d80  unit: RakPeer  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c4d80
//
// 004c4d80  56                   push esi
// 004c4d81  8bf1                 mov esi, ecx
// 004c4d83  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004c4d86  85c9                 test ecx, ecx
// 004c4d88  752d                 jne 0x4c4db7
// 004c4d8a  6a40                 push 0x40
// 004c4d8c  e865b11600           call 0x62fef6
// 004c4d91  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c4d95  8906                 mov dword ptr [esi], eax
// 004c4d97  c7460400000000       mov dword ptr [esi + 4], 0
// 004c4d9e  c7460801000000       mov dword ptr [esi + 8], 1
// 004c4da5  8b11                 mov edx, dword ptr [ecx]
// 004c4da7  83c404               add esp, 4
// 004c4daa  8910                 mov dword ptr [eax], edx
// 004c4dac  c7460c10000000       mov dword ptr [esi + 0xc], 0x10
// 004c4db3  5e                   pop esi
// 004c4db4  c20800               ret 8
// 004c4db7  8b4604               mov eax, dword ptr [esi + 4]
// 004c4dba  85c0                 test eax, eax
// 004c4dbc  7508                 jne 0x4c4dc6
// 004c4dbe  83c1ff               add ecx, -1
// 004c4dc1  894e04               mov dword ptr [esi + 4], ecx
// 004c4dc4  eb06                 jmp 0x4c4dcc
// 004c4dc6  83c0ff               add eax, -1
// 004c4dc9  894604               mov dword ptr [esi + 4], eax
// 004c4dcc  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004c4dd0  33c0                 xor eax, eax
// 004c4dd2  85d2                 test edx, edx
// 004c4dd4  57                   push edi
// 004c4dd5  7616                 jbe 0x4c4ded
// 004c4dd7  8b4e04               mov ecx, dword ptr [esi + 4]
// 004c4dda  8b3e                 mov edi, dword ptr [esi]
// 004c4ddc  03c8                 add ecx, eax
// 004c4dde  8d0c8f               lea ecx, [edi + ecx*4]
// 004c4de1  8b7904               mov edi, dword ptr [ecx + 4]
// 004c4de4  83c001               add eax, 1
// 004c4de7  3bc2                 cmp eax, edx
// 004c4de9  8939                 mov dword ptr [ecx], edi
// 004c4deb  72ea                 jb 0x4c4dd7
// 004c4ded  8b5604               mov edx, dword ptr [esi + 4]
// 004c4df0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c4df4  8b09                 mov ecx, dword ptr [ecx]
// 004c4df6  03d0                 add edx, eax
// 004c4df8  8b06                 mov eax, dword ptr [esi]
// 004c4dfa  890c90               mov dword ptr [eax + edx*4], ecx
// 004c4dfd  8b5608               mov edx, dword ptr [esi + 8]
// 004c4e00  3b5604               cmp edx, dword ptr [esi + 4]
// 004c4e03  7565                 jne 0x4c4e6a
// 004c4e05  8b460c               mov eax, dword ptr [esi + 0xc]
// 004c4e08  33c9                 xor ecx, ecx
// 004c4e0a  03c0                 add eax, eax
// 004c4e0c  ba04000000           mov edx, 4
// 004c4e11  f7e2                 mul edx
// 004c4e13  0f90c1               seto cl
// 004c4e16  f7d9                 neg ecx
// 004c4e18  0bc8                 or ecx, eax
// 004c4e1a  51                   push ecx
// 004c4e1b  e8d6b01600           call 0x62fef6
// 004c4e20  33c9                 xor ecx, ecx
// 004c4e22  83c404               add esp, 4
// 004c4e25  394e0c               cmp dword ptr [esi + 0xc], ecx
// 004c4e28  8bf8                 mov edi, eax
// 004c4e2a  761f                 jbe 0x4c4e4b
// 004c4e2c  8d642400             lea esp, [esp]
// 004c4e30  8b4604               mov eax, dword ptr [esi + 4]
// 004c4e33  03c1                 add eax, ecx
// 004c4e35  33d2                 xor edx, edx
// 004c4e37  f7760c               div dword ptr [esi + 0xc]
// 004c4e3a  8b06                 mov eax, dword ptr [esi]
// 004c4e3c  83c101               add ecx, 1
// 004c4e3f  8b1490               mov edx, dword ptr [eax + edx*4]
// 004c4e42  89548ffc             mov dword ptr [edi + ecx*4 - 4], edx
// 004c4e46  3b4e0c               cmp ecx, dword ptr [esi + 0xc]
// 004c4e49  72e5                 jb 0x4c4e30
// 004c4e4b  8b460c               mov eax, dword ptr [esi + 0xc]
// 004c4e4e  8b0e                 mov ecx, dword ptr [esi]
// 004c4e50  894608               mov dword ptr [esi + 8], eax
// 004c4e53  03c0                 add eax, eax
// 004c4e55  51                   push ecx
// 004c4e56  c7460400000000       mov dword ptr [esi + 4], 0
// 004c4e5d  89460c               mov dword ptr [esi + 0xc], eax
// 004c4e60  e8fdad1600           call 0x62fc62
// 004c4e65  83c404               add esp, 4
// 004c4e68  893e                 mov dword ptr [esi], edi
// 004c4e6a  5f                   pop edi
// 004c4e6b  5e                   pop esi
// 004c4e6c  c20800               ret 8
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?PushAtHead@?$Queue@PAUInternalPacket@@@DataStructures@@QAEXABQAUInternalPacket@@I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
