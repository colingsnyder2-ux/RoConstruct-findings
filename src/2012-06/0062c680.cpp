// from server: 100% by auto
// roc 2012-06 0062c680  unit: G3D::Sphere  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0062c680
//
// 0062c680  8b542410             mov edx, dword ptr [esp + 0x10]
// 0062c684  dd442408             fld qword ptr [esp + 8]
// 0062c688  8b442404             mov eax, dword ptr [esp + 4]
// 0062c68c  56                   push esi
// 0062c68d  8bf2                 mov esi, edx
// 0062c68f  57                   push edi
// 0062c690  8d4804               lea ecx, [eax + 4]
// 0062c693  2bf0                 sub esi, eax
// 0062c695  bf03000000           mov edi, 3
// 0062c69a  d902                 fld dword ptr [edx]
// 0062c69c  83c20c               add edx, 0xc
// 0062c69f  d8c9                 fmul st(1)
// 0062c6a1  83c10c               add ecx, 0xc
// 0062c6a4  83ef01               sub edi, 1
// 0062c6a7  d959f0               fstp dword ptr [ecx - 0x10]
// 0062c6aa  d9440ef4             fld dword ptr [esi + ecx - 0xc]
// 0062c6ae  d8c9                 fmul st(1)
// 0062c6b0  d959f4               fstp dword ptr [ecx - 0xc]
// 0062c6b3  d942fc               fld dword ptr [edx - 4]
// 0062c6b6  d8c9                 fmul st(1)
// 0062c6b8  d959f8               fstp dword ptr [ecx - 8]
// 0062c6bb  75dd                 jne 0x62c69a
// 0062c6bd  5f                   pop edi
// 0062c6be  ddd8                 fstp st(0)
// 0062c6c0  5e                   pop esi
// 0062c6c1  c3                   ret 
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ??DG3D@@YA?AVMatrix3@0@NABV10@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
