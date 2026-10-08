// roc 2009-12 005f3d30  unit: seg_005f0000  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f3d30
//
// 005f3d30  8b542410             mov edx, dword ptr [esp + 0x10]
// 005f3d34  dd442408             fld qword ptr [esp + 8]
// 005f3d38  8b442404             mov eax, dword ptr [esp + 4]
// 005f3d3c  56                   push esi
// 005f3d3d  8bf2                 mov esi, edx
// 005f3d3f  57                   push edi
// 005f3d40  8d4804               lea ecx, [eax + 4]
// 005f3d43  2bf0                 sub esi, eax
// 005f3d45  bf03000000           mov edi, 3
// 005f3d4a  d902                 fld dword ptr [edx]
// 005f3d4c  83c20c               add edx, 0xc
// 005f3d4f  d8c9                 fmul st(1)
// 005f3d51  83c10c               add ecx, 0xc
// 005f3d54  83ef01               sub edi, 1
// 005f3d57  d959f0               fstp dword ptr [ecx - 0x10]
// 005f3d5a  d9440ef4             fld dword ptr [esi + ecx - 0xc]
// 005f3d5e  d8c9                 fmul st(1)
// 005f3d60  d959f4               fstp dword ptr [ecx - 0xc]
// 005f3d63  d942fc               fld dword ptr [edx - 4]
// 005f3d66  d8c9                 fmul st(1)
// 005f3d68  d959f8               fstp dword ptr [ecx - 8]
// 005f3d6b  75dd                 jne 0x5f3d4a
// 005f3d6d  5f                   pop edi
// 005f3d6e  ddd8                 fstp st(0)
// 005f3d70  5e                   pop esi
// 005f3d71  c3                   ret 
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ??DG3D@@YA?AVMatrix3@0@NABV10@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
