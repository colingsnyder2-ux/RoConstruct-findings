// roc 2009-12 005f8fd0  unit: G3D::LineSegment  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f8fd0
//
// 005f8fd0  56                   push esi
// 005f8fd1  6a00                 push 0
// 005f8fd3  8bf0                 mov esi, eax
// 005f8fd5  ff1504cc9800         call dword ptr [0x98cc04]
// 005f8fdb  85c0                 test eax, eax
// 005f8fdd  7457                 je 0x5f9036
// 005f8fdf  8bc6                 mov eax, esi
// 005f8fe1  8d5001               lea edx, [eax + 1]
// 005f8fe4  8a08                 mov cl, byte ptr [eax]
// 005f8fe6  40                   inc eax
// 005f8fe7  84c9                 test cl, cl
// 005f8fe9  75f9                 jne 0x5f8fe4
// 005f8feb  2bc2                 sub eax, edx
// 005f8fed  57                   push edi
// 005f8fee  40                   inc eax
// 005f8fef  50                   push eax
// 005f8ff0  6842200000           push 0x2042
// 005f8ff5  ff15c8b19800         call dword ptr [0x98b1c8]
// 005f8ffb  8bf8                 mov edi, eax
// 005f8ffd  85ff                 test edi, edi
// 005f8fff  7427                 je 0x5f9028
// 005f9001  57                   push edi
// 005f9002  ff15ccb19800         call dword ptr [0x98b1cc]
// 005f9008  8a0e                 mov cl, byte ptr [esi]
// 005f900a  8808                 mov byte ptr [eax], cl
// 005f900c  46                   inc esi
// 005f900d  40                   inc eax
// 005f900e  84c9                 test cl, cl
// 005f9010  75f6                 jne 0x5f9008
// 005f9012  57                   push edi
// 005f9013  ff15d0b19800         call dword ptr [0x98b1d0]
// 005f9019  ff151ccc9800         call dword ptr [0x98cc1c]
// 005f901f  57                   push edi
// 005f9020  6a01                 push 1
// 005f9022  ff1518cc9800         call dword ptr [0x98cc18]
// 005f9028  ff150ccc9800         call dword ptr [0x98cc0c]
// 005f902e  57                   push edi
// 005f902f  ff1560b39800         call dword ptr [0x98b360]
// 005f9035  5f                   pop edi
// 005f9036  5e                   pop esi
// 005f9037  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?postToClipboard@_internal@G3D@@YAXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
