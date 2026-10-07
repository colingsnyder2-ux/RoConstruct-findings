// roc 2011-06 00540480  unit: G3D::MemoryManager  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00540480
//
// 00540480  8b542410             mov edx, dword ptr [esp + 0x10]
// 00540484  dd442408             fld qword ptr [esp + 8]
// 00540488  8b442404             mov eax, dword ptr [esp + 4]
// 0054048c  56                   push esi
// 0054048d  8bf2                 mov esi, edx
// 0054048f  57                   push edi
// 00540490  8d4804               lea ecx, [eax + 4]
// 00540493  2bf0                 sub esi, eax
// 00540495  bf03000000           mov edi, 3
// 0054049a  d902                 fld dword ptr [edx]
// 0054049c  83c20c               add edx, 0xc
// 0054049f  d8c9                 fmul st(1)
// 005404a1  83c10c               add ecx, 0xc
// 005404a4  83ef01               sub edi, 1
// 005404a7  d959f0               fstp dword ptr [ecx - 0x10]
// 005404aa  d9440ef4             fld dword ptr [esi + ecx - 0xc]
// 005404ae  d8c9                 fmul st(1)
// 005404b0  d959f4               fstp dword ptr [ecx - 0xc]
// 005404b3  d942fc               fld dword ptr [edx - 4]
// 005404b6  d8c9                 fmul st(1)
// 005404b8  d959f8               fstp dword ptr [ecx - 8]
// 005404bb  75dd                 jne 0x54049a
// 005404bd  5f                   pop edi
// 005404be  ddd8                 fstp st(0)
// 005404c0  5e                   pop esi
// 005404c1  c3                   ret 
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ??DG3D@@YA?AVMatrix3@0@NABV10@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
