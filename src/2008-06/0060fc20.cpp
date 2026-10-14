// roc 2008-06 0060fc20  unit: RBX::BlockBlockContact  size: 534 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060fc20
//
// 0060fc20  a194b89700           mov eax, dword ptr [0x97b894]
// 0060fc25  8b150c258000         mov edx, dword ptr [0x80250c]
// 0060fc2b  83ec24               sub esp, 0x24
// 0060fc2e  a801                 test al, 1
// 0060fc30  7512                 jne 0x60fc44
// 0060fc32  83c801               or eax, 1
// 0060fc35  a394b89700           mov dword ptr [0x97b894], eax
// 0060fc3a  d902                 fld dword ptr [edx]
// 0060fc3c  d91590b89700         fst dword ptr [0x97b890]
// 0060fc42  eb06                 jmp 0x60fc4a
// 0060fc44  d90590b89700         fld dword ptr [0x97b890]
// 0060fc4a  a801                 test al, 1
// 0060fc4c  7528                 jne 0x60fc76
// 0060fc4e  83c801               or eax, 1
// 0060fc51  ddd8                 fstp st(0)
// 0060fc53  a394b89700           mov dword ptr [0x97b894], eax
// 0060fc58  d902                 fld dword ptr [edx]
// 0060fc5a  d91590b89700         fst dword ptr [0x97b890]
// 0060fc60  a801                 test al, 1
// 0060fc62  7512                 jne 0x60fc76
// 0060fc64  83c801               or eax, 1
// 0060fc67  ddd8                 fstp st(0)
// 0060fc69  a394b89700           mov dword ptr [0x97b894], eax
// 0060fc6e  d902                 fld dword ptr [edx]
// 0060fc70  d91590b89700         fst dword ptr [0x97b890]
// 0060fc76  d954240c             fst dword ptr [esp + 0xc]
// 0060fc7a  d9542410             fst dword ptr [esp + 0x10]
// 0060fc7e  d9c0                 fld st(0)
// 0060fc80  d9542414             fst dword ptr [esp + 0x14]
// 0060fc84  a801                 test al, 1
// 0060fc86  7544                 jne 0x60fccc
// 0060fc88  83c801               or eax, 1
// 0060fc8b  ddd9                 fstp st(1)
// 0060fc8d  a394b89700           mov dword ptr [0x97b894], eax
// 0060fc92  d902                 fld dword ptr [edx]
// 0060fc94  d91590b89700         fst dword ptr [0x97b890]
// 0060fc9a  d9c9                 fxch st(1)
// 0060fc9c  a801                 test al, 1
// 0060fc9e  752c                 jne 0x60fccc
// 0060fca0  83c801               or eax, 1
// 0060fca3  ddd9                 fstp st(1)
// 0060fca5  a394b89700           mov dword ptr [0x97b894], eax
// 0060fcaa  d902                 fld dword ptr [edx]
// 0060fcac  d91590b89700         fst dword ptr [0x97b890]
// 0060fcb2  d9c9                 fxch st(1)
// 0060fcb4  a801                 test al, 1
// 0060fcb6  7514                 jne 0x60fccc
// 0060fcb8  83c801               or eax, 1
// 0060fcbb  ddd9                 fstp st(1)
// 0060fcbd  a394b89700           mov dword ptr [0x97b894], eax
// 0060fcc2  d902                 fld dword ptr [edx]
// 0060fcc4  d91590b89700         fst dword ptr [0x97b890]
// 0060fcca  d9c9                 fxch st(1)
// 0060fccc  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0060fcd0  d9c9                 fxch st(1)
// 0060fcd2  d9e0                 fchs 
// 0060fcd4  56                   push esi
// 0060fcd5  d9542404             fst dword ptr [esp + 4]
// 0060fcd9  33f6                 xor esi, esi
// 0060fcdb  d9542408             fst dword ptr [esp + 8]
// 0060fcdf  d954240c             fst dword ptr [esp + 0xc]
// 0060fce3  8bc6                 mov eax, esi
// 0060fce5  c1e802               shr eax, 2
// 0060fce8  8d0440               lea eax, [eax + eax*2]
// 0060fceb  d90481               fld dword ptr [ecx + eax*4]
// 0060fcee  8bc6                 mov eax, esi
// 0060fcf0  d1e8                 shr eax, 1
// 0060fcf2  2501000080           and eax, 0x80000001
// 0060fcf7  7905                 jns 0x60fcfe
// 0060fcf9  48                   dec eax
// 0060fcfa  83c8fe               or eax, 0xfffffffe
// 0060fcfd  40                   inc eax
// 0060fcfe  8d0440               lea eax, [eax + eax*2]
// 0060fd01  d9448104             fld dword ptr [ecx + eax*4 + 4]
// 0060fd05  8bc6                 mov eax, esi
// 0060fd07  83e001               and eax, 1
// 0060fd0a  8d0440               lea eax, [eax + eax*2]
// 0060fd0d  d9448108             fld dword ptr [ecx + eax*4 + 8]
// 0060fd11  d94204               fld dword ptr [edx + 4]
// 0060fd14  d8ca                 fmul st(2)
// 0060fd16  d94208               fld dword ptr [edx + 8]
// 0060fd19  d8ca                 fmul st(2)
// 0060fd1b  dec1                 faddp st(1)
// 0060fd1d  d902                 fld dword ptr [edx]
// 0060fd1f  d8cc                 fmul st(4)
// 0060fd21  dec1                 faddp st(1)
// 0060fd23  d84224               fadd dword ptr [edx + 0x24]
// 0060fd26  d954241c             fst dword ptr [esp + 0x1c]
// 0060fd2a  d9420c               fld dword ptr [edx + 0xc]
// 0060fd2d  d8cc                 fmul st(4)
// 0060fd2f  d94210               fld dword ptr [edx + 0x10]
// 0060fd32  d8cc                 fmul st(4)
// 0060fd34  dec1                 faddp st(1)
// 0060fd36  d94214               fld dword ptr [edx + 0x14]
// 0060fd39  d8cb                 fmul st(3)
// 0060fd3b  dec1                 faddp st(1)
// 0060fd3d  d84228               fadd dword ptr [edx + 0x28]
// 0060fd40  d9542420             fst dword ptr [esp + 0x20]
// 0060fd44  d94218               fld dword ptr [edx + 0x18]
// 0060fd47  decd                 fmulp st(5)
// 0060fd49  d9cb                 fxch st(3)
// 0060fd4b  d84a1c               fmul dword ptr [edx + 0x1c]
// 0060fd4e  dec4                 faddp st(4)
// 0060fd50  d9c9                 fxch st(1)
// 0060fd52  d84a20               fmul dword ptr [edx + 0x20]
// 0060fd55  dec3                 faddp st(3)
// 0060fd57  d9ca                 fxch st(2)
// 0060fd59  d8422c               fadd dword ptr [edx + 0x2c]
// 0060fd5c  d9542424             fst dword ptr [esp + 0x24]
// 0060fd60  d8d4                 fcom st(4)
// 0060fd62  dfe0                 fnstsw ax
// 0060fd64  dddc                 fstp st(4)
// 0060fd66  f6c441               test ah, 0x41
// 0060fd69  8d442418             lea eax, [esp + 0x18]
// 0060fd6d  7404                 je 0x60fd73
// 0060fd6f  8d442424             lea eax, [esp + 0x24]
// 0060fd73  d900                 fld dword ptr [eax]
// 0060fd75  d9c9                 fxch st(1)
// 0060fd77  d8542414             fcom dword ptr [esp + 0x14]
// 0060fd7b  dfe0                 fnstsw ax
// 0060fd7d  f6c441               test ah, 0x41
// 0060fd80  8d442414             lea eax, [esp + 0x14]
// 0060fd84  7404                 je 0x60fd8a
// 0060fd86  8d442420             lea eax, [esp + 0x20]
// 0060fd8a  d900                 fld dword ptr [eax]
// 0060fd8c  d9cb                 fxch st(3)
// 0060fd8e  d8542410             fcom dword ptr [esp + 0x10]
// 0060fd92  dfe0                 fnstsw ax
// 0060fd94  f6c441               test ah, 0x41
// 0060fd97  8d442410             lea eax, [esp + 0x10]
// 0060fd9b  7404                 je 0x60fda1
// 0060fd9d  8d44241c             lea eax, [esp + 0x1c]
// 0060fda1  d900                 fld dword ptr [eax]
// 0060fda3  d95c2410             fstp dword ptr [esp + 0x10]
// 0060fda7  d9cb                 fxch st(3)
// 0060fda9  d95c2414             fstp dword ptr [esp + 0x14]
// 0060fdad  d9c9                 fxch st(1)
// 0060fdaf  d9542418             fst dword ptr [esp + 0x18]
// 0060fdb3  d9cc                 fxch st(4)
// 0060fdb5  d8db                 fcomp st(3)
// 0060fdb7  dfe0                 fnstsw ax
// 0060fdb9  ddda                 fstp st(2)
// 0060fdbb  f6c405               test ah, 5
// 0060fdbe  8d44240c             lea eax, [esp + 0xc]
// 0060fdc2  7b04                 jnp 0x60fdc8
// 0060fdc4  8d442424             lea eax, [esp + 0x24]
// 0060fdc8  d900                 fld dword ptr [eax]
// 0060fdca  d9442408             fld dword ptr [esp + 8]
// 0060fdce  d8db                 fcomp st(3)
// 0060fdd0  dfe0                 fnstsw ax
// 0060fdd2  ddda                 fstp st(2)
// 0060fdd4  f6c441               test ah, 0x41
// 0060fdd7  8d442408             lea eax, [esp + 8]
// 0060fddb  7404                 je 0x60fde1
// 0060fddd  8d442420             lea eax, [esp + 0x20]
// 0060fde1  d900                 fld dword ptr [eax]
// 0060fde3  d9442404             fld dword ptr [esp + 4]
// 0060fde7  d8da                 fcomp st(2)
// 0060fde9  dfe0                 fnstsw ax
// 0060fdeb  ddd9                 fstp st(1)
// 0060fded  f6c441               test ah, 0x41
// 0060fdf0  8d442404             lea eax, [esp + 4]
// 0060fdf4  7404                 je 0x60fdfa
// 0060fdf6  8d44241c             lea eax, [esp + 0x1c]
// 0060fdfa  d900                 fld dword ptr [eax]
// 0060fdfc  46                   inc esi
// 0060fdfd  83fe08               cmp esi, 8
// 0060fe00  d95c2404             fstp dword ptr [esp + 4]
// 0060fe04  d95c2408             fstp dword ptr [esp + 8]
// 0060fe08  d954240c             fst dword ptr [esp + 0xc]
// 0060fe0c  0f8cd1feffff         jl 0x60fce3
// 0060fe12  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0060fe16  ddd9                 fstp st(1)
// 0060fe18  8d4c2404             lea ecx, [esp + 4]
// 0060fe1c  ddd8                 fstp st(0)
// 0060fe1e  51                   push ecx
// 0060fe1f  8d542414             lea edx, [esp + 0x14]
// 0060fe23  52                   push edx
// 0060fe24  56                   push esi
// 0060fe25  e8b6faffff           call 0x60f8e0
// 0060fe2a  83c40c               add esp, 0xc
// 0060fe2d  8bc6                 mov eax, esi
// 0060fe2f  5e                   pop esi
// 0060fe30  83c424               add esp, 0x24
// 0060fe33  c20800               ret 8
// library openrbx-client/App\util\Extents.cpp (function ?toWorldSpace@Extents@RBX@@QAE?AV12@ABVCoordinateFrame@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client App/util/Extents.cpp
