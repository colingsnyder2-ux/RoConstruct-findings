// roc 2007-08 004712d0  unit: G3D::Texture  size: 371 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004712d0
//
// 004712d0  6aff                 push -1
// 004712d2  6851497400           push 0x744951
// 004712d7  64a100000000         mov eax, dword ptr fs:[0]
// 004712dd  50                   push eax
// 004712de  83ec1c               sub esp, 0x1c
// 004712e1  53                   push ebx
// 004712e2  55                   push ebp
// 004712e3  56                   push esi
// 004712e4  57                   push edi
// 004712e5  a188518b00           mov eax, dword ptr [0x8b5188]
// 004712ea  33c4                 xor eax, esp
// 004712ec  50                   push eax
// 004712ed  8d442430             lea eax, [esp + 0x30]
// 004712f1  64a300000000         mov dword ptr fs:[0], eax
// 004712f7  33db                 xor ebx, ebx
// 004712f9  895c2420             mov dword ptr [esp + 0x20], ebx
// 004712fd  6a01                 push 1
// 004712ff  6a01                 push 1
// 00471301  8d4c242c             lea ecx, [esp + 0x2c]
// 00471305  895c2430             mov dword ptr [esp + 0x30], ebx
// 00471309  895c2434             mov dword ptr [esp + 0x34], ebx
// 0047130d  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00471311  e82afeffff           call 0x471140
// 00471316  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0047131a  83f905               cmp ecx, 5
// 0047131d  c744243801000000     mov dword ptr [esp + 0x38], 1
// 00471325  7507                 jne 0x47132e
// 00471327  ba06000000           mov edx, 6
// 0047132c  eb0f                 jmp 0x47133d
// 0047132e  8bd1                 mov edx, ecx
// 00471330  83ea07               sub edx, 7
// 00471333  f7da                 neg edx
// 00471335  1bd2                 sbb edx, edx
// 00471337  83e2fb               and edx, 0xfffffffb
// 0047133a  83c206               add edx, 6
// 0047133d  33c0                 xor eax, eax
// 0047133f  3bd3                 cmp edx, ebx
// 00471341  89542414             mov dword ptr [esp + 0x14], edx
// 00471345  89442418             mov dword ptr [esp + 0x18], eax
// 00471349  7e7b                 jle 0x4713c6
// 0047134b  eb03                 jmp 0x471350
// 0047134d  8d4900               lea ecx, [ecx]
// 00471350  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00471354  8b3c81               mov edi, dword ptr [ecx + eax*4]
// 00471357  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0047135b  8b4104               mov eax, dword ptr [ecx + 4]
// 0047135e  3b4108               cmp eax, dword ptr [ecx + 8]
// 00471361  8d7104               lea esi, [ecx + 4]
// 00471364  8be9                 mov ebp, ecx
// 00471366  7d10                 jge 0x471378
// 00471368  8b09                 mov ecx, dword ptr [ecx]
// 0047136a  8d0481               lea eax, [ecx + eax*4]
// 0047136d  3bc3                 cmp eax, ebx
// 0047136f  7402                 je 0x471373
// 00471371  8938                 mov dword ptr [eax], edi
// 00471373  830601               add dword ptr [esi], 1
// 00471376  eb39                 jmp 0x4713b1
// 00471378  8b11                 mov edx, dword ptr [ecx]
// 0047137a  8d5c241c             lea ebx, [esp + 0x1c]
// 0047137e  3bda                 cmp ebx, edx
// 00471380  7217                 jb 0x471399
// 00471382  8d1482               lea edx, [edx + eax*4]
// 00471385  3bda                 cmp ebx, edx
// 00471387  7310                 jae 0x471399
// 00471389  8d44241c             lea eax, [esp + 0x1c]
// 0047138d  50                   push eax
// 0047138e  897c2420             mov dword ptr [esp + 0x20], edi
// 00471392  e8f9fbffff           call 0x470f90
// 00471397  eb14                 jmp 0x4713ad
// 00471399  6a00                 push 0
// 0047139b  83c001               add eax, 1
// 0047139e  50                   push eax
// 0047139f  e86cf5ffff           call 0x470910
// 004713a4  8b0e                 mov ecx, dword ptr [esi]
// 004713a6  8b5500               mov edx, dword ptr [ebp]
// 004713a9  897c8afc             mov dword ptr [edx + ecx*4 - 4], edi
// 004713ad  8b542414             mov edx, dword ptr [esp + 0x14]
// 004713b1  8b442418             mov eax, dword ptr [esp + 0x18]
// 004713b5  83c001               add eax, 1
// 004713b8  33db                 xor ebx, ebx
// 004713ba  3bc2                 cmp eax, edx
// 004713bc  89442418             mov dword ptr [esp + 0x18], eax
// 004713c0  7c8e                 jl 0x471350
// 004713c2  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 004713c6  d9442474             fld dword ptr [esp + 0x74]
// 004713ca  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 004713ce  8b542460             mov edx, dword ptr [esp + 0x60]
// 004713d2  83ec08               sub esp, 8
// 004713d5  d95c2404             fstp dword ptr [esp + 4]
// 004713d9  8b742448             mov esi, dword ptr [esp + 0x48]
// 004713dd  d9442478             fld dword ptr [esp + 0x78]
// 004713e1  d91c24               fstp dword ptr [esp]
// 004713e4  50                   push eax
// 004713e5  8b442468             mov eax, dword ptr [esp + 0x68]
// 004713e9  51                   push ecx
// 004713ea  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 004713ee  51                   push ecx
// 004713ef  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 004713f3  52                   push edx
// 004713f4  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 004713f8  50                   push eax
// 004713f9  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 004713fd  51                   push ecx
// 004713fe  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00471402  52                   push edx
// 00471403  50                   push eax
// 00471404  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00471408  51                   push ecx
// 00471409  8d542450             lea edx, [esp + 0x50]
// 0047140d  52                   push edx
// 0047140e  50                   push eax
// 0047140f  56                   push esi
// 00471410  e83bf8ffff           call 0x470c50
// 00471415  83c438               add esp, 0x38
// 00471418  8d4c2424             lea ecx, [esp + 0x24]
// 0047141c  c744242001000000     mov dword ptr [esp + 0x20], 1
// 00471424  885c2438             mov byte ptr [esp + 0x38], bl
// 00471428  e813fbffff           call 0x470f40
// 0047142d  8bc6                 mov eax, esi
// 0047142f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00471433  64890d00000000       mov dword ptr fs:[0], ecx
// 0047143a  59                   pop ecx
// 0047143b  5f                   pop edi
// 0047143c  5e                   pop esi
// 0047143d  5d                   pop ebp
// 0047143e  5b                   pop ebx
// 0047143f  83c428               add esp, 0x28
// 00471442  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?fromMemory@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAPBEPBVTextureFormat@2@HHH2W4WrapMode@12@W4InterpolateMode@12@W4Dimension@12@W4DepthReadMode@12@MM@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
