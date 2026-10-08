// from server: 100% by auto
// roc 2007-08 00509920  unit: G3D::GCamera  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00509920
//
// 00509920  8b542410             mov edx, dword ptr [esp + 0x10]
// 00509924  dd442408             fld qword ptr [esp + 8]
// 00509928  8b442404             mov eax, dword ptr [esp + 4]
// 0050992c  56                   push esi
// 0050992d  8bf2                 mov esi, edx
// 0050992f  57                   push edi
// 00509930  8d4804               lea ecx, [eax + 4]
// 00509933  2bf0                 sub esi, eax
// 00509935  bf03000000           mov edi, 3
// 0050993a  d902                 fld dword ptr [edx]
// 0050993c  83c20c               add edx, 0xc
// 0050993f  d8c9                 fmul st(1)
// 00509941  83c10c               add ecx, 0xc
// 00509944  83ef01               sub edi, 1
// 00509947  d959f0               fstp dword ptr [ecx - 0x10]
// 0050994a  d9440ef4             fld dword ptr [esi + ecx - 0xc]
// 0050994e  d8c9                 fmul st(1)
// 00509950  d959f4               fstp dword ptr [ecx - 0xc]
// 00509953  d942fc               fld dword ptr [edx - 4]
// 00509956  d8c9                 fmul st(1)
// 00509958  d959f8               fstp dword ptr [ecx - 8]
// 0050995b  75dd                 jne 0x50993a
// 0050995d  5f                   pop edi
// 0050995e  ddd8                 fstp st(0)
// 00509960  5e                   pop esi
// 00509961  c3                   ret 
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ??DG3D@@YA?AVMatrix3@0@NABV10@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
