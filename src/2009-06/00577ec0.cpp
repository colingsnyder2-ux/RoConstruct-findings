// roc 2009-06 00577ec0  unit: G3D::LineSegment  size: 289 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00577ec0
//
// 00577ec0  d94118               fld dword ptr [ecx + 0x18]
// 00577ec3  d9410c               fld dword ptr [ecx + 0xc]
// 00577ec6  d901                 fld dword ptr [ecx]
// 00577ec8  dcc8                 fmul st(0), st(0)
// 00577eca  d9c1                 fld st(1)
// 00577ecc  deca                 fmulp st(2)
// 00577ece  dec1                 faddp st(1)
// 00577ed0  d9c1                 fld st(1)
// 00577ed2  deca                 fmulp st(2)
// 00577ed4  dec1                 faddp st(1)
// 00577ed6  d9fa                 fsqrt 
// 00577ed8  d9e8                 fld1 
// 00577eda  d9c0                 fld st(0)
// 00577edc  def2                 fdivrp st(2)
// 00577ede  d901                 fld dword ptr [ecx]
// 00577ee0  d8ca                 fmul st(2)
// 00577ee2  d911                 fst dword ptr [ecx]
// 00577ee4  d9c2                 fld st(2)
// 00577ee6  d8490c               fmul dword ptr [ecx + 0xc]
// 00577ee9  d9510c               fst dword ptr [ecx + 0xc]
// 00577eec  d9cb                 fxch st(3)
// 00577eee  d84918               fmul dword ptr [ecx + 0x18]
// 00577ef1  d95118               fst dword ptr [ecx + 0x18]
// 00577ef4  d9411c               fld dword ptr [ecx + 0x1c]
// 00577ef7  d8c9                 fmul st(1)
// 00577ef9  d94110               fld dword ptr [ecx + 0x10]
// 00577efc  d8cd                 fmul st(5)
// 00577efe  dec1                 faddp st(1)
// 00577f00  d9c2                 fld st(2)
// 00577f02  d84904               fmul dword ptr [ecx + 4]
// 00577f05  dec1                 faddp st(1)
// 00577f07  dcca                 fmul st(2), st(0)
// 00577f09  d94104               fld dword ptr [ecx + 4]
// 00577f0c  dee3                 fsubrp st(3)
// 00577f0e  d9ca                 fxch st(2)
// 00577f10  d95104               fst dword ptr [ecx + 4]
// 00577f13  d9cc                 fxch st(4)
// 00577f15  d8ca                 fmul st(2)
// 00577f17  d86910               fsubr dword ptr [ecx + 0x10]
// 00577f1a  d95110               fst dword ptr [ecx + 0x10]
// 00577f1d  d9c9                 fxch st(1)
// 00577f1f  deca                 fmulp st(2)
// 00577f21  d9411c               fld dword ptr [ecx + 0x1c]
// 00577f24  dee2                 fsubrp st(2)
// 00577f26  d9c9                 fxch st(1)
// 00577f28  d9511c               fst dword ptr [ecx + 0x1c]
// 00577f2b  dcc8                 fmul st(0), st(0)
// 00577f2d  d9c1                 fld st(1)
// 00577f2f  deca                 fmulp st(2)
// 00577f31  dec1                 faddp st(1)
// 00577f33  d9c2                 fld st(2)
// 00577f35  decb                 fmulp st(3)
// 00577f37  dec2                 faddp st(2)
// 00577f39  d9c9                 fxch st(1)
// 00577f3b  d9fa                 fsqrt 
// 00577f3d  d8f9                 fdivr st(1)
// 00577f3f  d9c0                 fld st(0)
// 00577f41  d84904               fmul dword ptr [ecx + 4]
// 00577f44  d95104               fst dword ptr [ecx + 4]
// 00577f47  d94110               fld dword ptr [ecx + 0x10]
// 00577f4a  d8ca                 fmul st(2)
// 00577f4c  d95110               fst dword ptr [ecx + 0x10]
// 00577f4f  d9411c               fld dword ptr [ecx + 0x1c]
// 00577f52  decb                 fmulp st(3)
// 00577f54  d9ca                 fxch st(2)
// 00577f56  d9511c               fst dword ptr [ecx + 0x1c]
// 00577f59  d94108               fld dword ptr [ecx + 8]
// 00577f5c  deca                 fmulp st(2)
// 00577f5e  d84920               fmul dword ptr [ecx + 0x20]
// 00577f61  dec1                 faddp st(1)
// 00577f63  d94114               fld dword ptr [ecx + 0x14]
// 00577f66  deca                 fmulp st(2)
// 00577f68  dec1                 faddp st(1)
// 00577f6a  d94120               fld dword ptr [ecx + 0x20]
// 00577f6d  d84918               fmul dword ptr [ecx + 0x18]
// 00577f70  d94114               fld dword ptr [ecx + 0x14]
// 00577f73  d8490c               fmul dword ptr [ecx + 0xc]
// 00577f76  dec1                 faddp st(1)
// 00577f78  d94108               fld dword ptr [ecx + 8]
// 00577f7b  d809                 fmul dword ptr [ecx]
// 00577f7d  dec1                 faddp st(1)
// 00577f7f  d901                 fld dword ptr [ecx]
// 00577f81  d8c9                 fmul st(1)
// 00577f83  d9c2                 fld st(2)
// 00577f85  d84904               fmul dword ptr [ecx + 4]
// 00577f88  dec1                 faddp st(1)
// 00577f8a  d86908               fsubr dword ptr [ecx + 8]
// 00577f8d  d95108               fst dword ptr [ecx + 8]
// 00577f90  d94110               fld dword ptr [ecx + 0x10]
// 00577f93  d8cb                 fmul st(3)
// 00577f95  d9c2                 fld st(2)
// 00577f97  d8490c               fmul dword ptr [ecx + 0xc]
// 00577f9a  dec1                 faddp st(1)
// 00577f9c  d86914               fsubr dword ptr [ecx + 0x14]
// 00577f9f  d95114               fst dword ptr [ecx + 0x14]
// 00577fa2  d9411c               fld dword ptr [ecx + 0x1c]
// 00577fa5  decc                 fmulp st(4)
// 00577fa7  d9ca                 fxch st(2)
// 00577fa9  d84918               fmul dword ptr [ecx + 0x18]
// 00577fac  dec3                 faddp st(3)
// 00577fae  d94120               fld dword ptr [ecx + 0x20]
// 00577fb1  dee3                 fsubrp st(3)
// 00577fb3  d9ca                 fxch st(2)
// 00577fb5  d95120               fst dword ptr [ecx + 0x20]
// 00577fb8  dcc8                 fmul st(0), st(0)
// 00577fba  d9c1                 fld st(1)
// 00577fbc  deca                 fmulp st(2)
// 00577fbe  dec1                 faddp st(1)
// 00577fc0  d9c1                 fld st(1)
// 00577fc2  deca                 fmulp st(2)
// 00577fc4  dec1                 faddp st(1)
// 00577fc6  d9fa                 fsqrt 
// 00577fc8  def9                 fdivp st(1)
// 00577fca  d94108               fld dword ptr [ecx + 8]
// 00577fcd  d8c9                 fmul st(1)
// 00577fcf  d95908               fstp dword ptr [ecx + 8]
// 00577fd2  d94114               fld dword ptr [ecx + 0x14]
// 00577fd5  d8c9                 fmul st(1)
// 00577fd7  d95914               fstp dword ptr [ecx + 0x14]
// 00577fda  d84920               fmul dword ptr [ecx + 0x20]
// 00577fdd  d95920               fstp dword ptr [ecx + 0x20]
// 00577fe0  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\Matrix3.cpp (function ?orthonormalize@Matrix3@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Matrix3.cpp
