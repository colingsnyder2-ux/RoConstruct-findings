// roc 2009-06 00579200  unit: G3D::LineSegment  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00579200
//
// 00579200  689c2ca400           push 0xa42c9c
// 00579205  ff1578ed8900         call dword ptr [0x89ed78]
// 0057920b  a1b42ca400           mov eax, dword ptr [0xa42cb4]
// 00579210  8b0db02ca400         mov ecx, dword ptr [0xa42cb0]
// 00579216  50                   push eax
// 00579217  51                   push ecx
// 00579218  ff158ced8900         call dword ptr [0x89ed8c]
// 0057921e  8b15982ca400         mov edx, dword ptr [0xa42c98]
// 00579224  52                   push edx
// 00579225  ff1590ed8900         call dword ptr [0x89ed90]
// 0057922b  a1ac2ca400           mov eax, dword ptr [0xa42cac]
// 00579230  85c0                 test eax, eax
// 00579232  7d1d                 jge 0x579251
// 00579234  56                   push esi
// 00579235  33f6                 xor esi, esi
// 00579237  85c0                 test eax, eax
// 00579239  7d15                 jge 0x579250
// 0057923b  57                   push edi
// 0057923c  8b3d7ced8900         mov edi, dword ptr [0x89ed7c]
// 00579242  6a00                 push 0
// 00579244  ffd7                 call edi
// 00579246  4e                   dec esi
// 00579247  3b35ac2ca400         cmp esi, dword ptr [0xa42cac]
// 0057924d  7ff3                 jg 0x579242
// 0057924f  5f                   pop edi
// 00579250  5e                   pop esi
// 00579251  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?_restoreInputGrab_@_internal@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
