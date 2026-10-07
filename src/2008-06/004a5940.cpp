// roc 2008-06 004a5940  unit: RBX::VHint::?$FactoryProduct::Creator  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a5940
//
// 004a5940  d9ee                 fldz 
// 004a5942  dd442404             fld qword ptr [esp + 4]
// 004a5946  d8d1                 fcom st(1)
// 004a5948  dfe0                 fnstsw ax
// 004a594a  f6c405               test ah, 5
// 004a594d  7a04                 jp 0x4a5953
// 004a594f  b101                 mov cl, 1
// 004a5951  eb02                 jmp 0x4a5955
// 004a5953  32c9                 xor cl, cl
// 004a5955  d8d1                 fcom st(1)
// 004a5957  dfe0                 fnstsw ax
// 004a5959  ddd9                 fstp st(1)
// 004a595b  f6c401               test ah, 1
// 004a595e  7504                 jne 0x4a5964
// 004a5960  b001                 mov al, 1
// 004a5962  eb02                 jmp 0x4a5966
// 004a5964  32c0                 xor al, al
// 004a5966  84c9                 test cl, cl
// 004a5968  7504                 jne 0x4a596e
// 004a596a  84c0                 test al, al
// 004a596c  745e                 je 0x4a59cc
// 004a596e  8b0d20f09600         mov ecx, dword ptr [0x96f020]
// 004a5974  8b15ac248000         mov edx, dword ptr [0x8024ac]
// 004a597a  f6c101               test cl, 1
// 004a597d  7513                 jne 0x4a5992
// 004a597f  83c901               or ecx, 1
// 004a5982  890d20f09600         mov dword ptr [0x96f020], ecx
// 004a5988  dd02                 fld qword ptr [edx]
// 004a598a  dd1518f09600         fst qword ptr [0x96f018]
// 004a5990  eb06                 jmp 0x4a5998
// 004a5992  dd0518f09600         fld qword ptr [0x96f018]
// 004a5998  d8d1                 fcom st(1)
// 004a599a  dfe0                 fnstsw ax
// 004a599c  f6c441               test ah, 0x41
// 004a599f  7529                 jne 0x4a59ca
// 004a59a1  f6c101               test cl, 1
// 004a59a4  7513                 jne 0x4a59b9
// 004a59a6  83c901               or ecx, 1
// 004a59a9  ddd8                 fstp st(0)
// 004a59ab  890d20f09600         mov dword ptr [0x96f020], ecx
// 004a59b1  dd02                 fld qword ptr [edx]
// 004a59b3  dd1518f09600         fst qword ptr [0x96f018]
// 004a59b9  d9e0                 fchs 
// 004a59bb  ded9                 fcompp 
// 004a59bd  dfe0                 fnstsw ax
// 004a59bf  f6c405               test ah, 5
// 004a59c2  7a0a                 jp 0x4a59ce
// 004a59c4  b801000000           mov eax, 1
// 004a59c9  c3                   ret 
// 004a59ca  ddd9                 fstp st(1)
// 004a59cc  ddd8                 fstp st(0)
// 004a59ce  33c0                 xor eax, eax
// 004a59d0  c3                   ret 
// library g3d-6.09/G3Dcpp\ConvexPolyhedron.cpp (function ?isFinite@G3D@@YA_NN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/ConvexPolyhedron.cpp
