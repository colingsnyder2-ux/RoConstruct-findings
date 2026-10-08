// from server: 100% by auto
// roc 2007-08 00509810  unit: G3D::GCamera  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00509810
//
// 00509810  55                   push ebp
// 00509811  8bec                 mov ebp, esp
// 00509813  83e4f8               and esp, 0xfffffff8
// 00509816  83ec60               sub esp, 0x60
// 00509819  8bc1                 mov eax, ecx
// 0050981b  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0050981e  d9410c               fld dword ptr [ecx + 0xc]
// 00509821  56                   push esi
// 00509822  d901                 fld dword ptr [ecx]
// 00509824  57                   push edi
// 00509825  d94118               fld dword ptr [ecx + 0x18]
// 00509828  8d542448             lea edx, [esp + 0x48]
// 0050982c  dd5c2408             fstp qword ptr [esp + 8]
// 00509830  be03000000           mov esi, 3
// 00509835  d94110               fld dword ptr [ecx + 0x10]
// 00509838  dd5c2418             fstp qword ptr [esp + 0x18]
// 0050983c  d94104               fld dword ptr [ecx + 4]
// 0050983f  dd5c2410             fstp qword ptr [esp + 0x10]
// 00509843  d9411c               fld dword ptr [ecx + 0x1c]
// 00509846  dd5c2420             fstp qword ptr [esp + 0x20]
// 0050984a  d94114               fld dword ptr [ecx + 0x14]
// 0050984d  dd5c2430             fstp qword ptr [esp + 0x30]
// 00509851  d94108               fld dword ptr [ecx + 8]
// 00509854  dd5c2428             fstp qword ptr [esp + 0x28]
// 00509858  d94120               fld dword ptr [ecx + 0x20]
// 0050985b  8d4808               lea ecx, [eax + 8]
// 0050985e  dd5c2438             fstp qword ptr [esp + 0x38]
// 00509862  d941fc               fld dword ptr [ecx - 4]
// 00509865  83c10c               add ecx, 0xc
// 00509868  d941ec               fld dword ptr [ecx - 0x14]
// 0050986b  83c20c               add edx, 0xc
// 0050986e  83ee01               sub esi, 1
// 00509871  d941f4               fld dword ptr [ecx - 0xc]
// 00509874  d9c1                 fld st(1)
// 00509876  d8cc                 fmul st(4)
// 00509878  d9c3                 fld st(3)
// 0050987a  d8ce                 fmul st(6)
// 0050987c  dec1                 faddp st(1)
// 0050987e  d9c1                 fld st(1)
// 00509880  dc4c2408             fmul qword ptr [esp + 8]
// 00509884  dec1                 faddp st(1)
// 00509886  d95af0               fstp dword ptr [edx - 0x10]
// 00509889  d9c1                 fld st(1)
// 0050988b  dc4c2410             fmul qword ptr [esp + 0x10]
// 0050988f  d9c3                 fld st(3)
// 00509891  dc4c2418             fmul qword ptr [esp + 0x18]
// 00509895  dec1                 faddp st(1)
// 00509897  d9c1                 fld st(1)
// 00509899  dc4c2420             fmul qword ptr [esp + 0x20]
// 0050989d  dec1                 faddp st(1)
// 0050989f  d95af4               fstp dword ptr [edx - 0xc]
// 005098a2  d9c9                 fxch st(1)
// 005098a4  dc4c2428             fmul qword ptr [esp + 0x28]
// 005098a8  d9ca                 fxch st(2)
// 005098aa  dc4c2430             fmul qword ptr [esp + 0x30]
// 005098ae  dec2                 faddp st(2)
// 005098b0  dc4c2438             fmul qword ptr [esp + 0x38]
// 005098b4  dec1                 faddp st(1)
// 005098b6  d95af8               fstp dword ptr [edx - 8]
// 005098b9  75a7                 jne 0x509862
// 005098bb  b909000000           mov ecx, 9
// 005098c0  ddd9                 fstp st(1)
// 005098c2  8d742444             lea esi, [esp + 0x44]
// 005098c6  ddd8                 fstp st(0)
// 005098c8  8bf8                 mov edi, eax
// 005098ca  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 005098cc  5f                   pop edi
// 005098cd  5e                   pop esi
// 005098ce  8be5                 mov esp, ebp
// 005098d0  5d                   pop ebp
// 005098d1  c20400               ret 4
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ??XMatrix3@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
