// roc 2007-03 004febc0  unit: seg_004f0000  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004febc0
//
// 004febc0  55                   push ebp
// 004febc1  8bec                 mov ebp, esp
// 004febc3  83e4f8               and esp, 0xfffffff8
// 004febc6  83ec60               sub esp, 0x60
// 004febc9  8bc1                 mov eax, ecx
// 004febcb  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004febce  d9410c               fld dword ptr [ecx + 0xc]
// 004febd1  56                   push esi
// 004febd2  d901                 fld dword ptr [ecx]
// 004febd4  57                   push edi
// 004febd5  d94118               fld dword ptr [ecx + 0x18]
// 004febd8  8d542448             lea edx, [esp + 0x48]
// 004febdc  dd5c2408             fstp qword ptr [esp + 8]
// 004febe0  be03000000           mov esi, 3
// 004febe5  d94110               fld dword ptr [ecx + 0x10]
// 004febe8  dd5c2418             fstp qword ptr [esp + 0x18]
// 004febec  d94104               fld dword ptr [ecx + 4]
// 004febef  dd5c2410             fstp qword ptr [esp + 0x10]
// 004febf3  d9411c               fld dword ptr [ecx + 0x1c]
// 004febf6  dd5c2420             fstp qword ptr [esp + 0x20]
// 004febfa  d94114               fld dword ptr [ecx + 0x14]
// 004febfd  dd5c2430             fstp qword ptr [esp + 0x30]
// 004fec01  d94108               fld dword ptr [ecx + 8]
// 004fec04  dd5c2428             fstp qword ptr [esp + 0x28]
// 004fec08  d94120               fld dword ptr [ecx + 0x20]
// 004fec0b  8d4808               lea ecx, [eax + 8]
// 004fec0e  dd5c2438             fstp qword ptr [esp + 0x38]
// 004fec12  d941fc               fld dword ptr [ecx - 4]
// 004fec15  83c10c               add ecx, 0xc
// 004fec18  d941ec               fld dword ptr [ecx - 0x14]
// 004fec1b  83c20c               add edx, 0xc
// 004fec1e  83ee01               sub esi, 1
// 004fec21  d941f4               fld dword ptr [ecx - 0xc]
// 004fec24  d9c1                 fld st(1)
// 004fec26  d8cc                 fmul st(4)
// 004fec28  d9c3                 fld st(3)
// 004fec2a  d8ce                 fmul st(6)
// 004fec2c  dec1                 faddp st(1)
// 004fec2e  d9c1                 fld st(1)
// 004fec30  dc4c2408             fmul qword ptr [esp + 8]
// 004fec34  dec1                 faddp st(1)
// 004fec36  d95af0               fstp dword ptr [edx - 0x10]
// 004fec39  d9c1                 fld st(1)
// 004fec3b  dc4c2410             fmul qword ptr [esp + 0x10]
// 004fec3f  d9c3                 fld st(3)
// 004fec41  dc4c2418             fmul qword ptr [esp + 0x18]
// 004fec45  dec1                 faddp st(1)
// 004fec47  d9c1                 fld st(1)
// 004fec49  dc4c2420             fmul qword ptr [esp + 0x20]
// 004fec4d  dec1                 faddp st(1)
// 004fec4f  d95af4               fstp dword ptr [edx - 0xc]
// 004fec52  d9c9                 fxch st(1)
// 004fec54  dc4c2428             fmul qword ptr [esp + 0x28]
// 004fec58  d9ca                 fxch st(2)
// 004fec5a  dc4c2430             fmul qword ptr [esp + 0x30]
// 004fec5e  dec2                 faddp st(2)
// 004fec60  dc4c2438             fmul qword ptr [esp + 0x38]
// 004fec64  dec1                 faddp st(1)
// 004fec66  d95af8               fstp dword ptr [edx - 8]
// 004fec69  75a7                 jne 0x4fec12
// 004fec6b  b909000000           mov ecx, 9
// 004fec70  ddd9                 fstp st(1)
// 004fec72  8d742444             lea esi, [esp + 0x44]
// 004fec76  ddd8                 fstp st(0)
// 004fec78  8bf8                 mov edi, eax
// 004fec7a  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004fec7c  5f                   pop edi
// 004fec7d  5e                   pop esi
// 004fec7e  8be5                 mov esp, ebp
// 004fec80  5d                   pop ebp
// 004fec81  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\Matrix3.cpp (function ??XMatrix3@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Matrix3.cpp
