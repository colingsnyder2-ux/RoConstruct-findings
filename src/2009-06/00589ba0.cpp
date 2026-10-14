// roc 2009-06 00589ba0  unit: seg_00580000  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00589ba0
//
// 00589ba0  d9ee                 fldz 
// 00589ba2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00589ba6  8bc1                 mov eax, ecx
// 00589ba8  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00589bac  c70014b78c00         mov dword ptr [eax], 0x8cb714
// 00589bb2  d95004               fst dword ptr [eax + 4]
// 00589bb5  d95008               fst dword ptr [eax + 8]
// 00589bb8  d9580c               fstp dword ptr [eax + 0xc]
// 00589bbb  d902                 fld dword ptr [edx]
// 00589bbd  d821                 fsub dword ptr [ecx]
// 00589bbf  d94204               fld dword ptr [edx + 4]
// 00589bc2  d86104               fsub dword ptr [ecx + 4]
// 00589bc5  d94208               fld dword ptr [edx + 8]
// 00589bc8  8b542408             mov edx, dword ptr [esp + 8]
// 00589bcc  d86108               fsub dword ptr [ecx + 8]
// 00589bcf  d902                 fld dword ptr [edx]
// 00589bd1  d821                 fsub dword ptr [ecx]
// 00589bd3  d94204               fld dword ptr [edx + 4]
// 00589bd6  d86104               fsub dword ptr [ecx + 4]
// 00589bd9  d94208               fld dword ptr [edx + 8]
// 00589bdc  d86108               fsub dword ptr [ecx + 8]
// 00589bdf  d9c1                 fld st(1)
// 00589be1  d8cc                 fmul st(4)
// 00589be3  d9c1                 fld st(1)
// 00589be5  d8ce                 fmul st(6)
// 00589be7  dee9                 fsubp st(1)
// 00589be9  d9c9                 fxch st(1)
// 00589beb  d8ce                 fmul st(6)
// 00589bed  d9cc                 fxch st(4)
// 00589bef  d8cb                 fmul st(3)
// 00589bf1  deec                 fsubp st(4)
// 00589bf3  d9cc                 fxch st(4)
// 00589bf5  deca                 fmulp st(2)
// 00589bf7  decc                 fmulp st(4)
// 00589bf9  dee3                 fsubrp st(3)
// 00589bfb  d9c2                 fld st(2)
// 00589bfd  d8cb                 fmul st(3)
// 00589bff  d9c1                 fld st(1)
// 00589c01  d8ca                 fmul st(2)
// 00589c03  dec1                 faddp st(1)
// 00589c05  d9c2                 fld st(2)
// 00589c07  d8cb                 fmul st(3)
// 00589c09  dec1                 faddp st(1)
// 00589c0b  d9fa                 fsqrt 
// 00589c0d  d9e8                 fld1 
// 00589c0f  def1                 fdivrp st(1)
// 00589c11  dcca                 fmul st(2), st(0)
// 00589c13  dcc9                 fmul st(1), st(0)
// 00589c15  decb                 fmulp st(3)
// 00589c17  d9c9                 fxch st(1)
// 00589c19  d95804               fstp dword ptr [eax + 4]
// 00589c1c  d95808               fstp dword ptr [eax + 8]
// 00589c1f  d9580c               fstp dword ptr [eax + 0xc]
// 00589c22  d94008               fld dword ptr [eax + 8]
// 00589c25  d84904               fmul dword ptr [ecx + 4]
// 00589c28  d9400c               fld dword ptr [eax + 0xc]
// 00589c2b  d84908               fmul dword ptr [ecx + 8]
// 00589c2e  dec1                 faddp st(1)
// 00589c30  d901                 fld dword ptr [ecx]
// 00589c32  d84804               fmul dword ptr [eax + 4]
// 00589c35  dec1                 faddp st(1)
// 00589c37  d95810               fstp dword ptr [eax + 0x10]
// 00589c3a  c20c00               ret 0xc
// library g3d-6.09-rbx2008/G3Dcpp\Plane.cpp (function ??0Plane@G3D@@QAE@ABVVector3@1@00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Plane.cpp
