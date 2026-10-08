// from server: 100% by auto
// roc 2010-06 005564a0  unit: seg_00550000  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005564a0
//
// 005564a0  8b542410             mov edx, dword ptr [esp + 0x10]
// 005564a4  dd442408             fld qword ptr [esp + 8]
// 005564a8  8b442404             mov eax, dword ptr [esp + 4]
// 005564ac  56                   push esi
// 005564ad  8bf2                 mov esi, edx
// 005564af  57                   push edi
// 005564b0  8d4804               lea ecx, [eax + 4]
// 005564b3  2bf0                 sub esi, eax
// 005564b5  bf03000000           mov edi, 3
// 005564ba  d902                 fld dword ptr [edx]
// 005564bc  83c20c               add edx, 0xc
// 005564bf  d8c9                 fmul st(1)
// 005564c1  83c10c               add ecx, 0xc
// 005564c4  83ef01               sub edi, 1
// 005564c7  d959f0               fstp dword ptr [ecx - 0x10]
// 005564ca  d9440ef4             fld dword ptr [esi + ecx - 0xc]
// 005564ce  d8c9                 fmul st(1)
// 005564d0  d959f4               fstp dword ptr [ecx - 0xc]
// 005564d3  d942fc               fld dword ptr [edx - 4]
// 005564d6  d8c9                 fmul st(1)
// 005564d8  d959f8               fstp dword ptr [ecx - 8]
// 005564db  75dd                 jne 0x5564ba
// 005564dd  5f                   pop edi
// 005564de  ddd8                 fstp st(0)
// 005564e0  5e                   pop esi
// 005564e1  c3                   ret 
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ??DG3D@@YA?AVMatrix3@0@NABV10@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
