// roc 2008-06 00649af0  unit: RBX::Ball  size: 402 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00649af0
//
// 00649af0  8b442404             mov eax, dword ptr [esp + 4]
// 00649af4  d9ee                 fldz 
// 00649af6  d910                 fst dword ptr [eax]
// 00649af8  8b542408             mov edx, dword ptr [esp + 8]
// 00649afc  d95004               fst dword ptr [eax + 4]
// 00649aff  d95008               fst dword ptr [eax + 8]
// 00649b02  d9500c               fst dword ptr [eax + 0xc]
// 00649b05  d95010               fst dword ptr [eax + 0x10]
// 00649b08  d95014               fst dword ptr [eax + 0x14]
// 00649b0b  d95018               fst dword ptr [eax + 0x18]
// 00649b0e  d9501c               fst dword ptr [eax + 0x1c]
// 00649b11  d95020               fst dword ptr [eax + 0x20]
// 00649b14  d95024               fst dword ptr [eax + 0x24]
// 00649b17  d95028               fst dword ptr [eax + 0x28]
// 00649b1a  d9582c               fstp dword ptr [eax + 0x2c]
// 00649b1d  d901                 fld dword ptr [ecx]
// 00649b1f  d86224               fsub dword ptr [edx + 0x24]
// 00649b22  d94104               fld dword ptr [ecx + 4]
// 00649b25  d86228               fsub dword ptr [edx + 0x28]
// 00649b28  d94108               fld dword ptr [ecx + 8]
// 00649b2b  d8622c               fsub dword ptr [edx + 0x2c]
// 00649b2e  d94218               fld dword ptr [edx + 0x18]
// 00649b31  d8c9                 fmul st(1)
// 00649b33  d9420c               fld dword ptr [edx + 0xc]
// 00649b36  d8cb                 fmul st(3)
// 00649b38  dec1                 faddp st(1)
// 00649b3a  d902                 fld dword ptr [edx]
// 00649b3c  d8cc                 fmul st(4)
// 00649b3e  dec1                 faddp st(1)
// 00649b40  d9421c               fld dword ptr [edx + 0x1c]
// 00649b43  d8ca                 fmul st(2)
// 00649b45  d94210               fld dword ptr [edx + 0x10]
// 00649b48  d8cc                 fmul st(4)
// 00649b4a  dec1                 faddp st(1)
// 00649b4c  d9c4                 fld st(4)
// 00649b4e  d84a04               fmul dword ptr [edx + 4]
// 00649b51  dec1                 faddp st(1)
// 00649b53  d94208               fld dword ptr [edx + 8]
// 00649b56  decd                 fmulp st(5)
// 00649b58  d94220               fld dword ptr [edx + 0x20]
// 00649b5b  decb                 fmulp st(3)
// 00649b5d  d9cc                 fxch st(4)
// 00649b5f  dec2                 faddp st(2)
// 00649b61  d94214               fld dword ptr [edx + 0x14]
// 00649b64  decb                 fmulp st(3)
// 00649b66  d9c9                 fxch st(1)
// 00649b68  dec2                 faddp st(2)
// 00649b6a  d918                 fstp dword ptr [eax]
// 00649b6c  d9c9                 fxch st(1)
// 00649b6e  d95804               fstp dword ptr [eax + 4]
// 00649b71  d95808               fstp dword ptr [eax + 8]
// 00649b74  d9410c               fld dword ptr [ecx + 0xc]
// 00649b77  d86224               fsub dword ptr [edx + 0x24]
// 00649b7a  d94110               fld dword ptr [ecx + 0x10]
// 00649b7d  d86228               fsub dword ptr [edx + 0x28]
// 00649b80  d94114               fld dword ptr [ecx + 0x14]
// 00649b83  d8622c               fsub dword ptr [edx + 0x2c]
// 00649b86  d94218               fld dword ptr [edx + 0x18]
// 00649b89  d8c9                 fmul st(1)
// 00649b8b  d9420c               fld dword ptr [edx + 0xc]
// 00649b8e  d8cb                 fmul st(3)
// 00649b90  dec1                 faddp st(1)
// 00649b92  d902                 fld dword ptr [edx]
// 00649b94  d8cc                 fmul st(4)
// 00649b96  dec1                 faddp st(1)
// 00649b98  d9421c               fld dword ptr [edx + 0x1c]
// 00649b9b  d8ca                 fmul st(2)
// 00649b9d  d94210               fld dword ptr [edx + 0x10]
// 00649ba0  d8cc                 fmul st(4)
// 00649ba2  dec1                 faddp st(1)
// 00649ba4  d9c4                 fld st(4)
// 00649ba6  d84a04               fmul dword ptr [edx + 4]
// 00649ba9  dec1                 faddp st(1)
// 00649bab  d94208               fld dword ptr [edx + 8]
// 00649bae  decd                 fmulp st(5)
// 00649bb0  d94220               fld dword ptr [edx + 0x20]
// 00649bb3  decb                 fmulp st(3)
// 00649bb5  d9cc                 fxch st(4)
// 00649bb7  dec2                 faddp st(2)
// 00649bb9  d94214               fld dword ptr [edx + 0x14]
// 00649bbc  decb                 fmulp st(3)
// 00649bbe  d9c9                 fxch st(1)
// 00649bc0  dec2                 faddp st(2)
// 00649bc2  d9580c               fstp dword ptr [eax + 0xc]
// 00649bc5  d9c9                 fxch st(1)
// 00649bc7  d95810               fstp dword ptr [eax + 0x10]
// 00649bca  d95814               fstp dword ptr [eax + 0x14]
// 00649bcd  d94118               fld dword ptr [ecx + 0x18]
// 00649bd0  d86224               fsub dword ptr [edx + 0x24]
// 00649bd3  d9411c               fld dword ptr [ecx + 0x1c]
// 00649bd6  d86228               fsub dword ptr [edx + 0x28]
// 00649bd9  d94120               fld dword ptr [ecx + 0x20]
// 00649bdc  d8622c               fsub dword ptr [edx + 0x2c]
// 00649bdf  d94218               fld dword ptr [edx + 0x18]
// 00649be2  d8c9                 fmul st(1)
// 00649be4  d9420c               fld dword ptr [edx + 0xc]
// 00649be7  d8cb                 fmul st(3)
// 00649be9  dec1                 faddp st(1)
// 00649beb  d902                 fld dword ptr [edx]
// 00649bed  d8cc                 fmul st(4)
// 00649bef  dec1                 faddp st(1)
// 00649bf1  d9421c               fld dword ptr [edx + 0x1c]
// 00649bf4  d8ca                 fmul st(2)
// 00649bf6  d94210               fld dword ptr [edx + 0x10]
// 00649bf9  d8cc                 fmul st(4)
// 00649bfb  dec1                 faddp st(1)
// 00649bfd  d9c4                 fld st(4)
// 00649bff  d84a04               fmul dword ptr [edx + 4]
// 00649c02  dec1                 faddp st(1)
// 00649c04  d94208               fld dword ptr [edx + 8]
// 00649c07  decd                 fmulp st(5)
// 00649c09  d94220               fld dword ptr [edx + 0x20]
// 00649c0c  decb                 fmulp st(3)
// 00649c0e  d9cc                 fxch st(4)
// 00649c10  dec2                 faddp st(2)
// 00649c12  d94214               fld dword ptr [edx + 0x14]
// 00649c15  decb                 fmulp st(3)
// 00649c17  d9c9                 fxch st(1)
// 00649c19  dec2                 faddp st(2)
// 00649c1b  d95818               fstp dword ptr [eax + 0x18]
// 00649c1e  d9c9                 fxch st(1)
// 00649c20  d9581c               fstp dword ptr [eax + 0x1c]
// 00649c23  d95820               fstp dword ptr [eax + 0x20]
// 00649c26  d94124               fld dword ptr [ecx + 0x24]
// 00649c29  d86224               fsub dword ptr [edx + 0x24]
// 00649c2c  d94128               fld dword ptr [ecx + 0x28]
// 00649c2f  d86228               fsub dword ptr [edx + 0x28]
// 00649c32  d9412c               fld dword ptr [ecx + 0x2c]
// 00649c35  d8622c               fsub dword ptr [edx + 0x2c]
// 00649c38  d94218               fld dword ptr [edx + 0x18]
// 00649c3b  d8c9                 fmul st(1)
// 00649c3d  d9420c               fld dword ptr [edx + 0xc]
// 00649c40  d8cb                 fmul st(3)
// 00649c42  dec1                 faddp st(1)
// 00649c44  d902                 fld dword ptr [edx]
// 00649c46  d8cc                 fmul st(4)
// 00649c48  dec1                 faddp st(1)
// 00649c4a  d9421c               fld dword ptr [edx + 0x1c]
// 00649c4d  d8ca                 fmul st(2)
// 00649c4f  d94210               fld dword ptr [edx + 0x10]
// 00649c52  d8cc                 fmul st(4)
// 00649c54  dec1                 faddp st(1)
// 00649c56  d9c4                 fld st(4)
// 00649c58  d84a04               fmul dword ptr [edx + 4]
// 00649c5b  dec1                 faddp st(1)
// 00649c5d  d94208               fld dword ptr [edx + 8]
// 00649c60  decd                 fmulp st(5)
// 00649c62  d94220               fld dword ptr [edx + 0x20]
// 00649c65  decb                 fmulp st(3)
// 00649c67  d9cc                 fxch st(4)
// 00649c69  dec2                 faddp st(2)
// 00649c6b  d94214               fld dword ptr [edx + 0x14]
// 00649c6e  decb                 fmulp st(3)
// 00649c70  d9c9                 fxch st(1)
// 00649c72  dec2                 faddp st(2)
// 00649c74  d95824               fstp dword ptr [eax + 0x24]
// 00649c77  d9c9                 fxch st(1)
// 00649c79  d95828               fstp dword ptr [eax + 0x28]
// 00649c7c  d9582c               fstp dword ptr [eax + 0x2c]
// 00649c7f  c20800               ret 8
// library rbxgs-dll/util\Face.cpp (function ?toObjectSpace@Face@RBX@@QBE?AV12@ABVCoordinateFrame@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll util/Face.cpp
