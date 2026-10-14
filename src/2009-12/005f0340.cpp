// roc 2009-12 005f0340  unit: seg_005f0000  size: 356 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f0340
//
// 005f0340  64a100000000         mov eax, dword ptr fs:[0]
// 005f0346  6aff                 push -1
// 005f0348  6820f39300           push 0x93f320
// 005f034d  50                   push eax
// 005f034e  64892500000000       mov dword ptr fs:[0], esp
// 005f0355  81ec34010000         sub esp, 0x134
// 005f035b  56                   push esi
// 005f035c  8bb42448010000       mov esi, dword ptr [esp + 0x148]
// 005f0363  57                   push edi
// 005f0364  8d442408             lea eax, [esp + 8]
// 005f0368  50                   push eax
// 005f0369  8bf9                 mov edi, ecx
// 005f036b  6a02                 push 2
// 005f036d  8bce                 mov ecx, esi
// 005f036f  e84c530000           call 0x5f56c0
// 005f0374  668b442408           mov ax, word ptr [esp + 8]
// 005f0379  3c50                 cmp al, 0x50
// 005f037b  0f85d1000000         jne 0x5f0452
// 005f0381  80fc36               cmp ah, 0x36
// 005f0384  0f85c8000000         jne 0x5f0452
// 005f038a  53                   push ebx
// 005f038b  55                   push ebp
// 005f038c  8bce                 mov ecx, esi
// 005f038e  e8bde6ffff           call 0x5eea50
// 005f0393  8bce                 mov ecx, esi
// 005f0395  8bd8                 mov ebx, eax
// 005f0397  e8b4e6ffff           call 0x5eea50
// 005f039c  8bce                 mov ecx, esi
// 005f039e  8be8                 mov ebp, eax
// 005f03a0  e8abe6ffff           call 0x5eea50
// 005f03a5  85db                 test ebx, ebx
// 005f03a7  7c57                 jl 0x5f0400
// 005f03a9  85ed                 test ebp, ebp
// 005f03ab  7c53                 jl 0x5f0400
// 005f03ad  81fba0860100         cmp ebx, 0x186a0
// 005f03b3  7f4b                 jg 0x5f0400
// 005f03b5  81fda0860100         cmp ebp, 0x186a0
// 005f03bb  7f43                 jg 0x5f0400
// 005f03bd  8bce                 mov ecx, esi
// 005f03bf  e84cbfffff           call 0x5ec310
// 005f03c4  6a03                 push 3
// 005f03c6  55                   push ebp
// 005f03c7  53                   push ebx
// 005f03c8  8bcf                 mov ecx, edi
// 005f03ca  e841f6ffff           call 0x5efa10
// 005f03cf  8b470c               mov eax, dword ptr [edi + 0xc]
// 005f03d2  0faf4708             imul eax, dword ptr [edi + 8]
// 005f03d6  8b4f04               mov ecx, dword ptr [edi + 4]
// 005f03d9  51                   push ecx
// 005f03da  8d1440               lea edx, [eax + eax*2]
// 005f03dd  52                   push edx
// 005f03de  8bce                 mov ecx, esi
// 005f03e0  e8db520000           call 0x5f56c0
// 005f03e5  8b8c2444010000       mov ecx, dword ptr [esp + 0x144]
// 005f03ec  5d                   pop ebp
// 005f03ed  5b                   pop ebx
// 005f03ee  5f                   pop edi
// 005f03ef  5e                   pop esi
// 005f03f0  64890d00000000       mov dword ptr fs:[0], ecx
// 005f03f7  81c440010000         add esp, 0x140
// 005f03fd  c20400               ret 4
// 005f0400  68f8249c00           push 0x9c24f8
// 005f0405  8d4c2418             lea ecx, [esp + 0x18]
// 005f0409  ff15f4b69800         call dword ptr [0x98b6f4]
// 005f040f  8d44244c             lea eax, [esp + 0x4c]
// 005f0413  50                   push eax
// 005f0414  8bce                 mov ecx, esi
// 005f0416  c784245001000002000000 mov dword ptr [esp + 0x150], 2
// 005f0421  e89abeffff           call 0x5ec2c0
// 005f0426  50                   push eax
// 005f0427  8d4c2418             lea ecx, [esp + 0x18]
// 005f042b  51                   push ecx
// 005f042c  8d8c248c000000       lea ecx, [esp + 0x8c]
// 005f0433  c684245401000003     mov byte ptr [esp + 0x154], 3
// 005f043b  e80064edff           call 0x4c6840
// 005f0440  689014aa00           push 0xaa1490
// 005f0445  8d942488000000       lea edx, [esp + 0x88]
// 005f044c  52                   push edx
// 005f044d  e826442000           call 0x7f4878
// 005f0452  68e4249c00           push 0x9c24e4
// 005f0457  8d4c242c             lea ecx, [esp + 0x2c]
// 005f045b  ff15f4b69800         call dword ptr [0x98b6f4]
// 005f0461  8d442460             lea eax, [esp + 0x60]
// 005f0465  50                   push eax
// 005f0466  8bce                 mov ecx, esi
// 005f0468  c784244801000000000000 mov dword ptr [esp + 0x148], 0
// 005f0473  e848beffff           call 0x5ec2c0
// 005f0478  50                   push eax
// 005f0479  8d4c242c             lea ecx, [esp + 0x2c]
// 005f047d  51                   push ecx
// 005f047e  8d8c24e4000000       lea ecx, [esp + 0xe4]
// 005f0485  c684244c01000001     mov byte ptr [esp + 0x14c], 1
// 005f048d  e8ae63edff           call 0x4c6840
// 005f0492  689014aa00           push 0xaa1490
// 005f0497  8d9424e0000000       lea edx, [esp + 0xe0]
// 005f049e  52                   push edx
// 005f049f  e8d4432000           call 0x7f4878
// library g3d-6.09-rbx2008/G3Dcpp\GImage_ppm.cpp (function ?decodePPM@GImage@G3D@@AAEXAAVBinaryInput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage_ppm.cpp
