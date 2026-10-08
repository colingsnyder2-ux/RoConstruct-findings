// roc 2009-12 004ca370  unit: G3D::VARArea  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ca370
//
// 004ca370  6aff                 push -1
// 004ca372  68342e9300           push 0x932e34
// 004ca377  64a100000000         mov eax, dword ptr fs:[0]
// 004ca37d  50                   push eax
// 004ca37e  64892500000000       mov dword ptr fs:[0], esp
// 004ca385  83ec08               sub esp, 8
// 004ca388  53                   push ebx
// 004ca389  33db                 xor ebx, ebx
// 004ca38b  56                   push esi
// 004ca38c  895c2418             mov dword ptr [esp + 0x18], ebx
// 004ca390  895c2408             mov dword ptr [esp + 8], ebx
// 004ca394  e877feffff           call 0x4ca210
// 004ca399  6a38                 push 0x38
// 004ca39b  e8c0943200           call 0x7f3860
// 004ca3a0  83c404               add esp, 4
// 004ca3a3  8944240c             mov dword ptr [esp + 0xc], eax
// 004ca3a7  c744241801000000     mov dword ptr [esp + 0x18], 1
// 004ca3af  3bc3                 cmp eax, ebx
// 004ca3b1  7413                 je 0x4ca3c6
// 004ca3b3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004ca3b7  8b542424             mov edx, dword ptr [esp + 0x24]
// 004ca3bb  51                   push ecx
// 004ca3bc  52                   push edx
// 004ca3bd  8bc8                 mov ecx, eax
// 004ca3bf  e8ccf7ffff           call 0x4c9b90
// 004ca3c4  eb02                 jmp 0x4ca3c8
// 004ca3c6  33c0                 xor eax, eax
// 004ca3c8  8b742420             mov esi, dword ptr [esp + 0x20]
// 004ca3cc  50                   push eax
// 004ca3cd  8bce                 mov ecx, esi
// 004ca3cf  885c241c             mov byte ptr [esp + 0x1c], bl
// 004ca3d3  891e                 mov dword ptr [esi], ebx
// 004ca3d5  e89617f8ff           call 0x44bb70
// 004ca3da  56                   push esi
// 004ca3db  b930d0b700           mov ecx, 0xb7d030
// 004ca3e0  895c241c             mov dword ptr [esp + 0x1c], ebx
// 004ca3e4  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 004ca3ec  e8fffcffff           call 0x4ca0f0
// 004ca3f1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004ca3f5  8bc6                 mov eax, esi
// 004ca3f7  5e                   pop esi
// 004ca3f8  5b                   pop ebx
// 004ca3f9  64890d00000000       mov dword ptr fs:[0], ecx
// 004ca400  83c414               add esp, 0x14
// 004ca403  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VARArea.cpp (function ?create@VARArea@G3D@@SA?AV?$ReferenceCountedPointer@VVARArea@G3D@@@2@IW4UsageHint@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/VARArea.cpp
