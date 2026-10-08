// roc 2007-03 0046d040  unit: seg_00460000  size: 382 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0046d040
//
// 0046d040  6aff                 push -1
// 0046d042  6889657400           push 0x746589
// 0046d047  64a100000000         mov eax, dword ptr fs:[0]
// 0046d04d  50                   push eax
// 0046d04e  83ec24               sub esp, 0x24
// 0046d051  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0046d056  33c4                 xor eax, esp
// 0046d058  89442420             mov dword ptr [esp + 0x20], eax
// 0046d05c  56                   push esi
// 0046d05d  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0046d062  33c4                 xor eax, esp
// 0046d064  50                   push eax
// 0046d065  8d44242c             lea eax, [esp + 0x2c]
// 0046d069  64a300000000         mov dword ptr fs:[0], eax
// 0046d06f  68031f0000           push 0x1f03
// 0046d074  ff1518eb7700         call dword ptr [0x77eb18]
// 0046d07a  50                   push eax
// 0046d07b  8d4c2410             lea ecx, [esp + 0x10]
// 0046d07f  ff1578e77700         call dword ptr [0x77e778]
// 0046d085  6a17                 push 0x17
// 0046d087  6a00                 push 0
// 0046d089  68c0597900           push 0x7959c0
// 0046d08e  8d4c2418             lea ecx, [esp + 0x18]
// 0046d092  c744244000000000     mov dword ptr [esp + 0x40], 0
// 0046d09a  ff1540e67700         call dword ptr [0x77e640]
// 0046d0a0  8b0dfce67700         mov ecx, dword ptr [0x77e6fc]
// 0046d0a6  3b01                 cmp eax, dword ptr [ecx]
// 0046d0a8  8d4c240c             lea ecx, [esp + 0xc]
// 0046d0ac  0f95c2               setne dl
// 0046d0af  88153d768b00         mov byte ptr [0x8b763d], dl
// 0046d0b5  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0046d0bd  ff158ce77700         call dword ptr [0x77e78c]
// 0046d0c3  68ffff0f00           push 0xfffff
// 0046d0c8  ff1580eb7700         call dword ptr [0x77eb80]
// 0046d0ce  8d442408             lea eax, [esp + 8]
// 0046d0d2  50                   push eax
// 0046d0d3  6a01                 push 1
// 0046d0d5  ff1584eb7700         call dword ptr [0x77eb84]
// 0046d0db  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0046d0df  51                   push ecx
// 0046d0e0  68e10d0000           push 0xde1
// 0046d0e5  ff1570eb7700         call dword ptr [0x77eb70]
// 0046d0eb  803d3d768b0000       cmp byte ptr [0x8b763d], 0
// 0046d0f2  7412                 je 0x46d106
// 0046d0f4  6a01                 push 1
// 0046d0f6  6891810000           push 0x8191
// 0046d0fb  68e10d0000           push 0xde1
// 0046d100  ff1564eb7700         call dword ptr [0x77eb64]
// 0046d106  6a30                 push 0x30
// 0046d108  e8b3121b00           call 0x61e3c0
// 0046d10d  6a30                 push 0x30
// 0046d10f  8bf0                 mov esi, eax
// 0046d111  6a00                 push 0
// 0046d113  56                   push esi
// 0046d114  e8031f1b00           call 0x61f01c
// 0046d119  83c410               add esp, 0x10
// 0046d11c  33c0                 xor eax, eax
// 0046d11e  8bff                 mov edi, edi
// 0046d120  c60430ff             mov byte ptr [eax + esi], 0xff
// 0046d124  83c003               add eax, 3
// 0046d127  83f830               cmp eax, 0x30
// 0046d12a  7cf4                 jl 0x46d120
// 0046d12c  56                   push esi
// 0046d12d  6801140000           push 0x1401
// 0046d132  6807190000           push 0x1907
// 0046d137  6a00                 push 0
// 0046d139  6a04                 push 4
// 0046d13b  6a04                 push 4
// 0046d13d  6851800000           push 0x8051
// 0046d142  6a00                 push 0
// 0046d144  68e10d0000           push 0xde1
// 0046d149  ff1568eb7700         call dword ptr [0x77eb68]
// 0046d14f  56                   push esi
// 0046d150  6801140000           push 0x1401
// 0046d155  6807190000           push 0x1907
// 0046d15a  6a00                 push 0
// 0046d15c  68e10d0000           push 0xde1
// 0046d161  ff1588eb7700         call dword ptr [0x77eb88]
// 0046d167  803eff               cmp byte ptr [esi], 0xff
// 0046d16a  7513                 jne 0x46d17f
// 0046d16c  807e0100             cmp byte ptr [esi + 1], 0
// 0046d170  750d                 jne 0x46d17f
// 0046d172  807e0200             cmp byte ptr [esi + 2], 0
// 0046d176  c60521768b0000       mov byte ptr [0x8b7621], 0
// 0046d17d  7407                 je 0x46d186
// 0046d17f  c60521768b0001       mov byte ptr [0x8b7621], 1
// 0046d186  56                   push esi
// 0046d187  e828121b00           call 0x61e3b4
// 0046d18c  83c404               add esp, 4
// 0046d18f  8d542408             lea edx, [esp + 8]
// 0046d193  52                   push edx
// 0046d194  6a01                 push 1
// 0046d196  ff1534eb7700         call dword ptr [0x77eb34]
// 0046d19c  ff1538eb7700         call dword ptr [0x77eb38]
// 0046d1a2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0046d1a6  64890d00000000       mov dword ptr fs:[0], ecx
// 0046d1ad  59                   pop ecx
// 0046d1ae  5e                   pop esi
// 0046d1af  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0046d1b3  33cc                 xor ecx, esp
// 0046d1b5  e8ec1c1b00           call 0x61eea6
// 0046d1ba  83c430               add esp, 0x30
// 0046d1bd  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?checkBug_redBlueMipmapSwap@GLCaps@G3D@@CAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
