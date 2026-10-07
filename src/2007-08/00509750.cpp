// roc 2007-08 00509750  unit: G3D::GCamera  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00509750
//
// 00509750  55                   push ebp
// 00509751  8bec                 mov ebp, esp
// 00509753  83e4f8               and esp, 0xfffffff8
// 00509756  83ec3c               sub esp, 0x3c
// 00509759  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0050975c  d9400c               fld dword ptr [eax + 0xc]
// 0050975f  56                   push esi
// 00509760  d900                 fld dword ptr [eax]
// 00509762  83c108               add ecx, 8
// 00509765  d94018               fld dword ptr [eax + 0x18]
// 00509768  be03000000           mov esi, 3
// 0050976d  dd5c2408             fstp qword ptr [esp + 8]
// 00509771  d94010               fld dword ptr [eax + 0x10]
// 00509774  dd5c2418             fstp qword ptr [esp + 0x18]
// 00509778  d94004               fld dword ptr [eax + 4]
// 0050977b  dd5c2410             fstp qword ptr [esp + 0x10]
// 0050977f  d9401c               fld dword ptr [eax + 0x1c]
// 00509782  dd5c2420             fstp qword ptr [esp + 0x20]
// 00509786  d94014               fld dword ptr [eax + 0x14]
// 00509789  dd5c2428             fstp qword ptr [esp + 0x28]
// 0050978d  d94008               fld dword ptr [eax + 8]
// 00509790  dd5c2430             fstp qword ptr [esp + 0x30]
// 00509794  d94020               fld dword ptr [eax + 0x20]
// 00509797  8b4508               mov eax, dword ptr [ebp + 8]
// 0050979a  dd5c2438             fstp qword ptr [esp + 0x38]
// 0050979e  8d5008               lea edx, [eax + 8]
// 005097a1  d941fc               fld dword ptr [ecx - 4]
// 005097a4  83c10c               add ecx, 0xc
// 005097a7  d941ec               fld dword ptr [ecx - 0x14]
// 005097aa  83c20c               add edx, 0xc
// 005097ad  83ee01               sub esi, 1
// 005097b0  d941f4               fld dword ptr [ecx - 0xc]
// 005097b3  d9c1                 fld st(1)
// 005097b5  d8cc                 fmul st(4)
// 005097b7  d9c3                 fld st(3)
// 005097b9  d8ce                 fmul st(6)
// 005097bb  dec1                 faddp st(1)
// 005097bd  d9c1                 fld st(1)
// 005097bf  dc4c2408             fmul qword ptr [esp + 8]
// 005097c3  dec1                 faddp st(1)
// 005097c5  d95aec               fstp dword ptr [edx - 0x14]
// 005097c8  d9c1                 fld st(1)
// 005097ca  dc4c2410             fmul qword ptr [esp + 0x10]
// 005097ce  d9c3                 fld st(3)
// 005097d0  dc4c2418             fmul qword ptr [esp + 0x18]
// 005097d4  dec1                 faddp st(1)
// 005097d6  d9c1                 fld st(1)
// 005097d8  dc4c2420             fmul qword ptr [esp + 0x20]
// 005097dc  dec1                 faddp st(1)
// 005097de  d95af0               fstp dword ptr [edx - 0x10]
// 005097e1  d9ca                 fxch st(2)
// 005097e3  dc4c2428             fmul qword ptr [esp + 0x28]
// 005097e7  d9c9                 fxch st(1)
// 005097e9  dc4c2430             fmul qword ptr [esp + 0x30]
// 005097ed  dec1                 faddp st(1)
// 005097ef  d9c9                 fxch st(1)
// 005097f1  dc4c2438             fmul qword ptr [esp + 0x38]
// 005097f5  dec1                 faddp st(1)
// 005097f7  d95af4               fstp dword ptr [edx - 0xc]
// 005097fa  75a5                 jne 0x5097a1
// 005097fc  ddd9                 fstp st(1)
// 005097fe  5e                   pop esi
// 005097ff  ddd8                 fstp st(0)
// 00509801  8be5                 mov esp, ebp
// 00509803  5d                   pop ebp
// 00509804  c20800               ret 8
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ??DMatrix3@G3D@@QBE?AV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
