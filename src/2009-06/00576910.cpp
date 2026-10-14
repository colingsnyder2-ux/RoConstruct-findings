// roc 2009-06 00576910  unit: G3D::BinaryInput  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00576910
//
// 00576910  d9ee                 fldz 
// 00576912  8bc1                 mov eax, ecx
// 00576914  d95004               fst dword ptr [eax + 4]
// 00576917  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0057691b  d95008               fst dword ptr [eax + 8]
// 0057691e  c7008cb88c00         mov dword ptr [eax], 0x8cb88c
// 00576924  d9500c               fst dword ptr [eax + 0xc]
// 00576927  d95010               fst dword ptr [eax + 0x10]
// 0057692a  d95014               fst dword ptr [eax + 0x14]
// 0057692d  d95818               fstp dword ptr [eax + 0x18]
// 00576930  d901                 fld dword ptr [ecx]
// 00576932  d95804               fstp dword ptr [eax + 4]
// 00576935  d94104               fld dword ptr [ecx + 4]
// 00576938  d95808               fstp dword ptr [eax + 8]
// 0057693b  d94108               fld dword ptr [ecx + 8]
// 0057693e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00576942  d9580c               fstp dword ptr [eax + 0xc]
// 00576945  d94108               fld dword ptr [ecx + 8]
// 00576948  d94104               fld dword ptr [ecx + 4]
// 0057694b  d901                 fld dword ptr [ecx]
// 0057694d  dcc8                 fmul st(0), st(0)
// 0057694f  d9c1                 fld st(1)
// 00576951  deca                 fmulp st(2)
// 00576953  dec1                 faddp st(1)
// 00576955  d9c1                 fld st(1)
// 00576957  deca                 fmulp st(2)
// 00576959  dec1                 faddp st(1)
// 0057695b  d9fa                 fsqrt 
// 0057695d  d9e8                 fld1 
// 0057695f  def1                 fdivrp st(1)
// 00576961  d901                 fld dword ptr [ecx]
// 00576963  d8c9                 fmul st(1)
// 00576965  d94104               fld dword ptr [ecx + 4]
// 00576968  d8ca                 fmul st(2)
// 0057696a  d94108               fld dword ptr [ecx + 8]
// 0057696d  decb                 fmulp st(3)
// 0057696f  d9c9                 fxch st(1)
// 00576971  d95810               fstp dword ptr [eax + 0x10]
// 00576974  d95814               fstp dword ptr [eax + 0x14]
// 00576977  d95818               fstp dword ptr [eax + 0x18]
// 0057697a  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\Capsule.cpp (function ??0Line@G3D@@IAE@ABVVector3@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Capsule.cpp
