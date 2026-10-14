// roc 2009-06 00576740  unit: G3D::BinaryInput  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00576740
//
// 00576740  d9ee                 fldz 
// 00576742  d9442408             fld dword ptr [esp + 8]
// 00576746  dde1                 fucom st(1)
// 00576748  dfe0                 fnstsw ax
// 0057674a  ddd9                 fstp st(1)
// 0057674c  f6c444               test ah, 0x44
// 0057674f  7b23                 jnp 0x576774
// 00576751  d9e8                 fld1 
// 00576753  8b442404             mov eax, dword ptr [esp + 4]
// 00576757  def1                 fdivrp st(1)
// 00576759  d901                 fld dword ptr [ecx]
// 0057675b  d8c9                 fmul st(1)
// 0057675d  d94104               fld dword ptr [ecx + 4]
// 00576760  d8ca                 fmul st(2)
// 00576762  d94108               fld dword ptr [ecx + 8]
// 00576765  decb                 fmulp st(3)
// 00576767  d9c9                 fxch st(1)
// 00576769  d918                 fstp dword ptr [eax]
// 0057676b  d95804               fstp dword ptr [eax + 4]
// 0057676e  d95808               fstp dword ptr [eax + 8]
// 00576771  c20800               ret 8
// 00576774  a1b8c8a300           mov eax, dword ptr [0xa3c8b8]
// 00576779  ddd8                 fstp st(0)
// 0057677b  8b0d44e58900         mov ecx, dword ptr [0x89e544]
// 00576781  a801                 test al, 1
// 00576783  7538                 jne 0x5767bd
// 00576785  83c801               or eax, 1
// 00576788  a3b8c8a300           mov dword ptr [0xa3c8b8], eax
// 0057678d  dd01                 fld qword ptr [ecx]
// 0057678f  dd1db0c8a300         fstp qword ptr [0xa3c8b0]
// 00576795  a801                 test al, 1
// 00576797  7524                 jne 0x5767bd
// 00576799  83c801               or eax, 1
// 0057679c  a3b8c8a300           mov dword ptr [0xa3c8b8], eax
// 005767a1  dd01                 fld qword ptr [ecx]
// 005767a3  dd1db0c8a300         fstp qword ptr [0xa3c8b0]
// 005767a9  a801                 test al, 1
// 005767ab  7510                 jne 0x5767bd
// 005767ad  83c801               or eax, 1
// 005767b0  a3b8c8a300           mov dword ptr [0xa3c8b8], eax
// 005767b5  dd01                 fld qword ptr [ecx]
// 005767b7  dd1db0c8a300         fstp qword ptr [0xa3c8b0]
// 005767bd  dd05b0c8a300         fld qword ptr [0xa3c8b0]
// 005767c3  8b442404             mov eax, dword ptr [esp + 4]
// 005767c7  d910                 fst dword ptr [eax]
// 005767c9  d95004               fst dword ptr [eax + 4]
// 005767cc  d95808               fstp dword ptr [eax + 8]
// 005767cf  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\Color3.cpp (function ??KColor3@G3D@@QBE?AV01@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Color3.cpp
