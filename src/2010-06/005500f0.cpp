// roc 2010-06 005500f0  unit: G3D::Log  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005500f0
//
// 005500f0  68249fc000           push 0xc09f24
// 005500f5  ff1598bb9e00         call dword ptr [0x9ebb98]
// 005500fb  a13c9fc000           mov eax, dword ptr [0xc09f3c]
// 00550100  8b0d389fc000         mov ecx, dword ptr [0xc09f38]
// 00550106  50                   push eax
// 00550107  51                   push ecx
// 00550108  ff15b0bb9e00         call dword ptr [0x9ebbb0]
// 0055010e  8b15209fc000         mov edx, dword ptr [0xc09f20]
// 00550114  52                   push edx
// 00550115  ff15b4bb9e00         call dword ptr [0x9ebbb4]
// 0055011b  a1349fc000           mov eax, dword ptr [0xc09f34]
// 00550120  85c0                 test eax, eax
// 00550122  7d1d                 jge 0x550141
// 00550124  56                   push esi
// 00550125  33f6                 xor esi, esi
// 00550127  85c0                 test eax, eax
// 00550129  7d15                 jge 0x550140
// 0055012b  57                   push edi
// 0055012c  8b3d9cbb9e00         mov edi, dword ptr [0x9ebb9c]
// 00550132  6a00                 push 0
// 00550134  ffd7                 call edi
// 00550136  4e                   dec esi
// 00550137  3b35349fc000         cmp esi, dword ptr [0xc09f34]
// 0055013d  7ff3                 jg 0x550132
// 0055013f  5f                   pop edi
// 00550140  5e                   pop esi
// 00550141  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?_restoreInputGrab_@_internal@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
