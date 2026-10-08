// from server: 100% by auto
// roc 2007-08 005098e0  unit: G3D::GCamera  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005098e0
//
// 005098e0  8b442404             mov eax, dword ptr [esp + 4]
// 005098e4  56                   push esi
// 005098e5  8bf1                 mov esi, ecx
// 005098e7  57                   push edi
// 005098e8  8d5004               lea edx, [eax + 4]
// 005098eb  2bf0                 sub esi, eax
// 005098ed  bf03000000           mov edi, 3
// 005098f2  d901                 fld dword ptr [ecx]
// 005098f4  83c10c               add ecx, 0xc
// 005098f7  d9e0                 fchs 
// 005098f9  83c20c               add edx, 0xc
// 005098fc  83ef01               sub edi, 1
// 005098ff  d95af0               fstp dword ptr [edx - 0x10]
// 00509902  d94416f4             fld dword ptr [esi + edx - 0xc]
// 00509906  d9e0                 fchs 
// 00509908  d95af4               fstp dword ptr [edx - 0xc]
// 0050990b  d941fc               fld dword ptr [ecx - 4]
// 0050990e  d9e0                 fchs 
// 00509910  d95af8               fstp dword ptr [edx - 8]
// 00509913  75dd                 jne 0x5098f2
// 00509915  5f                   pop edi
// 00509916  5e                   pop esi
// 00509917  c20400               ret 4
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ??GMatrix3@G3D@@QBE?AV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
