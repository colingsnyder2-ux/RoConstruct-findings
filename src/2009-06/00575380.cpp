// roc 2009-06 00575380  unit: G3D::BinaryInput  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00575380
//
// 00575380  d9ee                 fldz 
// 00575382  d9442404             fld dword ptr [esp + 4]
// 00575386  dde1                 fucom st(1)
// 00575388  dfe0                 fnstsw ax
// 0057538a  ddd9                 fstp st(1)
// 0057538c  f6c444               test ah, 0x44
// 0057538f  7b1d                 jnp 0x5753ae
// 00575391  d9e8                 fld1 
// 00575393  8bc1                 mov eax, ecx
// 00575395  def1                 fdivrp st(1)
// 00575397  d901                 fld dword ptr [ecx]
// 00575399  d8c9                 fmul st(1)
// 0057539b  d919                 fstp dword ptr [ecx]
// 0057539d  d94104               fld dword ptr [ecx + 4]
// 005753a0  d8c9                 fmul st(1)
// 005753a2  d95904               fstp dword ptr [ecx + 4]
// 005753a5  d84908               fmul dword ptr [ecx + 8]
// 005753a8  d95908               fstp dword ptr [ecx + 8]
// 005753ab  c20400               ret 4
// 005753ae  b801000000           mov eax, 1
// 005753b3  ddd8                 fstp st(0)
// 005753b5  8405b8c8a300         test byte ptr [0xa3c8b8], al
// 005753bb  7514                 jne 0x5753d1
// 005753bd  8b1544e58900         mov edx, dword ptr [0x89e544]
// 005753c3  0905b8c8a300         or dword ptr [0xa3c8b8], eax
// 005753c9  dd02                 fld qword ptr [edx]
// 005753cb  dd1db0c8a300         fstp qword ptr [0xa3c8b0]
// 005753d1  dd05b0c8a300         fld qword ptr [0xa3c8b0]
// 005753d7  d919                 fstp dword ptr [ecx]
// 005753d9  8405b8c8a300         test byte ptr [0xa3c8b8], al
// 005753df  7514                 jne 0x5753f5
// 005753e1  8b1544e58900         mov edx, dword ptr [0x89e544]
// 005753e7  0905b8c8a300         or dword ptr [0xa3c8b8], eax
// 005753ed  dd02                 fld qword ptr [edx]
// 005753ef  dd1db0c8a300         fstp qword ptr [0xa3c8b0]
// 005753f5  dd05b0c8a300         fld qword ptr [0xa3c8b0]
// 005753fb  d95904               fstp dword ptr [ecx + 4]
// 005753fe  8405b8c8a300         test byte ptr [0xa3c8b8], al
// 00575404  7513                 jne 0x575419
// 00575406  0905b8c8a300         or dword ptr [0xa3c8b8], eax
// 0057540c  a144e58900           mov eax, dword ptr [0x89e544]
// 00575411  dd00                 fld qword ptr [eax]
// 00575413  dd1db0c8a300         fstp qword ptr [0xa3c8b0]
// 00575419  dd05b0c8a300         fld qword ptr [0xa3c8b0]
// 0057541f  8bc1                 mov eax, ecx
// 00575421  d95908               fstp dword ptr [ecx + 8]
// 00575424  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\Color3.cpp (function ??_0Color3@G3D@@QAEAAV01@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Color3.cpp
