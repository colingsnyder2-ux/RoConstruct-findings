// from server: 98% by colin
// roc 2008-06 0056d9b0  unit: G3D::VColor3::?$holder  size: 290 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056d9b0
//
// 0056d9b0  64a100000000         mov eax, dword ptr fs:[0]
// 0056d9b6  6aff                 push -1
// 0056d9b8  68d9fe7c00           push 0x7cfed9
// 0056d9bd  50                   push eax
// 0056d9be  64892500000000       mov dword ptr fs:[0], esp
// 0056d9c5  83ec74               sub esp, 0x74
// 0056d9c8  53                   push ebx
// 0056d9c9  8b1d78288000         mov ebx, dword ptr [0x802878]
// 0056d9cf  56                   push esi
// 0056d9d0  57                   push edi
// 0056d9d1  8bf9                 mov edi, ecx
// 0056d9d3  8d7704               lea esi, [edi + 4]
// 0056d9d6  85f6                 test esi, esi
// 0056d9d8  7428                 je 0x56da02
// 0056d9da  8b0e                 mov ecx, dword ptr [esi]
// 0056d9dc  85c9                 test ecx, ecx
// 0056d9de  7409                 je 0x56d9e9
// 0056d9e0  8b01                 mov eax, dword ptr [ecx]
// 0056d9e2  8b5004               mov edx, dword ptr [eax + 4]
// 0056d9e5  ffd2                 call edx
// 0056d9e7  eb05                 jmp 0x56d9ee
// 0056d9e9  b814969200           mov eax, 0x929614
// 0056d9ee  6880639400           push 0x946380
// 0056d9f3  8bc8                 mov ecx, eax
// 0056d9f5  ffd3                 call ebx
// 0056d9f7  84c0                 test al, al
// 0056d9f9  7407                 je 0x56da02
// 0056d9fb  8b06                 mov eax, dword ptr [esi]
// 0056d9fd  83c004               add eax, 4
// 0056da00  7551                 jne 0x56da53
// 0056da02  8b07                 mov eax, dword ptr [edi]
// 0056da04  8b4008               mov eax, dword ptr [eax + 8]
// 0056da07  50                   push eax
// 0056da08  b9f8be9200           mov ecx, 0x92bef8
// 0056da0d  ffd3                 call ebx
// 0056da0f  84c0                 test al, al
// 0056da11  7458                 je 0x56da6b
// 0056da13  8d4c2450             lea ecx, [esp + 0x50]
// 0056da17  e8b4a8f0ff           call 0x4782d0
// 0056da1c  8d4c2450             lea ecx, [esp + 0x50]
// 0056da20  51                   push ecx
// 0056da21  56                   push esi
// 0056da22  e86982eaff           call 0x415c90
// 0056da27  83c404               add esp, 4
// 0056da2a  50                   push eax
// 0056da2b  e8c0c80900           call 0x60a2f0
// 0056da30  83c408               add esp, 8
// 0056da33  84c0                 test al, al
// 0056da35  7434                 je 0x56da6b
// 0056da37  8