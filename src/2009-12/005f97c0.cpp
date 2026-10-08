// roc 2009-12 005f97c0  unit: G3D::LineSegment  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f97c0
//
// 005f97c0  68e840b800           push 0xb840e8
// 005f97c5  ff150cca9800         call dword ptr [0x98ca0c]
// 005f97cb  a10041b800           mov eax, dword ptr [0xb84100]
// 005f97d0  8b0dfc40b800         mov ecx, dword ptr [0xb840fc]
// 005f97d6  50                   push eax
// 005f97d7  51                   push ecx
// 005f97d8  ff1524ca9800         call dword ptr [0x98ca24]
// 005f97de  8b15e440b800         mov edx, dword ptr [0xb840e4]
// 005f97e4  52                   push edx
// 005f97e5  ff1520ca9800         call dword ptr [0x98ca20]
// 005f97eb  a1f840b800           mov eax, dword ptr [0xb840f8]
// 005f97f0  85c0                 test eax, eax
// 005f97f2  7d1d                 jge 0x5f9811
// 005f97f4  56                   push esi
// 005f97f5  33f6                 xor esi, esi
// 005f97f7  85c0                 test eax, eax
// 005f97f9  7d15                 jge 0x5f9810
// 005f97fb  57                   push edi
// 005f97fc  8b3d10ca9800         mov edi, dword ptr [0x98ca10]
// 005f9802  6a00                 push 0
// 005f9804  ffd7                 call edi
// 005f9806  4e                   dec esi
// 005f9807  3b35f840b800         cmp esi, dword ptr [0xb840f8]
// 005f980d  7ff3                 jg 0x5f9802
// 005f980f  5f                   pop edi
// 005f9810  5e                   pop esi
// 005f9811  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?_restoreInputGrab_@_internal@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
