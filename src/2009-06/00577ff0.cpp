// roc 2009-06 00577ff0  unit: G3D::LineSegment  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00577ff0
//
// 00577ff0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00577ff4  d944240c             fld dword ptr [esp + 0xc]
// 00577ff8  d9c0                 fld st(0)
// 00577ffa  8b442404             mov eax, dword ptr [esp + 4]
// 00577ffe  d9ff                 fcos 
// 00578000  d9c9                 fxch st(1)
// 00578002  d9fe                 fsin 
// 00578004  d9e8                 fld1 
// 00578006  d8e2                 fsub st(2)
// 00578008  d94104               fld dword ptr [ecx + 4]
// 0057800b  d809                 fmul dword ptr [ecx]
// 0057800d  d8c9                 fmul st(1)
// 0057800f  d94108               fld dword ptr [ecx + 8]
// 00578012  d809                 fmul dword ptr [ecx]
// 00578014  d8ca                 fmul st(2)
// 00578016  d94104               fld dword ptr [ecx + 4]
// 00578019  d84908               fmul dword ptr [ecx + 8]
// 0057801c  d8cb                 fmul st(3)
// 0057801e  d901                 fld dword ptr [ecx]
// 00578020  d8cd                 fmul st(5)
// 00578022  d94104               fld dword ptr [ecx + 4]
// 00578025  d8ce                 fmul st(6)
// 00578027  d95c2408             fstp dword ptr [esp + 8]
// 0057802b  d94108               fld dword ptr [ecx + 8]
// 0057802e  dece                 fmulp st(6)
// 00578030  d9cd                 fxch st(5)
// 00578032  d95c240c             fstp dword ptr [esp + 0xc]
// 00578036  d901                 fld dword ptr [ecx]
// 00578038  dcc8                 fmul st(0), st(0)
// 0057803a  d8cc                 fmul st(4)
// 0057803c  d8c6                 fadd st(6)
// 0057803e  d918                 fstp dword ptr [eax]
// 00578040  d9c2                 fld st(2)
// 00578042  d864240c             fsub dword ptr [esp + 0xc]
// 00578046  d95804               fstp dword ptr [eax + 4]
// 00578049  d9442408             fld dword ptr [esp + 8]
// 0057804d  d9c0                 fld st(0)
// 0057804f  d8c3                 fadd st(3)
// 00578051  d95808               fstp dword ptr [eax + 8]
// 00578054  d944240c             fld dword ptr [esp + 0xc]
// 00578058  dec4                 faddp st(4)
// 0057805a  d9cb                 fxch st(3)
// 0057805c  d9580c               fstp dword ptr [eax + 0xc]
// 0057805f  d94104               fld dword ptr [ecx + 4]
// 00578062  dcc8                 fmul st(0), st(0)
// 00578064  d8cc                 fmul st(4)
// 00578066  d8c6                 fadd st(6)
// 00578068  d95810               fstp dword ptr [eax + 0x10]
// 0057806b  d9c0                 fld st(0)
// 0057806d  d8e5                 fsub st(5)
// 0057806f  d95814               fstp dword ptr [eax + 0x14]
// 00578072  d9c9                 fxch st(1)
// 00578074  dee2                 fsubrp st(2)
// 00578076  d9c9                 fxch st(1)
// 00578078  d95818               fstp dword ptr [eax + 0x18]
// 0057807b  dec2                 faddp st(2)
// 0057807d  d9c9                 fxch st(1)
// 0057807f  d9581c               fstp dword ptr [eax + 0x1c]
// 00578082  d94108               fld dword ptr [ecx + 8]
// 00578085  dcc8                 fmul st(0), st(0)
// 00578087  dec9                 fmulp st(1)
// 00578089  dec1                 faddp st(1)
// 0057808b  d95820               fstp dword ptr [eax + 0x20]
// 0057808e  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\Matrix3.cpp (function ?fromAxisAngle@Matrix3@G3D@@SA?AV12@ABVVector3@2@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Matrix3.cpp
