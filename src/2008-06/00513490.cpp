// from server: 100% by auto
// roc 2008-06 00513490  unit: G3D::GCamera  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00513490
//
// 00513490  8b542410             mov edx, dword ptr [esp + 0x10]
// 00513494  dd442408             fld qword ptr [esp + 8]
// 00513498  8b442404             mov eax, dword ptr [esp + 4]
// 0051349c  56                   push esi
// 0051349d  8bf2                 mov esi, edx
// 0051349f  57                   push edi
// 005134a0  8d4804               lea ecx, [eax + 4]
// 005134a3  2bf0                 sub esi, eax
// 005134a5  bf03000000           mov edi, 3
// 005134aa  d902                 fld dword ptr [edx]
// 005134ac  83c20c               add edx, 0xc
// 005134af  d8c9                 fmul st(1)
// 005134b1  83c10c               add ecx, 0xc
// 005134b4  83ef01               sub edi, 1
// 005134b7  d959f0               fstp dword ptr [ecx - 0x10]
// 005134ba  d9440ef4             fld dword ptr [esi + ecx - 0xc]
// 005134be  d8c9                 fmul st(1)
// 005134c0  d959f4               fstp dword ptr [ecx - 0xc]
// 005134c3  d942fc               fld dword ptr [edx - 4]
// 005134c6  d8c9                 fmul st(1)
// 005134c8  d959f8               fstp dword ptr [ecx - 8]
// 005134cb  75dd                 jne 0x5134aa
// 005134cd  5f                   pop edi
// 005134ce  ddd8                 fstp st(0)
// 005134d0  5e                   pop esi
// 005134d1  c3                   ret 
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ??DG3D@@YA?AVMatrix3@0@NABV10@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
