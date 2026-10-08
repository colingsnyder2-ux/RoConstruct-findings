// from server: 100% by auto
// roc 2009-06 00579190  unit: G3D::LineSegment  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00579190
//
// 00579190  57                   push edi
// 00579191  68b02ca400           push 0xa42cb0
// 00579196  ff152cee8900         call dword ptr [0x89ee2c]
// 0057919c  8b3d7ced8900         mov edi, dword ptr [0x89ed7c]
// 005791a2  6a01                 push 1
// 005791a4  ffd7                 call edi
// 005791a6  48                   dec eax
// 005791a7  83f8ff               cmp eax, -1
// 005791aa  a3ac2ca400           mov dword ptr [0xa42cac], eax
// 005791af  7d10                 jge 0x5791c1
// 005791b1  56                   push esi
// 005791b2  83ceff               or esi, 0xffffffff
// 005791b5  2bf0                 sub esi, eax
// 005791b7  6a01                 push 1
// 005791b9  ffd7                 call edi
// 005791bb  83ee01               sub esi, 1
// 005791be  75f7                 jne 0x5791b7
// 005791c0  5e                   pop esi
// 005791c1  ff1524ed8900         call dword ptr [0x89ed24]
// 005791c7  68007f0000           push 0x7f00
// 005791cc  6a00                 push 0
// 005791ce  a3982ca400           mov dword ptr [0xa42c98], eax
// 005791d3  ff15b0ed8900         call dword ptr [0x89edb0]
// 005791d9  50                   push eax
// 005791da  ff1590ed8900         call dword ptr [0x89ed90]
// 005791e0  689c2ca400           push 0xa42c9c
// 005791e5  ff1528ed8900         call dword ptr [0x89ed28]
// 005791eb  6a00                 push 0
// 005791ed  ff1578ed8900         call dword ptr [0x89ed78]
// 005791f3  5f                   pop edi
// 005791f4  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?_releaseInputGrab_@_internal@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
