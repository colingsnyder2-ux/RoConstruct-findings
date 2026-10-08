// roc 2009-12 005f9750  unit: G3D::LineSegment  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f9750
//
// 005f9750  57                   push edi
// 005f9751  68fc40b800           push 0xb840fc
// 005f9756  ff1538cc9800         call dword ptr [0x98cc38]
// 005f975c  8b3d10ca9800         mov edi, dword ptr [0x98ca10]
// 005f9762  6a01                 push 1
// 005f9764  ffd7                 call edi
// 005f9766  48                   dec eax
// 005f9767  83f8ff               cmp eax, -1
// 005f976a  a3f840b800           mov dword ptr [0xb840f8], eax
// 005f976f  7d10                 jge 0x5f9781
// 005f9771  56                   push esi
// 005f9772  83ceff               or esi, 0xffffffff
// 005f9775  2bf0                 sub esi, eax
// 005f9777  6a01                 push 1
// 005f9779  ffd7                 call edi
// 005f977b  83ee01               sub esi, 1
// 005f977e  75f7                 jne 0x5f9777
// 005f9780  5e                   pop esi
// 005f9781  ff1544ca9800         call dword ptr [0x98ca44]
// 005f9787  68007f0000           push 0x7f00
// 005f978c  6a00                 push 0
// 005f978e  a3e440b800           mov dword ptr [0xb840e4], eax
// 005f9793  ff1548ca9800         call dword ptr [0x98ca48]
// 005f9799  50                   push eax
// 005f979a  ff1520ca9800         call dword ptr [0x98ca20]
// 005f97a0  68e840b800           push 0xb840e8
// 005f97a5  ff15b4c99800         call dword ptr [0x98c9b4]
// 005f97ab  6a00                 push 0
// 005f97ad  ff150cca9800         call dword ptr [0x98ca0c]
// 005f97b3  5f                   pop edi
// 005f97b4  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?_releaseInputGrab_@_internal@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
