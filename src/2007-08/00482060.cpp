// from server: 100% by auto
// roc 2007-08 00482060  unit: G3D::Milestone  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00482060
//
// 00482060  83ec24               sub esp, 0x24
// 00482063  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00482067  d9420c               fld dword ptr [edx + 0xc]
// 0048206a  8b442428             mov eax, dword ptr [esp + 0x28]
// 0048206e  d95c242c             fstp dword ptr [esp + 0x2c]
// 00482072  d944242c             fld dword ptr [esp + 0x2c]
// 00482076  d94124               fld dword ptr [ecx + 0x24]
// 00482079  d8c9                 fmul st(1)
// 0048207b  d95c240c             fstp dword ptr [esp + 0xc]
// 0048207f  d94128               fld dword ptr [ecx + 0x28]
// 00482082  d8c9                 fmul st(1)
// 00482084  d95c2410             fstp dword ptr [esp + 0x10]
// 00482088  d8492c               fmul dword ptr [ecx + 0x2c]
// 0048208b  d95c2414             fstp dword ptr [esp + 0x14]
// 0048208f  d902                 fld dword ptr [edx]
// 00482091  d91c24               fstp dword ptr [esp]
// 00482094  d94204               fld dword ptr [edx + 4]
// 00482097  d95c2404             fstp dword ptr [esp + 4]
// 0048209b  d94208               fld dword ptr [edx + 8]
// 0048209e  d95c2408             fstp dword ptr [esp + 8]
// 004820a2  d9442404             fld dword ptr [esp + 4]
// 004820a6  d90424               fld dword ptr [esp]
// 004820a9  d9442408             fld dword ptr [esp + 8]
// 004820ad  d94104               fld dword ptr [ecx + 4]
// 004820b0  d8cb                 fmul st(3)
// 004820b2  d901                 fld dword ptr [ecx]
// 004820b4  d8cb                 fmul st(3)
// 004820b6  dec1                 faddp st(1)
// 004820b8  d94108               fld dword ptr [ecx + 8]
// 004820bb  d8ca                 fmul st(2)
// 004820bd  dec1                 faddp st(1)
// 004820bf  d91c24               fstp dword ptr [esp]
// 004820c2  d9410c               fld dword ptr [ecx + 0xc]
// 004820c5  d8ca                 fmul st(2)
// 004820c7  d94110               fld dword ptr [ecx + 0x10]
// 004820ca  d8cc                 fmul st(4)
// 004820cc  dec1                 faddp st(1)
// 004820ce  d94114               fld dword ptr [ecx + 0x14]
// 004820d1  d8ca                 fmul st(2)
// 004820d3  dec1                 faddp st(1)
// 004820d5  d95c2404             fstp dword ptr [esp + 4]
// 004820d9  d94118               fld dword ptr [ecx + 0x18]
// 004820dc  deca                 fmulp st(2)
// 004820de  d9411c               fld dword ptr [ecx + 0x1c]
// 004820e1  decb                 fmulp st(3)
// 004820e3  d9c9                 fxch st(1)
// 004820e5  dec2                 faddp st(2)
// 004820e7  d84920               fmul dword ptr [ecx + 0x20]
// 004820ea  dec1                 faddp st(1)
// 004820ec  d95c2408             fstp dword ptr [esp + 8]
// 004820f0  d90424               fld dword ptr [esp]
// 004820f3  d844240c             fadd dword ptr [esp + 0xc]
// 004820f7  d95c2418             fstp dword ptr [esp + 0x18]
// 004820fb  d9442404             fld dword ptr [esp + 4]
// 004820ff  d8442410             fadd dword ptr [esp + 0x10]
// 00482103  d95c241c             fstp dword ptr [esp + 0x1c]
// 00482107  d9442408             fld dword ptr [esp + 8]
// 0048210b  d8442414             fadd dword ptr [esp + 0x14]
// 0048210f  d95c2420             fstp dword ptr [esp + 0x20]
// 00482113  d9442418             fld dword ptr [esp + 0x18]
// 00482117  d918                 fstp dword ptr [eax]
// 00482119  d944241c             fld dword ptr [esp + 0x1c]
// 0048211d  d95804               fstp dword ptr [eax + 4]
// 00482120  d9442420             fld dword ptr [esp + 0x20]
// 00482124  d95808               fstp dword ptr [eax + 8]
// 00482127  d9420c               fld dword ptr [edx + 0xc]
// 0048212a  d9580c               fstp dword ptr [eax + 0xc]
// 0048212d  83c424               add esp, 0x24
// 00482130  c20800               ret 8
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?toWorldSpace@CoordinateFrame@G3D@@QBE?AVVector4@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
