// roc 2008-06 0050a940  unit: G3D::Log  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050a940
//
// 0050a940  57                   push edi
// 0050a941  68f0359700           push 0x9735f0
// 0050a946  ff159c2d8000         call dword ptr [0x802d9c]
// 0050a94c  8b3de82c8000         mov edi, dword ptr [0x802ce8]
// 0050a952  6a01                 push 1
// 0050a954  ffd7                 call edi
// 0050a956  48                   dec eax
// 0050a957  83f8ff               cmp eax, -1
// 0050a95a  a3ec359700           mov dword ptr [0x9735ec], eax
// 0050a95f  7d10                 jge 0x50a971
// 0050a961  56                   push esi
// 0050a962  83ceff               or esi, 0xffffffff
// 0050a965  2bf0                 sub esi, eax
// 0050a967  6a01                 push 1
// 0050a969  ffd7                 call edi
// 0050a96b  83ee01               sub esi, 1
// 0050a96e  75f7                 jne 0x50a967
// 0050a970  5e                   pop esi
// 0050a971  ff15ac2c8000         call dword ptr [0x802cac]
// 0050a977  68007f0000           push 0x7f00
// 0050a97c  6a00                 push 0
// 0050a97e  a3d8359700           mov dword ptr [0x9735d8], eax
// 0050a983  ff15d02d8000         call dword ptr [0x802dd0]
// 0050a989  50                   push eax
// 0050a98a  ff15042d8000         call dword ptr [0x802d04]
// 0050a990  68dc359700           push 0x9735dc
// 0050a995  ff15b02c8000         call dword ptr [0x802cb0]
// 0050a99b  6a00                 push 0
// 0050a99d  ff15e42c8000         call dword ptr [0x802ce4]
// 0050a9a3  5f                   pop edi
// 0050a9a4  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?_releaseInputGrab_@_internal@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
