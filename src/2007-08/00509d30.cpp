// from server: 100% by auto
// roc 2007-08 00509d30  unit: G3D::GCamera  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00509d30
//
// 00509d30  d9e8                 fld1 
// 00509d32  56                   push esi
// 00509d33  8bf1                 mov esi, ecx
// 00509d35  d85e08               fcomp dword ptr [esi + 8]
// 00509d38  dfe0                 fnstsw ax
// 00509d3a  f6c441               test ah, 0x41
// 00509d3d  0f85a2000000         jne 0x509de5
// 00509d43  d9056c647900         fld dword ptr [0x79646c]
// 00509d49  d85e08               fcomp dword ptr [esi + 8]
// 00509d4c  dfe0                 fnstsw ax
// 00509d4e  f6c405               test ah, 5
// 00509d51  7a65                 jp 0x509db8
// 00509d53  d94614               fld dword ptr [esi + 0x14]
// 00509d56  d9e0                 fchs 
// 00509d58  d94620               fld dword ptr [esi + 0x20]
// 00509d5b  e8f8751200           call 0x631358
// 00509d60  8b442408             mov eax, dword ptr [esp + 8]
// 00509d64  d918                 fstp dword ptr [eax]
// 00509d66  d94608               fld dword ptr [esi + 8]
// 00509d69  dc1590657900         fcom qword ptr [0x796590]
// 00509d6f  dfe0                 fnstsw ax
// 00509d71  f6c441               test ah, 0x41
// 00509d74  751c                 jne 0x509d92
// 00509d76  d9e8                 fld1 
// 00509d78  d8d9                 fcomp st(1)
// 00509d7a  dfe0                 fnstsw ax
// 00509d7c  f6c441               test ah, 0x41
// 00509d7f  7507                 jne 0x509d88
// 00509d81  e8cc751200           call 0x631352
// 00509d86  eb12                 jmp 0x509d9a
// 00509d88  ddd8                 fstp st(0)
// 00509d8a  dd05700b7a00         fld qword ptr [0x7a0b70]
// 00509d90  eb08                 jmp 0x509d9a
// 00509d92  ddd8                 fstp st(0)
// 00509d94  dd05680b7a00         fld qword ptr [0x7a0b68]
// 00509d9a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00509d9e  d919                 fstp dword ptr [ecx]
// 00509da0  d94604               fld dword ptr [esi + 4]
// 00509da3  d9e0                 fchs 
// 00509da5  d906                 fld dword ptr [esi]
// 00509da7  e8ac751200           call 0x631358
// 00509dac  8b542410             mov edx, dword ptr [esp + 0x10]
// 00509db0  d91a                 fstp dword ptr [edx]
// 00509db2  b001                 mov al, 1
// 00509db4  5e                   pop esi
// 00509db5  c20c00               ret 0xc
// 00509db8  d9460c               fld dword ptr [esi + 0xc]
// 00509dbb  d94610               fld dword ptr [esi + 0x10]
// 00509dbe  e895751200           call 0x631358
// 00509dc3  d9e0                 fchs 
// 00509dc5  8b442408             mov eax, dword ptr [esp + 8]
// 00509dc9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00509dcd  d918                 fstp dword ptr [eax]
// 00509dcf  d905287b7900         fld dword ptr [0x797b28]
// 00509dd5  8b542410             mov edx, dword ptr [esp + 0x10]
// 00509dd9  d919                 fstp dword ptr [ecx]
// 00509ddb  32c0                 xor al, al
// 00509ddd  d9ee                 fldz 
// 00509ddf  5e                   pop esi
// 00509de0  d91a                 fstp dword ptr [edx]
// 00509de2  c20c00               ret 0xc
// 00509de5  d9460c               fld dword ptr [esi + 0xc]
// 00509de8  d94610               fld dword ptr [esi + 0x10]
// 00509deb  e868751200           call 0x631358
// 00509df0  8b442408             mov eax, dword ptr [esp + 8]
// 00509df4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00509df8  d918                 fstp dword ptr [eax]
// 00509dfa  d9052c7b7900         fld dword ptr [0x797b2c]
// 00509e00  8b542410             mov edx, dword ptr [esp + 0x10]
// 00509e04  d919                 fstp dword ptr [ecx]
// 00509e06  32c0                 xor al, al
// 00509e08  d9ee                 fldz 
// 00509e0a  5e                   pop esi
// 00509e0b  d91a                 fstp dword ptr [edx]
// 00509e0d  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ?toEulerAnglesXYZ@Matrix3@G3D@@QBE_NAAM00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
