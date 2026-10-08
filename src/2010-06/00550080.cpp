// from server: 100% by auto
// roc 2010-06 00550080  unit: G3D::Log  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00550080
//
// 00550080  57                   push edi
// 00550081  68389fc000           push 0xc09f38
// 00550086  ff1574bc9e00         call dword ptr [0x9ebc74]
// 0055008c  8b3d9cbb9e00         mov edi, dword ptr [0x9ebb9c]
// 00550092  6a01                 push 1
// 00550094  ffd7                 call edi
// 00550096  48                   dec eax
// 00550097  83f8ff               cmp eax, -1
// 0055009a  a3349fc000           mov dword ptr [0xc09f34], eax
// 0055009f  7d10                 jge 0x5500b1
// 005500a1  56                   push esi
// 005500a2  83ceff               or esi, 0xffffffff
// 005500a5  2bf0                 sub esi, eax
// 005500a7  6a01                 push 1
// 005500a9  ffd7                 call edi
// 005500ab  83ee01               sub esi, 1
// 005500ae  75f7                 jne 0x5500a7
// 005500b0  5e                   pop esi
// 005500b1  ff15c8bb9e00         call dword ptr [0x9ebbc8]
// 005500b7  68007f0000           push 0x7f00
// 005500bc  6a00                 push 0
// 005500be  a3209fc000           mov dword ptr [0xc09f20], eax
// 005500c3  ff15ccbb9e00         call dword ptr [0x9ebbcc]
// 005500c9  50                   push eax
// 005500ca  ff15b4bb9e00         call dword ptr [0x9ebbb4]
// 005500d0  68249fc000           push 0xc09f24
// 005500d5  ff1568bb9e00         call dword ptr [0x9ebb68]
// 005500db  6a00                 push 0
// 005500dd  ff1598bb9e00         call dword ptr [0x9ebb98]
// 005500e3  5f                   pop edi
// 005500e4  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?_releaseInputGrab_@_internal@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
