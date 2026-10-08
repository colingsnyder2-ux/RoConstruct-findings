// roc 2007-03 004fecd0  unit: seg_004f0000  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fecd0
//
// 004fecd0  8b542410             mov edx, dword ptr [esp + 0x10]
// 004fecd4  dd442408             fld qword ptr [esp + 8]
// 004fecd8  8b442404             mov eax, dword ptr [esp + 4]
// 004fecdc  56                   push esi
// 004fecdd  8bf2                 mov esi, edx
// 004fecdf  57                   push edi
// 004fece0  8d4804               lea ecx, [eax + 4]
// 004fece3  2bf0                 sub esi, eax
// 004fece5  bf03000000           mov edi, 3
// 004fecea  d902                 fld dword ptr [edx]
// 004fecec  83c20c               add edx, 0xc
// 004fecef  d8c9                 fmul st(1)
// 004fecf1  83c10c               add ecx, 0xc
// 004fecf4  83ef01               sub edi, 1
// 004fecf7  d959f0               fstp dword ptr [ecx - 0x10]
// 004fecfa  d9440ef4             fld dword ptr [esi + ecx - 0xc]
// 004fecfe  d8c9                 fmul st(1)
// 004fed00  d959f4               fstp dword ptr [ecx - 0xc]
// 004fed03  d942fc               fld dword ptr [edx - 4]
// 004fed06  d8c9                 fmul st(1)
// 004fed08  d959f8               fstp dword ptr [ecx - 8]
// 004fed0b  75dd                 jne 0x4fecea
// 004fed0d  5f                   pop edi
// 004fed0e  ddd8                 fstp st(0)
// 004fed10  5e                   pop esi
// 004fed11  c3                   ret 
// library rbxgs-g3d/G3Dcpp\Matrix3.cpp (function ??DG3D@@YA?AVMatrix3@0@NABV10@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Matrix3.cpp
