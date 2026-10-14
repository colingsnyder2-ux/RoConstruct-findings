// roc 2008-06 005071d0  unit: RBX::Render::RenderScene  size: 588 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005071d0
//
// 005071d0  6aff                 push -1
// 005071d2  64a100000000         mov eax, dword ptr fs:[0]
// 005071d8  6804b97c00           push 0x7cb904
// 005071dd  50                   push eax
// 005071de  64892500000000       mov dword ptr fs:[0], esp
// 005071e5  83ec40               sub esp, 0x40
// 005071e8  53                   push ebx
// 005071e9  55                   push ebp
// 005071ea  56                   push esi
// 005071eb  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 005071ef  57                   push edi
// 005071f0  8bf9                 mov edi, ecx
// 005071f2  8b4704               mov eax, dword ptr [edi + 4]
// 005071f5  8d6f04               lea ebp, [edi + 4]
// 005071f8  33db                 xor ebx, ebx
// 005071fa  3bc3                 cmp eax, ebx
// 005071fc  742f                 je 0x50722d
// 005071fe  d94608               fld dword ptr [esi + 8]
// 00507201  d826                 fsub dword ptr [esi]
// 00507203  d9460c               fld dword ptr [esi + 0xc]
// 00507206  d86604               fsub dword ptr [esi + 4]
// 00507209  db4068               fild dword ptr [eax + 0x68]
// 0050720c  db4064               fild dword ptr [eax + 0x64]
// 0050720f  ddeb                 fucomp st(3)
// 00507211  dfe0                 fnstsw ax
// 00507213  ddda                 fstp st(2)
// 00507215  f6c444               test ah, 0x44
// 00507218  7a0f                 jp 0x507229
// 0050721a  dae9                 fucompp 
// 0050721c  dfe0                 fnstsw ax
// 0050721e  f6c444               test ah, 0x44
// 00507221  0f8be0010000         jnp 0x507407
// 00507227  eb04                 jmp 0x50722d
// 00507229  ddd8                 fstp st(0)
// 0050722b  ddd8                 fstp st(0)
// 0050722d  68c0748200           push 0x8274c0
// 00507232  8d4c241c             lea ecx, [esp + 0x1c]
// 00507236  ff1558248000         call dword ptr [0x802458]
// 0050723c  d9460c               fld dword ptr [esi + 0xc]
// 0050723f  d86604               fsub dword ptr [esi + 4]
// 00507242  895c2458             mov dword ptr [esp + 0x58], ebx
// 00507246  d95c2410             fstp dword ptr [esp + 0x10]
// 0050724a  d94608               fld dword ptr [esi + 8]
// 0050724d  d826                 fsub dword ptr [esi]
// 0050724f  d95c2414             fstp dword ptr [esp + 0x14]
// 00507253  e8c8b8f6ff           call 0x472b20
// 00507258  50                   push eax
// 00507259  6a06                 push 6
// 0050725b  53                   push ebx
// 0050725c  e8bfc5f7ff           call 0x483820
// 00507261  d944241c             fld dword ptr [esp + 0x1c]
// 00507265  83c404               add esp, 4
// 00507268  50                   push eax
// 00507269  e882a51900           call 0x6a17f0
// 0050726e  d9442420             fld dword ptr [esp + 0x20]
// 00507272  50                   push eax
// 00507273  e878a51900           call 0x6a17f0
// 00507278  50                   push eax
// 00507279  8d44242c             lea eax, [esp + 0x2c]
// 0050727d  50                   push eax
// 0050727e  8d4c2478             lea ecx, [esp + 0x78]
// 00507282  51                   push ecx
// 00507283  e8f8feffff           call 0x507180
// 00507288  83c41c               add esp, 0x1c
// 0050728b  8b10                 mov edx, dword ptr [eax]
// 0050728d  52                   push edx
// 0050728e  8bcd                 mov ecx, ebp
// 00507290  c644245c01           mov byte ptr [esp + 0x5c], 1
// 00507295  e8061d0900           call 0x598fa0
// 0050729a  8b442460             mov eax, dword ptr [esp + 0x60]
// 0050729e  c644245800           mov byte ptr [esp + 0x58], 0
// 005072a3  3bc3                 cmp eax, ebx
// 005072a5  742b                 je 0x5072d2
// 005072a7  83c004               add eax, 4
// 005072aa  50                   push eax
// 005072ab  ff15ac218000         call dword ptr [0x8021ac]
// 005072b1  85c0                 test eax, eax
// 005072b3  7519                 jne 0x5072ce
// 005072b5  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 005072b9  e8d23af5ff           call 0x45ad90
// 005072be  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 005072c2  3bcb                 cmp ecx, ebx
// 005072c4  7408                 je 0x5072ce
// 005072c6  8b01                 mov eax, dword ptr [ecx]
// 005072c8  8b10                 mov edx, dword ptr [eax]
// 005072ca  6a01                 push 1
// 005072cc  ffd2                 call edx
// 005072ce  895c2460             mov dword ptr [esp + 0x60], ebx
// 005072d2  83cbff               or ebx, 0xffffffff
// 005072d5  8d4c2418             lea ecx, [esp + 0x18]
// 005072d9  895c2458             mov dword ptr [esp + 0x58], ebx
// 005072dd  ff1568248000         call dword ptr [0x802468]
// 005072e3  68b0748200           push 0x8274b0
// 005072e8  8d4c241c             lea ecx, [esp + 0x1c]
// 005072ec  ff1558248000         call dword ptr [0x802458]
// 005072f2  d9460c               fld dword ptr [esi + 0xc]
// 005072f5  d86604               fsub dword ptr [esi + 4]
// 005072f8  c744245802000000     mov dword ptr [esp + 0x58], 2
// 00507300  d95c2414             fstp dword ptr [esp + 0x14]
// 00507304  d94608               fld dword ptr [esi + 8]
// 00507307  d826                 fsub dword ptr [esi]
// 00507309  d95c2410             fstp dword ptr [esp + 0x10]
// 0050730d  e80eb8f6ff           call 0x472b20
// 00507312  d9442414             fld dword ptr [esp + 0x14]
// 00507316  50                   push eax
// 00507317  a1b0fa9600           mov eax, dword ptr [0x96fab0]
// 0050731c  6a06                 push 6
// 0050731e  50                   push eax
// 0050731f  e8cca41900           call 0x6a17f0
// 00507324  d944241c             fld dword ptr [esp + 0x1c]
// 00507328  50                   push eax
// 00507329  e8c2a41900           call 0x6a17f0
// 0050732e  50                   push eax
// 0050732f  8d4c242c             lea ecx, [esp + 0x2c]
// 00507333  51                   push ecx
// 00507334  8d542478             lea edx, [esp + 0x78]
// 00507338  52                   push edx
// 00507339  e842feffff           call 0x507180
// 0050733e  83c41c               add esp, 0x1c
// 00507341  8b00                 mov eax, dword ptr [eax]
// 00507343  8d7708               lea esi, [edi + 8]
// 00507346  50                   push eax
// 00507347  8bce                 mov ecx, esi
// 00507349  c644245c03           mov byte ptr [esp + 0x5c], 3
// 0050734e  e84d1c0900           call 0x598fa0
// 00507353  8b442460             mov eax, dword ptr [esp + 0x60]
// 00507357  c644245802           mov byte ptr [esp + 0x58], 2
// 0050735c  85c0                 test eax, eax
// 0050735e  742f                 je 0x50738f
// 00507360  83c004               add eax, 4
// 00507363  50                   push eax
// 00507364  ff15ac218000         call dword ptr [0x8021ac]
// 0050736a  85c0                 test eax, eax
// 0050736c  7519                 jne 0x507387
// 0050736e  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00507372  e8193af5ff           call 0x45ad90
// 00507377  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0050737b  85c9                 test ecx, ecx
// 0050737d  7408                 je 0x507387
// 0050737f  8b11                 mov edx, dword ptr [ecx]
// 00507381  8b02                 mov eax, dword ptr [edx]
// 00507383  6a01                 push 1
// 00507385  ffd0                 call eax
// 00507387  c744246000000000     mov dword ptr [esp + 0x60], 0
// 0050738f  8d4c2418             lea ecx, [esp + 0x18]
// 00507393  895c2458             mov dword ptr [esp + 0x58], ebx
// 00507397  ff1568248000         call dword ptr [0x802468]
// 0050739d  68a8748200           push 0x8274a8
// 005073a2  8d4c241c             lea ecx, [esp + 0x1c]
// 005073a6  ff1558248000         call dword ptr [0x802458]
// 005073ac  8b07                 mov eax, dword ptr [edi]
// 005073ae  55                   push ebp
// 005073af  8d4c241c             lea ecx, [esp + 0x1c]
// 005073b3  51                   push ecx
// 005073b4  8d4818               lea ecx, [eax + 0x18]
// 005073b7  c744246004000000     mov dword ptr [esp + 0x60], 4
// 005073bf  e8ecfaf7ff           call 0x486eb0
// 005073c4  8d4c2418             lea ecx, [esp + 0x18]
// 005073c8  895c2458             mov dword ptr [esp + 0x58], ebx
// 005073cc  ff1568248000         call dword ptr [0x802468]
// 005073d2  6834c98100           push 0x81c934
// 005073d7  8d4c2438             lea ecx, [esp + 0x38]
// 005073db  ff1558248000         call dword ptr [0x802458]
// 005073e1  8b3f                 mov edi, dword ptr [edi]
// 005073e3  56                   push esi
// 005073e4  8d542438             lea edx, [esp + 0x38]
// 005073e8  52                   push edx
// 005073e9  8d4f18               lea ecx, [edi + 0x18]
// 005073ec  c744246005000000     mov dword ptr [esp + 0x60], 5
// 005073f4  e8b7faf7ff           call 0x486eb0
// 005073f9  8d4c2434             lea ecx, [esp + 0x34]
// 005073fd  895c2458             mov dword ptr [esp + 0x58], ebx
// 00507401  ff1568248000         call dword ptr [0x802468]
// 00507407  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0050740b  5f                   pop edi
// 0050740c  5e                   pop esi
// 0050740d  5d                   pop ebp
// 0050740e  5b                   pop ebx
// 0050740f  64890d00000000       mov dword ptr fs:[0], ecx
// 00507416  83c44c               add esp, 0x4c
// 00507419  c20400               ret 4
// library openrbx-client/Rendering\RenderLib\DepthBlur.cpp (function ?allocateTextures@DepthBlur@Render@RBX@@AAEXABVRect2D@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client Rendering/RenderLib/DepthBlur.cpp
