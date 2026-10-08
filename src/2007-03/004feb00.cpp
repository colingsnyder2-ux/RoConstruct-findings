// roc 2007-03 004feb00  unit: seg_004f0000  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004feb00
//
// 004feb00  55                   push ebp
// 004feb01  8bec                 mov ebp, esp
// 004feb03  83e4f8               and esp, 0xfffffff8
// 004feb06  83ec3c               sub esp, 0x3c
// 004feb09  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004feb0c  d9400c               fld dword ptr [eax + 0xc]
// 004feb0f  56                   push esi
// 004feb10  d900                 fld dword ptr [eax]
// 004feb12  83c108               add ecx, 8
// 004feb15  d94018               fld dword ptr [eax + 0x18]
// 004feb18  be03000000           mov esi, 3
// 004feb1d  dd5c2408             fstp qword ptr [esp + 8]
// 004feb21  d94010               fld dword ptr [eax + 0x10]
// 004feb24  dd5c2418             fstp qword ptr [esp + 0x18]
// 004feb28  d94004               fld dword ptr [eax + 4]
// 004feb2b  dd5c2410             fstp qword ptr [esp + 0x10]
// 004feb2f  d9401c               fld dword ptr [eax + 0x1c]
// 004feb32  dd5c2420             fstp qword ptr [esp + 0x20]
// 004feb36  d94014               fld dword ptr [eax + 0x14]
// 004feb39  dd5c2428             fstp qword ptr [esp + 0x28]
// 004feb3d  d94008               fld dword ptr [eax + 8]
// 004feb40  dd5c2430             fstp qword ptr [esp + 0x30]
// 004feb44  d94020               fld dword ptr [eax + 0x20]
// 004feb47  8b4508               mov eax, dword ptr [ebp + 8]
// 004feb4a  dd5c2438             fstp qword ptr [esp + 0x38]
// 004feb4e  8d5008               lea edx, [eax + 8]
// 004feb51  d941fc               fld dword ptr [ecx - 4]
// 004feb54  83c10c               add ecx, 0xc
// 004feb57  d941ec               fld dword ptr [ecx - 0x14]
// 004feb5a  83c20c               add edx, 0xc
// 004feb5d  83ee01               sub esi, 1
// 004feb60  d941f4               fld dword ptr [ecx - 0xc]
// 004feb63  d9c1                 fld st(1)
// 004feb65  d8cc                 fmul st(4)
// 004feb67  d9c3                 fld st(3)
// 004feb69  d8ce                 fmul st(6)
// 004feb6b  dec1                 faddp st(1)
// 004feb6d  d9c1                 fld st(1)
// 004feb6f  dc4c2408             fmul qword ptr [esp + 8]
// 004feb73  dec1                 faddp st(1)
// 004feb75  d95aec               fstp dword ptr [edx - 0x14]
// 004feb78  d9c1                 fld st(1)
// 004feb7a  dc4c2410             fmul qword ptr [esp + 0x10]
// 004feb7e  d9c3                 fld st(3)
// 004feb80  dc4c2418             fmul qword ptr [esp + 0x18]
// 004feb84  dec1                 faddp st(1)
// 004feb86  d9c1                 fld st(1)
// 004feb88  dc4c2420             fmul qword ptr [esp + 0x20]
// 004feb8c  dec1                 faddp st(1)
// 004feb8e  d95af0               fstp dword ptr [edx - 0x10]
// 004feb91  d9ca                 fxch st(2)
// 004feb93  dc4c2428             fmul qword ptr [esp + 0x28]
// 004feb97  d9c9                 fxch st(1)
// 004feb99  dc4c2430             fmul qword ptr [esp + 0x30]
// 004feb9d  dec1                 faddp st(1)
// 004feb9f  d9c9                 fxch st(1)
// 004feba1  dc4c2438             fmul qword ptr [esp + 0x38]
// 004feba5  dec1                 faddp st(1)
// 004feba7  d95af4               fstp dword ptr [edx - 0xc]
// 004febaa  75a5                 jne 0x4feb51
// 004febac  ddd9                 fstp st(1)
// 004febae  5e                   pop esi
// 004febaf  ddd8                 fstp st(0)
// 004febb1  8be5                 mov esp, ebp
// 004febb3  5d                   pop ebp
// 004febb4  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\Matrix3.cpp (function ??DMatrix3@G3D@@QBE?AV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Matrix3.cpp
