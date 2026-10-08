// from server: 100% by auto
// roc 2009-06 00578a10  unit: G3D::LineSegment  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00578a10
//
// 00578a10  56                   push esi
// 00578a11  6a00                 push 0
// 00578a13  8bf0                 mov esi, eax
// 00578a15  ff1560ee8900         call dword ptr [0x89ee60]
// 00578a1b  85c0                 test eax, eax
// 00578a1d  7457                 je 0x578a76
// 00578a1f  8bc6                 mov eax, esi
// 00578a21  8d5001               lea edx, [eax + 1]
// 00578a24  8a08                 mov cl, byte ptr [eax]
// 00578a26  40                   inc eax
// 00578a27  84c9                 test cl, cl
// 00578a29  75f9                 jne 0x578a24
// 00578a2b  2bc2                 sub eax, edx
// 00578a2d  57                   push edi
// 00578a2e  40                   inc eax
// 00578a2f  50                   push eax
// 00578a30  6842200000           push 0x2042
// 00578a35  ff1514e28900         call dword ptr [0x89e214]
// 00578a3b  8bf8                 mov edi, eax
// 00578a3d  85ff                 test edi, edi
// 00578a3f  7427                 je 0x578a68
// 00578a41  57                   push edi
// 00578a42  ff1510e28900         call dword ptr [0x89e210]
// 00578a48  8a0e                 mov cl, byte ptr [esi]
// 00578a4a  8808                 mov byte ptr [eax], cl
// 00578a4c  46                   inc esi
// 00578a4d  40                   inc eax
// 00578a4e  84c9                 test cl, cl
// 00578a50  75f6                 jne 0x578a48
// 00578a52  57                   push edi
// 00578a53  ff150ce28900         call dword ptr [0x89e20c]
// 00578a59  ff1548ee8900         call dword ptr [0x89ee48]
// 00578a5f  57                   push edi
// 00578a60  6a01                 push 1
// 00578a62  ff154cee8900         call dword ptr [0x89ee4c]
// 00578a68  ff1554ee8900         call dword ptr [0x89ee54]
// 00578a6e  57                   push edi
// 00578a6f  ff15c8e28900         call dword ptr [0x89e2c8]
// 00578a75  5f                   pop edi
// 00578a76  5e                   pop esi
// 00578a77  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?postToClipboard@_internal@G3D@@YAXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
