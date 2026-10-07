// roc 2007-08 00480090  unit: G3D::Win32Window  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00480090
//
// 00480090  8b442404             mov eax, dword ptr [esp + 4]
// 00480094  d901                 fld dword ptr [ecx]
// 00480096  d918                 fstp dword ptr [eax]
// 00480098  d9410c               fld dword ptr [ecx + 0xc]
// 0048009b  d95804               fstp dword ptr [eax + 4]
// 0048009e  d94118               fld dword ptr [ecx + 0x18]
// 004800a1  d95808               fstp dword ptr [eax + 8]
// 004800a4  d9ee                 fldz 
// 004800a6  d9500c               fst dword ptr [eax + 0xc]
// 004800a9  d94104               fld dword ptr [ecx + 4]
// 004800ac  d95810               fstp dword ptr [eax + 0x10]
// 004800af  d94110               fld dword ptr [ecx + 0x10]
// 004800b2  d95814               fstp dword ptr [eax + 0x14]
// 004800b5  d9411c               fld dword ptr [ecx + 0x1c]
// 004800b8  d95818               fstp dword ptr [eax + 0x18]
// 004800bb  d9501c               fst dword ptr [eax + 0x1c]
// 004800be  d94108               fld dword ptr [ecx + 8]
// 004800c1  d95820               fstp dword ptr [eax + 0x20]
// 004800c4  d94114               fld dword ptr [ecx + 0x14]
// 004800c7  d95824               fstp dword ptr [eax + 0x24]
// 004800ca  d94120               fld dword ptr [ecx + 0x20]
// 004800cd  d95828               fstp dword ptr [eax + 0x28]
// 004800d0  d9582c               fstp dword ptr [eax + 0x2c]
// 004800d3  d902                 fld dword ptr [edx]
// 004800d5  d95830               fstp dword ptr [eax + 0x30]
// 004800d8  d94204               fld dword ptr [edx + 4]
// 004800db  d95834               fstp dword ptr [eax + 0x34]
// 004800de  d94208               fld dword ptr [edx + 8]
// 004800e1  d95838               fstp dword ptr [eax + 0x38]
// 004800e4  d9e8                 fld1 
// 004800e6  d9583c               fstp dword ptr [eax + 0x3c]
// 004800e9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\glcalls.cpp (function ?_getGLMatrix@G3D@@YAXPAMABVMatrix3@1@ABVVector3@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/glcalls.cpp
