// roc 2007-03 004fa2b0  unit: seg_004f0000  size: 375 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fa2b0
//
// 004fa2b0  6aff                 push -1
// 004fa2b2  6834067500           push 0x750634
// 004fa2b7  64a100000000         mov eax, dword ptr fs:[0]
// 004fa2bd  50                   push eax
// 004fa2be  81ecac000000         sub esp, 0xac
// 004fa2c4  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004fa2c9  33c4                 xor eax, esp
// 004fa2cb  898424a8000000       mov dword ptr [esp + 0xa8], eax
// 004fa2d2  53                   push ebx
// 004fa2d3  55                   push ebp
// 004fa2d4  56                   push esi
// 004fa2d5  57                   push edi
// 004fa2d6  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004fa2db  33c4                 xor eax, esp
// 004fa2dd  50                   push eax
// 004fa2de  8d8424c0000000       lea eax, [esp + 0xc0]
// 004fa2e5  64a300000000         mov dword ptr fs:[0], eax
// 004fa2eb  8b8424d0000000       mov eax, dword ptr [esp + 0xd0]
// 004fa2f2  8bf1                 mov esi, ecx
// 004fa2f4  8d4c2418             lea ecx, [esp + 0x18]
// 004fa2f8  33db                 xor ebx, ebx
// 004fa2fa  51                   push ecx
// 004fa2fb  8d4c2450             lea ecx, [esp + 0x50]
// 004fa2ff  89442418             mov dword ptr [esp + 0x18], eax
// 004fa303  885c2420             mov byte ptr [esp + 0x20], bl
// 004fa307  c744242804000000     mov dword ptr [esp + 0x28], 4
// 004fa30f  895c242c             mov dword ptr [esp + 0x2c], ebx
// 004fa313  885c2430             mov byte ptr [esp + 0x30], bl
// 004fa317  c744242446000000     mov dword ptr [esp + 0x24], 0x46
// 004fa31f  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 004fa327  e8543e0000           call 0x4fe180
// 004fa32c  8b560c               mov edx, dword ptr [esi + 0xc]
// 004fa32f  8b4608               mov eax, dword ptr [esi + 8]
// 004fa332  52                   push edx
// 004fa333  50                   push eax
// 004fa334  8d4c2454             lea ecx, [esp + 0x54]
// 004fa338  6884fc7900           push 0x79fc84
// 004fa33d  51                   push ecx
// 004fa33e  899c24d8000000       mov dword ptr [esp + 0xd8], ebx
// 004fa345  e866430000           call 0x4fe6b0
// 004fa34a  8b4608               mov eax, dword ptr [esi + 8]
// 004fa34d  8b560c               mov edx, dword ptr [esi + 0xc]
// 004fa350  8b4e04               mov ecx, dword ptr [esi + 4]
// 004fa353  0fafd0               imul edx, eax
// 004fa356  83c410               add esp, 0x10
// 004fa359  33ed                 xor ebp, ebp
// 004fa35b  85d2                 test edx, edx
// 004fa35d  764b                 jbe 0x4fa3aa
// 004fa35f  8d7901               lea edi, [ecx + 1]
// 004fa362  33d2                 xor edx, edx
// 004fa364  8d4c40ff             lea ecx, [eax + eax*2 - 1]
// 004fa368  8bc5                 mov eax, ebp
// 004fa36a  f7f1                 div ecx
// 004fa36c  0fb607               movzx eax, byte ptr [edi]
// 004fa36f  0fb64fff             movzx ecx, byte ptr [edi - 1]
// 004fa373  f7da                 neg edx
// 004fa375  1bd2                 sbb edx, edx
// 004fa377  83e216               and edx, 0x16
// 004fa37a  83c20a               add edx, 0xa
// 004fa37d  52                   push edx
// 004fa37e  0fb65701             movzx edx, byte ptr [edi + 1]
// 004fa382  52                   push edx
// 004fa383  50                   push eax
// 004fa384  51                   push ecx
// 004fa385  8d54245c             lea edx, [esp + 0x5c]
// 004fa389  6878fc7900           push 0x79fc78
// 004fa38e  52                   push edx
// 004fa38f  e81c430000           call 0x4fe6b0
// 004fa394  8b4608               mov eax, dword ptr [esi + 8]
// 004fa397  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004fa39a  0fafc8               imul ecx, eax
// 004fa39d  83c501               add ebp, 1
// 004fa3a0  83c418               add esp, 0x18
// 004fa3a3  83c703               add edi, 3
// 004fa3a6  3be9                 cmp ebp, ecx
// 004fa3a8  72b8                 jb 0x4fa362
// 004fa3aa  8d542430             lea edx, [esp + 0x30]
// 004fa3ae  52                   push edx
// 004fa3af  8d4c2450             lea ecx, [esp + 0x50]
// 004fa3b3  e8483d0000           call 0x4fe100
// 004fa3b8  83781810             cmp dword ptr [eax + 0x18], 0x10
// 004fa3bc  c68424c800000001     mov byte ptr [esp + 0xc8], 1
// 004fa3c4  7205                 jb 0x4fa3cb
// 004fa3c6  8b4004               mov eax, dword ptr [eax + 4]
// 004fa3c9  eb03                 jmp 0x4fa3ce
// 004fa3cb  83c004               add eax, 4
// 004fa3ce  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004fa3d2  50                   push eax
// 004fa3d3  e838360000           call 0x4fda10
// 004fa3d8  8d4c2430             lea ecx, [esp + 0x30]
// 004fa3dc  889c24c8000000       mov byte ptr [esp + 0xc8], bl
// 004fa3e3  ff158ce77700         call dword ptr [0x77e78c]
// 004fa3e9  8d4c244c             lea ecx, [esp + 0x4c]
// 004fa3ed  c78424c8000000ffffffff mov dword ptr [esp + 0xc8], 0xffffffff
// 004fa3f8  e8c32ef7ff           call 0x46d2c0
// 004fa3fd  8b8c24c0000000       mov ecx, dword ptr [esp + 0xc0]
// 004fa404  64890d00000000       mov dword ptr fs:[0], ecx
// 004fa40b  59                   pop ecx
// 004fa40c  5f                   pop edi
// 004fa40d  5e                   pop esi
// 004fa40e  5d                   pop ebp
// 004fa40f  5b                   pop ebx
// 004fa410  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 004fa417  33cc                 xor ecx, esp
// 004fa419  e8884a1200           call 0x61eea6
// 004fa41e  81c4b8000000         add esp, 0xb8
// 004fa424  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ?encodePPMASCII@GImage@G3D@@ABEXAAVBinaryOutput@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
