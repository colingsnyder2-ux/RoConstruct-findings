// from server: 100% by auto
// roc 2008-06 0050a9b0  unit: G3D::Log  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050a9b0
//
// 0050a9b0  68dc359700           push 0x9735dc
// 0050a9b5  ff15e42c8000         call dword ptr [0x802ce4]
// 0050a9bb  a1f4359700           mov eax, dword ptr [0x9735f4]
// 0050a9c0  8b0df0359700         mov ecx, dword ptr [0x9735f0]
// 0050a9c6  50                   push eax
// 0050a9c7  51                   push ecx
// 0050a9c8  ff15002d8000         call dword ptr [0x802d00]
// 0050a9ce  8b15d8359700         mov edx, dword ptr [0x9735d8]
// 0050a9d4  52                   push edx
// 0050a9d5  ff15042d8000         call dword ptr [0x802d04]
// 0050a9db  a1ec359700           mov eax, dword ptr [0x9735ec]
// 0050a9e0  85c0                 test eax, eax
// 0050a9e2  7d1d                 jge 0x50aa01
// 0050a9e4  56                   push esi
// 0050a9e5  33f6                 xor esi, esi
// 0050a9e7  85c0                 test eax, eax
// 0050a9e9  7d15                 jge 0x50aa00
// 0050a9eb  57                   push edi
// 0050a9ec  8b3de82c8000         mov edi, dword ptr [0x802ce8]
// 0050a9f2  6a00                 push 0
// 0050a9f4  ffd7                 call edi
// 0050a9f6  4e                   dec esi
// 0050a9f7  3b35ec359700         cmp esi, dword ptr [0x9735ec]
// 0050a9fd  7ff3                 jg 0x50a9f2
// 0050a9ff  5f                   pop edi
// 0050aa00  5e                   pop esi
// 0050aa01  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?_restoreInputGrab_@_internal@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
