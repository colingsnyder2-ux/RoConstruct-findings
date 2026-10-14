// roc 2008-06 005ca430  unit: RBX::AIController  size: 198 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ca430
//
// 005ca430  8b542404             mov edx, dword ptr [esp + 4]
// 005ca434  d902                 fld dword ptr [edx]
// 005ca436  d9e0                 fchs 
// 005ca438  d94208               fld dword ptr [edx + 8]
// 005ca43b  d9e0                 fchs 
// 005ca43d  d9f3                 fpatan 
// 005ca43f  d905f09f8300         fld dword ptr [0x839ff0]
// 005ca445  d8d9                 fcomp st(1)
// 005ca447  dfe0                 fnstsw ax
// 005ca449  d9ee                 fldz 
// 005ca44b  f6c405               test ah, 5
// 005ca44e  7a10                 jp 0x5ca460
// 005ca450  d905ec9f8300         fld dword ptr [0x839fec]
// 005ca456  d905c86f8200         fld dword ptr [0x826fc8]
// 005ca45c  d9c0                 fld st(0)
// 005ca45e  eb63                 jmp 0x5ca4c3
// 005ca460  d905e89f8300         fld dword ptr [0x839fe8]
// 005ca466  d8da                 fcomp st(2)
// 005ca468  dfe0                 fnstsw ax
// 005ca46a  f6c441               test ah, 0x41
// 005ca46d  7510                 jne 0x5ca47f
// 005ca46f  d905c86f8200         fld dword ptr [0x826fc8]
// 005ca475  d9c0                 fld st(0)
// 005ca477  d905ec9f8300         fld dword ptr [0x839fec]
// 005ca47d  eb3e                 jmp 0x5ca4bd
// 005ca47f  d9c9                 fxch st(1)
// 005ca481  dc15e09f8300         fcom qword ptr [0x839fe0]
// 005ca487  dfe0                 fnstsw ax
// 005ca489  f6c441               test ah, 0x41
// 005ca48c  7512                 jne 0x5ca4a0
// 005ca48e  d9c1                 fld st(1)
// 005ca490  d905c86f8200         fld dword ptr [0x826fc8]
// 005ca496  d9c0                 fld st(0)
// 005ca498  d9cb                 fxch st(3)
// 005ca49a  d9cc                 fxch st(4)
// 005ca49c  d9cb                 fxch st(3)
// 005ca49e  eb23                 jmp 0x5ca4c3
// 005ca4a0  dc15d89f8300         fcom qword ptr [0x839fd8]
// 005ca4a6  dfe0                 fnstsw ax
// 005ca4a8  d905c86f8200         fld dword ptr [0x826fc8]
// 005ca4ae  d9c0                 fld st(0)
// 005ca4b0  f6c405               test ah, 5
// 005ca4b3  7a35                 jp 0x5ca4ea
// 005ca4b5  d9c3                 fld st(3)
// 005ca4b7  d9cb                 fxch st(3)
// 005ca4b9  d9cc                 fxch st(4)
// 005ca4bb  d9cb                 fxch st(3)
// 005ca4bd  d9c9                 fxch st(1)
// 005ca4bf  d9ca                 fxch st(2)
// 005ca4c1  d9c9                 fxch st(1)
// 005ca4c3  d9ca                 fxch st(2)
// 005ca4c5  d95928               fstp dword ptr [ecx + 0x28]
// 005ca4c8  d9c9                 fxch st(1)
// 005ca4ca  d9592c               fstp dword ptr [ecx + 0x2c]
// 005ca4cd  d9ca                 fxch st(2)
// 005ca4cf  d80dd09f8300         fmul dword ptr [0x839fd0]
// 005ca4d5  d95930               fstp dword ptr [ecx + 0x30]
// 005ca4d8  d85208               fcom dword ptr [edx + 8]
// 005ca4db  dfe0                 fnstsw ax
// 005ca4dd  f6c441               test ah, 0x41
// 005ca4e0  750c                 jne 0x5ca4ee
// 005ca4e2  ddd8                 fstp st(0)
// 005ca4e4  d95934               fstp dword ptr [ecx + 0x34]
// 005ca4e7  c20400               ret 4
// 005ca4ea  d9c1                 fld st(1)
// 005ca4ec  ebc9                 jmp 0x5ca4b7
// 005ca4ee  ddd9                 fstp st(1)
// 005ca4f0  d95934               fstp dword ptr [ecx + 0x34]
// 005ca4f3  c20400               ret 4
// library rbxgs-dll/v8datamodel\UserController.cpp (function ?chaseTarget@AIController@RBX@@IAEXABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll v8datamodel/UserController.cpp
