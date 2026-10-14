// roc 2009-06 00577d30  unit: G3D::LineSegment  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00577d30
//
// 00577d30  8b542404             mov edx, dword ptr [esp + 4]
// 00577d34  83ec24               sub esp, 0x24
// 00577d37  56                   push esi
// 00577d38  8bc1                 mov eax, ecx
// 00577d3a  57                   push edi
// 00577d3b  8d4804               lea ecx, [eax + 4]
// 00577d3e  8d74240c             lea esi, [esp + 0xc]
// 00577d42  bf03000000           mov edi, 3
// 00577d47  d9420c               fld dword ptr [edx + 0xc]
// 00577d4a  83c10c               add ecx, 0xc
// 00577d4d  d849f4               fmul dword ptr [ecx - 0xc]
// 00577d50  83c60c               add esi, 0xc
// 00577d53  83ef01               sub edi, 1
// 00577d56  d941f8               fld dword ptr [ecx - 8]
// 00577d59  d84a18               fmul dword ptr [edx + 0x18]
// 00577d5c  dec1                 faddp st(1)
// 00577d5e  d941f0               fld dword ptr [ecx - 0x10]
// 00577d61  d80a                 fmul dword ptr [edx]
// 00577d63  dec1                 faddp st(1)
// 00577d65  d95ef0               fstp dword ptr [esi - 0x10]
// 00577d68  d94210               fld dword ptr [edx + 0x10]
// 00577d6b  d849f4               fmul dword ptr [ecx - 0xc]
// 00577d6e  d941f8               fld dword ptr [ecx - 8]
// 00577d71  d84a1c               fmul dword ptr [edx + 0x1c]
// 00577d74  dec1                 faddp st(1)
// 00577d76  d941f0               fld dword ptr [ecx - 0x10]
// 00577d79  d84a04               fmul dword ptr [edx + 4]
// 00577d7c  dec1                 faddp st(1)
// 00577d7e  d95ef4               fstp dword ptr [esi - 0xc]
// 00577d81  d941f8               fld dword ptr [ecx - 8]
// 00577d84  d84a20               fmul dword ptr [edx + 0x20]
// 00577d87  d941f0               fld dword ptr [ecx - 0x10]
// 00577d8a  d84a08               fmul dword ptr [edx + 8]
// 00577d8d  dec1                 faddp st(1)
// 00577d8f  d94214               fld dword ptr [edx + 0x14]
// 00577d92  d849f4               fmul dword ptr [ecx - 0xc]
// 00577d95  dec1                 faddp st(1)
// 00577d97  d95ef8               fstp dword ptr [esi - 8]
// 00577d9a  75ab                 jne 0x577d47
// 00577d9c  b909000000           mov ecx, 9
// 00577da1  8d742408             lea esi, [esp + 8]
// 00577da5  8bf8                 mov edi, eax
// 00577da7  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00577da9  5f                   pop edi
// 00577daa  5e                   pop esi
// 00577dab  83c424               add esp, 0x24
// 00577dae  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\Matrix3.cpp (function ??XMatrix3@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Matrix3.cpp
