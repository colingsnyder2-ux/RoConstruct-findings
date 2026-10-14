// roc 2009-06 0057c630  unit: G3D::TextInput::WrongSymbol  size: 650 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057c630
//
// 0057c630  83ec30               sub esp, 0x30
// 0057c633  d9442440             fld dword ptr [esp + 0x40]
// 0057c637  8b442434             mov eax, dword ptr [esp + 0x34]
// 0057c63b  d9c0                 fld st(0)
// 0057c63d  53                   push ebx
// 0057c63e  d8c9                 fmul st(1)
// 0057c640  56                   push esi
// 0057c641  d9442444             fld dword ptr [esp + 0x44]
// 0057c645  8bf1                 mov esi, ecx
// 0057c647  d9c0                 fld st(0)
// 0057c649  bb01000000           mov ebx, 1
// 0057c64e  d8c9                 fmul st(1)
// 0057c650  dec2                 faddp st(2)
// 0057c652  d9442440             fld dword ptr [esp + 0x40]
// 0057c656  d9c0                 fld st(0)
// 0057c658  d8c9                 fmul st(1)
// 0057c65a  dec3                 faddp st(3)
// 0057c65c  d9ca                 fxch st(2)
// 0057c65e  d9fa                 fsqrt 
// 0057c660  d9e8                 fld1 
// 0057c662  def1                 fdivrp st(1)
// 0057c664  dcca                 fmul st(2), st(0)
// 0057c666  d9ca                 fxch st(2)
// 0057c668  d9542414             fst dword ptr [esp + 0x14]
// 0057c66c  d9c9                 fxch st(1)
// 0057c66e  d8ca                 fmul st(2)
// 0057c670  d9cb                 fxch st(3)
// 0057c672  deca                 fmulp st(2)
// 0057c674  d9c9                 fxch st(1)
// 0057c676  d954241c             fst dword ptr [esp + 0x1c]
// 0057c67a  d9c2                 fld st(2)
// 0057c67c  d9c9                 fxch st(1)
// 0057c67e  d95c2448             fstp dword ptr [esp + 0x48]
// 0057c682  d900                 fld dword ptr [eax]
// 0057c684  d86624               fsub dword ptr [esi + 0x24]
// 0057c687  d94004               fld dword ptr [eax + 4]
// 0057c68a  d86628               fsub dword ptr [esi + 0x28]
// 0057c68d  d94008               fld dword ptr [eax + 8]
// 0057c690  d8662c               fsub dword ptr [esi + 0x2c]
// 0057c693  d9c0                 fld st(0)
// 0057c695  d8c9                 fmul st(1)
// 0057c697  d9c2                 fld st(2)
// 0057c699  d8cb                 fmul st(3)
// 0057c69b  dec1                 faddp st(1)
// 0057c69d  d9c3                 fld st(3)
// 0057c69f  d8cc                 fmul st(4)
// 0057c6a1  dec1                 faddp st(1)
// 0057c6a3  d9fa                 fsqrt 
// 0057c6a5  d9e8                 fld1 
// 0057c6a7  def1                 fdivrp st(1)
// 0057c6a9  d9c0                 fld st(0)
// 0057c6ab  decc                 fmulp st(4)
// 0057c6ad  d9cb                 fxch st(3)
// 0057c6af  d9542420             fst dword ptr [esp + 0x20]
// 0057c6b3  d9ca                 fxch st(2)
// 0057c6b5  d8cb                 fmul st(3)
// 0057c6b7  d9542424             fst dword ptr [esp + 0x24]
// 0057c6bb  d9c9                 fxch st(1)
// 0057c6bd  decb                 fmulp st(3)
// 0057c6bf  d9ca                 fxch st(2)
// 0057c6c1  d9542428             fst dword ptr [esp + 0x28]
// 0057c6c5  d944241c             fld dword ptr [esp + 0x1c]
// 0057c6c9  d8c9                 fmul st(1)
// 0057c6cb  d9c3                 fld st(3)
// 0057c6cd  decf                 fmulp st(7)
// 0057c6cf  dec6                 faddp st(6)
// 0057c6d1  d9c1                 fld st(1)
// 0057c6d3  d84c2414             fmul dword ptr [esp + 0x14]
// 0057c6d7  dec6                 faddp st(6)
// 0057c6d9  d9cd                 fxch st(5)
// 0057c6db  dc1d00998c00         fcomp qword ptr [0x8c9900]
// 0057c6e1  dfe0                 fnstsw ax
// 0057c6e3  f6c441               test ah, 0x41
// 0057c6e6  0f8599000000         jne 0x57c785
// 0057c6ec  dddb                 fstp st(3)
// 0057c6ee  ddd9                 fstp st(1)
// 0057c6f0  d9ee                 fldz 
// 0057c6f2  841d402aa400         test byte ptr [0xa42a40], bl
// 0057c6f8  751c                 jne 0x57c716
// 0057c6fa  d9e8                 fld1 
// 0057c6fc  091d402aa400         or dword ptr [0xa42a40], ebx
// 0057c702  d91d342aa400         fstp dword ptr [0xa42a34]
// 0057c708  d915382aa400         fst dword ptr [0xa42a38]
// 0057c70e  d91d3c2aa400         fstp dword ptr [0xa42a3c]
// 0057c714  eb02                 jmp 0x57c718
// 0057c716  ddd8                 fstp st(0)
// 0057c718  d905342aa400         fld dword ptr [0xa42a34]
// 0057c71e  d905382aa400         fld dword ptr [0xa42a38]
// 0057c724  d9053c2aa400         fld dword ptr [0xa42a3c]
// 0057c72a  d9c5                 fld st(5)
// 0057c72c  d8c9                 fmul st(1)
// 0057c72e  d9c4                 fld st(4)
// 0057c730  d8cb                 fmul st(3)
// 0057c732  dec1                 faddp st(1)
// 0057c734  d9c5                 fld st(5)
// 0057c736  d8cc                 fmul st(4)
// 0057c738  dec1                 faddp st(1)
// 0057c73a  dc1d00998c00         fcomp qword ptr [0x8c9900]
// 0057c740  dfe0                 fnstsw ax
// 0057c742  f6c441               test ah, 0x41
// 0057c745  754c                 jne 0x57c793
// 0057c747  ddda                 fstp st(2)
// 0057c749  ddd8                 fstp st(0)
// 0057c74b  ddd8                 fstp st(0)
// 0057c74d  841db01ca400         test byte ptr [0xa41cb0], bl
// 0057c753  751c                 jne 0x57c771
// 0057c755  d9ee                 fldz 
// 0057c757  091db01ca400         or dword ptr [0xa41cb0], ebx
// 0057c75d  d915a41ca400         fst dword ptr [0xa41ca4]
// 0057c763  d9e8                 fld1 
// 0057c765  d91da81ca400         fstp dword ptr [0xa41ca8]
// 0057c76b  d91dac1ca400         fstp dword ptr [0xa41cac]
// 0057c771  d905a41ca400         fld dword ptr [0xa41ca4]
// 0057c777  d905a81ca400         fld dword ptr [0xa41ca8]
// 0057c77d  d905ac1ca400         fld dword ptr [0xa41cac]
// 0057c783  eb0e                 jmp 0x57c793
// 0057c785  d9442448             fld dword ptr [esp + 0x48]
// 0057c789  d9c9                 fxch st(1)
// 0057c78b  d9cc                 fxch st(4)
// 0057c78d  d9ca                 fxch st(2)
// 0057c78f  d9cb                 fxch st(3)
// 0057c791  d9c9                 fxch st(1)
// 0057c793  d9c5                 fld st(5)
// 0057c795  51                   push ecx
// 0057c796  d8c9                 fmul st(1)
// 0057c798  8d4c2444             lea ecx, [esp + 0x44]
// 0057c79c  d9c4                 fld st(4)
// 0057c79e  d8cb                 fmul st(3)
// 0057c7a0  dec1                 faddp st(1)
// 0057c7a2  d9c5                 fld st(5)
// 0057c7a4  d8cc                 fmul st(4)
// 0057c7a6  dec1                 faddp st(1)
// 0057c7a8  dccd                 fmul st(5), st(0)
// 0057c7aa  dccc                 fmul st(4), st(0)
// 0057c7ac  dece                 fmulp st(6)
// 0057c7ae  d9ca                 fxch st(2)
// 0057c7b0  dee4                 fsubrp st(4)
// 0057c7b2  d9cb                 fxch st(3)
// 0057c7b4  d95c2444             fstp dword ptr [esp + 0x44]
// 0057c7b8  d9ca                 fxch st(2)
// 0057c7ba  dee1                 fsubrp st(1)
// 0057c7bc  d95c2448             fstp dword ptr [esp + 0x48]
// 0057c7c0  dee1                 fsubrp st(1)
// 0057c7c2  d95c244c             fstp dword ptr [esp + 0x4c]
// 0057c7c6  d90574a48c00         fld dword ptr [0x8ca474]
// 0057c7cc  d91c24               fstp dword ptr [esp]
// 0057c7cf  e85c8cffff           call 0x575430
// 0057c7d4  ddd8                 fstp st(0)
// 0057c7d6  51                   push ecx
// 0057c7d7  d9442424             fld dword ptr [esp + 0x24]
// 0057c7db  8d4c240c             lea ecx, [esp + 0xc]
// 0057c7df  d9e0                 fchs 
// 0057c7e1  d9542418             fst dword ptr [esp + 0x18]
// 0057c7e5  d9442428             fld dword ptr [esp + 0x28]
// 0057c7e9  d9e0                 fchs 
// 0057c7eb  d954241c             fst dword ptr [esp + 0x1c]
// 0057c7ef  d944242c             fld dword ptr [esp + 0x2c]
// 0057c7f3  d9e0                 fchs 
// 0057c7f5  d9542420             fst dword ptr [esp + 0x20]
// 0057c7f9  d9c1                 fld st(1)
// 0057c7fb  d944244c             fld dword ptr [esp + 0x4c]
// 0057c7ff  dcc9                 fmul st(1), st(0)
// 0057c801  d9c2                 fld st(2)
// 0057c803  d9442448             fld dword ptr [esp + 0x48]
// 0057c807  dcc9                 fmul st(1), st(0)
// 0057c809  d9cb                 fxch st(3)
// 0057c80b  dee1                 fsubrp st(1)
// 0057c80d  d9442444             fld dword ptr [esp + 0x44]
// 0057c811  dccc                 fmul st(4), st(0)
// 0057c813  d9c6                 fld st(6)
// 0057c815  decb                 fmulp st(3)
// 0057c817  d9cc                 fxch st(4)
// 0057c819  dee2                 fsubrp st(2)
// 0057c81b  d9cd                 fxch st(5)
// 0057c81d  deca                 fmulp st(2)
// 0057c81f  d9cb                 fxch st(3)
// 0057c821  deca                 fmulp st(2)
// 0057c823  dee1                 fsubrp st(1)
// 0057c825  d9ca                 fxch st(2)
// 0057c827  d9e0                 fchs 
// 0057c829  d95c240c             fstp dword ptr [esp + 0xc]
// 0057c82d  d9e0                 fchs 
// 0057c82f  d95c2410             fstp dword ptr [esp + 0x10]
// 0057c833  d9e0                 fchs 
// 0057c835  d95c2414             fstp dword ptr [esp + 0x14]
// 0057c839  d90574a48c00         fld dword ptr [0x8ca474]
// 0057c83f  d91c24               fstp dword ptr [esp]
// 0057c842  e8e98bffff           call 0x575430
// 0057c847  ddd8                 fstp st(0)
// 0057c849  d9442410             fld dword ptr [esp + 0x10]
// 0057c84d  d9c0                 fld st(0)
// 0057c84f  d9442418             fld dword ptr [esp + 0x18]
// 0057c853  dcc9                 fmul st(1), st(0)
// 0057c855  d944240c             fld dword ptr [esp + 0xc]
// 0057c859  d9c0                 fld st(0)
// 0057c85b  d944241c             fld dword ptr [esp + 0x1c]
// 0057c85f  dcc9                 fmul st(1), st(0)
// 0057c861  d9cc                 fxch st(4)
// 0057c863  dee1                 fsubrp st(1)
// 0057c865  d95c242c             fstp dword ptr [esp + 0x2c]
// 0057c869  d9442408             fld dword ptr [esp + 8]
// 0057c86d  dccb                 fmul st(3), st(0)
// 0057c86f  d9442414             fld dword ptr [esp + 0x14]
// 0057c873  dccd                 fmul st(5), st(0)
// 0057c875  8d442408             lea eax, [esp + 8]
// 0057c879  d9cc                 fxch st(4)
// 0057c87b  50                   push eax
// 0057c87c  6a00                 push 0
// 0057c87e  dee5                 fsubrp st(5)
// 0057c880  8bce                 mov ecx, esi
// 0057c882  d9cc                 fxch st(4)
// 0057c884  d95c2438             fstp dword ptr [esp + 0x38]
// 0057c888  deca                 fmulp st(2)
// 0057c88a  deca                 fmulp st(2)
// 0057c88c  dee1                 fsubrp st(1)
// 0057c88e  d95c243c             fstp dword ptr [esp + 0x3c]
// 0057c892  e839b3ffff           call 0x577bd0
// 0057c897  8d4c242c             lea ecx, [esp + 0x2c]
// 0057c89b  51                   push ecx
// 0057c89c  53                   push ebx
// 0057c89d  8bce                 mov ecx, esi
// 0057c89f  e82cb3ffff           call 0x577bd0
// 0057c8a4  8d542414             lea edx, [esp + 0x14]
// 0057c8a8  52                   push edx
// 0057c8a9  6a02                 push 2
// 0057c8ab  8bce                 mov ecx, esi
// 0057c8ad  e81eb3ffff           call 0x577bd0
// 0057c8b2  5e                   pop esi
// 0057c8b3  5b                   pop ebx
// 0057c8b4  83c430               add esp, 0x30
// 0057c8b7  c21000               ret 0x10
// library g3d-6.09-rbx2008/G3Dcpp\CoordinateFrame.cpp (function ?lookAt@CoordinateFrame@G3D@@QAEXABVVector3@2@V32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/CoordinateFrame.cpp
