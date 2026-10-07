// roc 2008-06 00513450  unit: G3D::GCamera  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00513450
//
// 00513450  8b442404             mov eax, dword ptr [esp + 4]
// 00513454  56                   push esi
// 00513455  8bf1                 mov esi, ecx
// 00513457  57                   push edi
// 00513458  8d5004               lea edx, [eax + 4]
// 0051345b  2bf0                 sub esi, eax
// 0051345d  bf03000000           mov edi, 3
// 00513462  d901                 fld dword ptr [ecx]
// 00513464  83c10c               add ecx, 0xc
// 00513467  d9e0                 fchs 
// 00513469  83c20c               add edx, 0xc
// 0051346c  83ef01               sub edi, 1
// 0051346f  d95af0               fstp dword ptr [edx - 0x10]
// 00513472  d94416f4             fld dword ptr [esi + edx - 0xc]
// 00513476  d9e0                 fchs 
// 00513478  d95af4               fstp dword ptr [edx - 0xc]
// 0051347b  d941fc               fld dword ptr [ecx - 4]
// 0051347e  d9e0                 fchs 
// 00513480  d95af8               fstp dword ptr [edx - 8]
// 00513483  75dd                 jne 0x513462
// 00513485  5f                   pop edi
// 00513486  5e                   pop esi
// 00513487  c20400               ret 4
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ??GMatrix3@G3D@@QBE?AV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
