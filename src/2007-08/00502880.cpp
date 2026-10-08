// from server: 100% by auto
// roc 2007-08 00502880  unit: G3D::Log  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00502880
//
// 00502880  57                   push edi
// 00502881  6888098c00           push 0x8c0988
// 00502886  ff1554ec7700         call dword ptr [0x77ec54]
// 0050288c  8b3d4ced7700         mov edi, dword ptr [0x77ed4c]
// 00502892  6a01                 push 1
// 00502894  ffd7                 call edi
// 00502896  83e801               sub eax, 1
// 00502899  83f8ff               cmp eax, -1
// 0050289c  a384098c00           mov dword ptr [0x8c0984], eax
// 005028a1  7d17                 jge 0x5028ba
// 005028a3  56                   push esi
// 005028a4  83ceff               or esi, 0xffffffff
// 005028a7  2bf0                 sub esi, eax
// 005028a9  8da42400000000       lea esp, [esp]
// 005028b0  6a01                 push 1
// 005028b2  ffd7                 call edi
// 005028b4  83ee01               sub esi, 1
// 005028b7  75f7                 jne 0x5028b0
// 005028b9  5e                   pop esi
// 005028ba  ff1510ed7700         call dword ptr [0x77ed10]
// 005028c0  68007f0000           push 0x7f00
// 005028c5  6a00                 push 0
// 005028c7  a370098c00           mov dword ptr [0x8c0970], eax
// 005028cc  ff1520ec7700         call dword ptr [0x77ec20]
// 005028d2  50                   push eax
// 005028d3  ff1560ed7700         call dword ptr [0x77ed60]
// 005028d9  6874098c00           push 0x8c0974
// 005028de  ff1514ed7700         call dword ptr [0x77ed14]
// 005028e4  6a00                 push 0
// 005028e6  ff1548ed7700         call dword ptr [0x77ed48]
// 005028ec  5f                   pop edi
// 005028ed  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?_releaseInputGrab_@_internal@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
