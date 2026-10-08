// from server: 100% by auto
// roc 2007-08 00523fc0  unit: G3D::Line  size: 315 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00523fc0
//
// 00523fc0  56                   push esi
// 00523fc1  8bf1                 mov esi, ecx
// 00523fc3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00523fc7  d94110               fld dword ptr [ecx + 0x10]
// 00523fca  d901                 fld dword ptr [ecx]
// 00523fcc  ded9                 fcompp 
// 00523fce  dfe0                 fnstsw ax
// 00523fd0  f6c405               test ah, 5
// 00523fd3  7a07                 jp 0x523fdc
// 00523fd5  ba01000000           mov edx, 1
// 00523fda  eb02                 jmp 0x523fde
// 00523fdc  33d2                 xor edx, edx
// 00523fde  d94120               fld dword ptr [ecx + 0x20]
// 00523fe1  8bc2                 mov eax, edx
// 00523fe3  c1e004               shl eax, 4
// 00523fe6  d90408               fld dword ptr [eax + ecx]
// 00523fe9  ded9                 fcompp 
// 00523feb  dfe0                 fnstsw ax
// 00523fed  f6c405               test ah, 5
// 00523ff0  7a05                 jp 0x523ff7
// 00523ff2  ba02000000           mov edx, 2
// 00523ff7  8b0495a80e7a00       mov eax, dword ptr [edx*4 + 0x7a0ea8]
// 00523ffe  53                   push ebx
// 00523fff  55                   push ebp
// 00524000  57                   push edi
// 00524001  8b3c85a80e7a00       mov edi, dword ptr [eax*4 + 0x7a0ea8]
// 00524008  8bdf                 mov ebx, edi
// 0052400a  c1e304               shl ebx, 4
// 0052400d  d9040b               fld dword ptr [ebx + ecx]
// 00524010  8bd8                 mov ebx, eax
// 00524012  c1e304               shl ebx, 4
// 00524015  d8040b               fadd dword ptr [ebx + ecx]
// 00524018  8bda                 mov ebx, edx
// 0052401a  c1e304               shl ebx, 4
// 0052401d  d8240b               fsub dword ptr [ebx + ecx]
// 00524020  8d1c40               lea ebx, [eax + eax*2]
// 00524023  8d2c3b               lea ebp, [ebx + edi]
// 00524026  03da                 add ebx, edx
// 00524028  dc2598317900         fsub qword ptr [0x793198]
// 0052402e  d91c96               fstp dword ptr [esi + edx*4]
// 00524031  d904a9               fld dword ptr [ecx + ebp*4]
// 00524034  8d2c7f               lea ebp, [edi + edi*2]
// 00524037  03e8                 add ebp, eax
// 00524039  d824a9               fsub dword ptr [ecx + ebp*4]
// 0052403c  8d2c52               lea ebp, [edx + edx*2]
// 0052403f  03e8                 add ebp, eax
// 00524041  d95e0c               fstp dword ptr [esi + 0xc]
// 00524044  d904a9               fld dword ptr [ecx + ebp*4]
// 00524047  d80499               fadd dword ptr [ecx + ebx*4]
// 0052404a  d9e0                 fchs 
// 0052404c  d91c86               fstp dword ptr [esi + eax*4]
// 0052404f  8d0452               lea eax, [edx + edx*2]
// 00524052  03c7                 add eax, edi
// 00524054  d90481               fld dword ptr [ecx + eax*4]
// 00524057  8d047f               lea eax, [edi + edi*2]
// 0052405a  03c2                 add eax, edx
// 0052405c  d80481               fadd dword ptr [ecx + eax*4]
// 0052405f  d9e0                 fchs 
// 00524061  d91cbe               fstp dword ptr [esi + edi*4]
// 00524064  d94604               fld dword ptr [esi + 4]
// 00524067  d906                 fld dword ptr [esi]
// 00524069  d94608               fld dword ptr [esi + 8]
// 0052406c  d9460c               fld dword ptr [esi + 0xc]
// 0052406f  d9c2                 fld st(2)
// 00524071  decb                 fmulp st(3)
// 00524073  d9c3                 fld st(3)
// 00524075  decc                 fmulp st(4)
// 00524077  d9ca                 fxch st(2)
// 00524079  dec3                 faddp st(3)
// 0052407b  dcc8                 fmul st(0), st(0)
// 0052407d  dec2                 faddp st(2)
// 0052407f  dcc8                 fmul st(0), st(0)
// 00524081  dec1                 faddp st(1)
// 00524083  d95c2414             fstp dword ptr [esp + 0x14]
// 00524087  d9442414             fld dword ptr [esp + 0x14]
// 0052408b  e87ccd1000           call 0x630e0c
// 00524090  d95c2414             fstp dword ptr [esp + 0x14]
// 00524094  d9442414             fld dword ptr [esp + 0x14]
// 00524098  5f                   pop edi
// 00524099  d95c2410             fstp dword ptr [esp + 0x10]
// 0052409d  5d                   pop ebp
// 0052409e  d90598447a00         fld dword ptr [0x7a4498]
// 005240a4  5b                   pop ebx
// 005240a5  d9442408             fld dword ptr [esp + 8]
// 005240a9  d8d1                 fcom st(1)
// 005240ab  dfe0                 fnstsw ax
// 005240ad  ddd9                 fstp st(1)
// 005240af  f6c441               test ah, 0x41
// 005240b2  8bc6                 mov eax, esi
// 005240b4  7530                 jne 0x5240e6
// 005240b6  d9e8                 fld1 
// 005240b8  def1                 fdivrp st(1)
// 005240ba  d95c2408             fstp dword ptr [esp + 8]
// 005240be  d906                 fld dword ptr [esi]
// 005240c0  d9442408             fld dword ptr [esp + 8]
// 005240c4  d9c0                 fld st(0)
// 005240c6  deca                 fmulp st(2)
// 005240c8  d9c9                 fxch st(1)
// 005240ca  d91e                 fstp dword ptr [esi]
// 005240cc  d94604               fld dword ptr [esi + 4]
// 005240cf  d8c9                 fmul st(1)
// 005240d1  d95e04               fstp dword ptr [esi + 4]
// 005240d4  d9c0                 fld st(0)
// 005240d6  d84e08               fmul dword ptr [esi + 8]
// 005240d9  d95e08               fstp dword ptr [esi + 8]
// 005240dc  d84e0c               fmul dword ptr [esi + 0xc]
// 005240df  d95e0c               fstp dword ptr [esi + 0xc]
// 005240e2  5e                   pop esi
// 005240e3  c20400               ret 4
// 005240e6  ddd8                 fstp st(0)
// 005240e8  d9ee                 fldz 
// 005240ea  d916                 fst dword ptr [esi]
// 005240ec  d95604               fst dword ptr [esi + 4]
// 005240ef  d95e08               fstp dword ptr [esi + 8]
// 005240f2  d9e8                 fld1 
// 005240f4  d95e0c               fstp dword ptr [esi + 0xc]
// 005240f7  5e                   pop esi
// 005240f8  c20400               ret 4
// library g3d-6.09/G3Dcpp\Quat.cpp (function ??0Quat@G3D@@QAE@ABVMatrix3@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Quat.cpp
