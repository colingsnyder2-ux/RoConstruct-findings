// roc 2008-06 005ddc20  unit: RBX::Message  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ddc20
//
// 005ddc20  d9ee                 fldz 
// 005ddc22  56                   push esi
// 005ddc23  d9e8                 fld1 
// 005ddc25  8b742408             mov esi, dword ptr [esp + 8]
// 005ddc29  d905b8c38100         fld dword ptr [0x81c3b8]
// 005ddc2f  57                   push edi
// 005ddc30  33ff                 xor edi, edi
// 005ddc32  33c9                 xor ecx, ecx
// 005ddc34  8bd6                 mov edx, esi
// 005ddc36  d902                 fld dword ptr [edx]
// 005ddc38  d9c3                 fld st(3)
// 005ddc3a  dde9                 fucomp st(1)
// 005ddc3c  dfe0                 fnstsw ax
// 005ddc3e  f6c444               test ah, 0x44
// 005ddc41  7b21                 jnp 0x5ddc64
// 005ddc43  d9c2                 fld st(2)
// 005ddc45  dde9                 fucomp st(1)
// 005ddc47  dfe0                 fnstsw ax
// 005ddc49  f6c444               test ah, 0x44
// 005ddc4c  7b16                 jnp 0x5ddc64
// 005ddc4e  d9c1                 fld st(1)
// 005ddc50  dae9                 fucompp 
// 005ddc52  dfe0                 fnstsw ax
// 005ddc54  f6c444               test ah, 0x44
// 005ddc57  7b0d                 jnp 0x5ddc66
// 005ddc59  ddda                 fstp st(2)
// 005ddc5b  5f                   pop edi
// 005ddc5c  ddd8                 fstp st(0)
// 005ddc5e  32c0                 xor al, al
// 005ddc60  ddd8                 fstp st(0)
// 005ddc62  5e                   pop esi
// 005ddc63  c3                   ret 
// 005ddc64  ddd8                 fstp st(0)
// 005ddc66  41                   inc ecx
// 005ddc67  83c204               add edx, 4
// 005ddc6a  83f903               cmp ecx, 3
// 005ddc6d  7cc7                 jl 0x5ddc36
// 005ddc6f  47                   inc edi
// 005ddc70  83c60c               add esi, 0xc
// 005ddc73  83ff03               cmp edi, 3
// 005ddc76  7cba                 jl 0x5ddc32
// 005ddc78  ddda                 fstp st(2)
// 005ddc7a  5f                   pop edi
// 005ddc7b  ddd8                 fstp st(0)
// 005ddc7d  b001                 mov al, 1
// 005ddc7f  ddd8                 fstp st(0)
// 005ddc81  5e                   pop esi
// 005ddc82  c3                   ret 
// library rbxgs-dll/util\Math.cpp (function ?isAxisAligned@Math@RBX@@SA_NABVMatrix3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll util/Math.cpp
