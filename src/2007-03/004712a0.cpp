// roc 2007-03 004712a0  unit: seg_00470000  size: 371 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004712a0
//
// 004712a0  6aff                 push -1
// 004712a2  68916d7400           push 0x746d91
// 004712a7  64a100000000         mov eax, dword ptr fs:[0]
// 004712ad  50                   push eax
// 004712ae  83ec1c               sub esp, 0x1c
// 004712b1  53                   push ebx
// 004712b2  55                   push ebp
// 004712b3  56                   push esi
// 004712b4  57                   push edi
// 004712b5  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004712ba  33c4                 xor eax, esp
// 004712bc  50                   push eax
// 004712bd  8d442430             lea eax, [esp + 0x30]
// 004712c1  64a300000000         mov dword ptr fs:[0], eax
// 004712c7  33db                 xor ebx, ebx
// 004712c9  895c2420             mov dword ptr [esp + 0x20], ebx
// 004712cd  6a01                 push 1
// 004712cf  6a01                 push 1
// 004712d1  8d4c242c             lea ecx, [esp + 0x2c]
// 004712d5  895c2430             mov dword ptr [esp + 0x30], ebx
// 004712d9  895c2434             mov dword ptr [esp + 0x34], ebx
// 004712dd  895c242c             mov dword ptr [esp + 0x2c], ebx
// 004712e1  e82afeffff           call 0x471110
// 004712e6  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 004712ea  83f905               cmp ecx, 5
// 004712ed  c744243801000000     mov dword ptr [esp + 0x38], 1
// 004712f5  7507                 jne 0x4712fe
// 004712f7  ba06000000           mov edx, 6
// 004712fc  eb0f                 jmp 0x47130d
// 004712fe  8bd1                 mov edx, ecx
// 00471300  83ea07               sub edx, 7
// 00471303  f7da                 neg edx
// 00471305  1bd2                 sbb edx, edx
// 00471307  83e2fb               and edx, 0xfffffffb
// 0047130a  83c206               add edx, 6
// 0047130d  33c0                 xor eax, eax
// 0047130f  3bd3                 cmp edx, ebx
// 00471311  89542414             mov dword ptr [esp + 0x14], edx
// 00471315  89442418             mov dword ptr [esp + 0x18], eax
// 00471319  7e7b                 jle 0x471396
// 0047131b  eb03                 jmp 0x471320
// 0047131d  8d4900               lea ecx, [ecx]
// 00471320  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00471324  8b3c81               mov edi, dword ptr [ecx + eax*4]
// 00471327  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0047132b  8b4104               mov eax, dword ptr [ecx + 4]
// 0047132e  3b4108               cmp eax, dword ptr [ecx + 8]
// 00471331  8d7104               lea esi, [ecx + 4]
// 00471334  8be9                 mov ebp, ecx
// 00471336  7d10                 jge 0x471348
// 00471338  8b09                 mov ecx, dword ptr [ecx]
// 0047133a  8d0481               lea eax, [ecx + eax*4]
// 0047133d  3bc3                 cmp eax, ebx
// 0047133f  7402                 je 0x471343
// 00471341  8938                 mov dword ptr [eax], edi
// 00471343  830601               add dword ptr [esi], 1
// 00471346  eb39                 jmp 0x471381
// 00471348  8b11                 mov edx, dword ptr [ecx]
// 0047134a  8d5c241c             lea ebx, [esp + 0x1c]
// 0047134e  3bda                 cmp ebx, edx
// 00471350  7217                 jb 0x471369
// 00471352  8d1482               lea edx, [edx + eax*4]
// 00471355  3bda                 cmp ebx, edx
// 00471357  7310                 jae 0x471369
// 00471359  8d44241c             lea eax, [esp + 0x1c]
// 0047135d  50                   push eax
// 0047135e  897c2420             mov dword ptr [esp + 0x20], edi
// 00471362  e8f9fbffff           call 0x470f60
// 00471367  eb14                 jmp 0x47137d
// 00471369  6a00                 push 0
// 0047136b  83c001               add eax, 1
// 0047136e  50                   push eax
// 0047136f  e86cf5ffff           call 0x4708e0
// 00471374  8b0e                 mov ecx, dword ptr [esi]
// 00471376  8b5500               mov edx, dword ptr [ebp]
// 00471379  897c8afc             mov dword ptr [edx + ecx*4 - 4], edi
// 0047137d  8b542414             mov edx, dword ptr [esp + 0x14]
// 00471381  8b442418             mov eax, dword ptr [esp + 0x18]
// 00471385  83c001               add eax, 1
// 00471388  33db                 xor ebx, ebx
// 0047138a  3bc2                 cmp eax, edx
// 0047138c  89442418             mov dword ptr [esp + 0x18], eax
// 00471390  7c8e                 jl 0x471320
// 00471392  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00471396  d9442474             fld dword ptr [esp + 0x74]
// 0047139a  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0047139e  8b542460             mov edx, dword ptr [esp + 0x60]
// 004713a2  83ec08               sub esp, 8
// 004713a5  d95c2404             fstp dword ptr [esp + 4]
// 004713a9  8b742448             mov esi, dword ptr [esp + 0x48]
// 004713ad  d9442478             fld dword ptr [esp + 0x78]
// 004713b1  d91c24               fstp dword ptr [esp]
// 004713b4  50                   push eax
// 004713b5  8b442468             mov eax, dword ptr [esp + 0x68]
// 004713b9  51                   push ecx
// 004713ba  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 004713be  51                   push ecx
// 004713bf  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 004713c3  52                   push edx
// 004713c4  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 004713c8  50                   push eax
// 004713c9  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 004713cd  51                   push ecx
// 004713ce  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 004713d2  52                   push edx
// 004713d3  50                   push eax
// 004713d4  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 004713d8  51                   push ecx
// 004713d9  8d542450             lea edx, [esp + 0x50]
// 004713dd  52                   push edx
// 004713de  50                   push eax
// 004713df  56                   push esi
// 004713e0  e83bf8ffff           call 0x470c20
// 004713e5  83c438               add esp, 0x38
// 004713e8  8d4c2424             lea ecx, [esp + 0x24]
// 004713ec  c744242001000000     mov dword ptr [esp + 0x20], 1
// 004713f4  885c2438             mov byte ptr [esp + 0x38], bl
// 004713f8  e813fbffff           call 0x470f10
// 004713fd  8bc6                 mov eax, esi
// 004713ff  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00471403  64890d00000000       mov dword ptr fs:[0], ecx
// 0047140a  59                   pop ecx
// 0047140b  5f                   pop edi
// 0047140c  5e                   pop esi
// 0047140d  5d                   pop ebp
// 0047140e  5b                   pop ebx
// 0047140f  83c428               add esp, 0x28
// 00471412  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?fromMemory@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAPBEPBVTextureFormat@2@HHH2W4WrapMode@12@W4InterpolateMode@12@W4Dimension@12@W4DepthReadMode@12@MM@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
