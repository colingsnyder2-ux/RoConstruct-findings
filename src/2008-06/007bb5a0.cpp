// roc 2008-06 007bb5a0  unit: G3D::H::PAV?$Array::?$Set  size: 454 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007bb5a0
//
// 007bb5a0  83ec14               sub esp, 0x14
// 007bb5a3  56                   push esi
// 007bb5a4  8b742420             mov esi, dword ptr [esp + 0x20]
// 007bb5a8  d94608               fld dword ptr [esi + 8]
// 007bb5ab  51                   push ecx
// 007bb5ac  d94604               fld dword ptr [esi + 4]
// 007bb5af  8d442410             lea eax, [esp + 0x10]
// 007bb5b3  d906                 fld dword ptr [esi]
// 007bb5b5  8bce                 mov ecx, esi
// 007bb5b7  dcc8                 fmul st(0), st(0)
// 007bb5b9  d9c1                 fld st(1)
// 007bb5bb  deca                 fmulp st(2)
// 007bb5bd  dec1                 faddp st(1)
// 007bb5bf  d9c1                 fld st(1)
// 007bb5c1  deca                 fmulp st(2)
// 007bb5c3  dec1                 faddp st(1)
// 007bb5c5  d9fa                 fsqrt 
// 007bb5c7  dd542408             fst qword ptr [esp + 8]
// 007bb5cb  d91c24               fstp dword ptr [esp]
// 007bb5ce  50                   push eax
// 007bb5cf  e86cd1d5ff           call 0x518740
// 007bb5d4  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007bb5d8  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007bb5dc  d94104               fld dword ptr [ecx + 4]
// 007bb5df  d822                 fsub dword ptr [edx]
// 007bb5e1  d94108               fld dword ptr [ecx + 8]
// 007bb5e4  d86204               fsub dword ptr [edx + 4]
// 007bb5e7  d9410c               fld dword ptr [ecx + 0xc]
// 007bb5ea  d86208               fsub dword ptr [edx + 8]
// 007bb5ed  d9442410             fld dword ptr [esp + 0x10]
// 007bb5f1  d8ca                 fmul st(2)
// 007bb5f3  d9442414             fld dword ptr [esp + 0x14]
// 007bb5f7  d8ca                 fmul st(2)
// 007bb5f9  dec1                 faddp st(1)
// 007bb5fb  d9c3                 fld st(3)
// 007bb5fd  d84c240c             fmul dword ptr [esp + 0xc]
// 007bb601  dec1                 faddp st(1)
// 007bb603  d9c1                 fld st(1)
// 007bb605  deca                 fmulp st(2)
// 007bb607  d9c2                 fld st(2)
// 007bb609  decb                 fmulp st(3)
// 007bb60b  d9c9                 fxch st(1)
// 007bb60d  dec2                 faddp st(2)
// 007bb60f  d9c2                 fld st(2)
// 007bb611  decb                 fmulp st(3)
// 007bb613  d9c9                 fxch st(1)
// 007bb615  dec2                 faddp st(2)
// 007bb617  d94110               fld dword ptr [ecx + 0x10]
// 007bb61a  dcc8                 fmul st(0), st(0)
// 007bb61c  d9c1                 fld st(1)
// 007bb61e  d8ca                 fmul st(2)
// 007bb620  d9ee                 fldz 
// 007bb622  d8db                 fcomp st(3)
// 007bb624  dfe0                 fnstsw ax
// 007bb626  f6c441               test ah, 0x41
// 007bb629  755a                 jne 0x7bb685
// 007bb62b  d9cb                 fxch st(3)
// 007bb62d  d8d1                 fcom st(1)
// 007bb62f  dfe0                 fnstsw ax
// 007bb631  f6c441               test ah, 0x41
// 007bb634  754d                 jne 0x7bb683
// 007bb636  dddb                 fstp st(3)
// 007bb638  ddd9                 fstp st(1)
// 007bb63a  ddd8                 fstp st(0)
// 007bb63c  ddd8                 fstp st(0)
// 007bb63e  e81d53d5ff           call 0x510960
// 007bb643  d900                 fld dword ptr [eax]
// 007bb645  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007bb649  d919                 fstp dword ptr [ecx]
// 007bb64b  d94004               fld dword ptr [eax + 4]
// 007bb64e  d95904               fstp dword ptr [ecx + 4]
// 007bb651  d94008               fld dword ptr [eax + 8]
// 007bb654  b801000000           mov eax, 1
// 007bb659  d95908               fstp dword ptr [ecx + 8]
// 007bb65c  840520f09600         test byte ptr [0x96f020], al
// 007bb662  7514                 jne 0x7bb678
// 007bb664  8b0dac248000         mov ecx, dword ptr [0x8024ac]
// 007bb66a  090520f09600         or dword ptr [0x96f020], eax
// 007bb670  dd01                 fld qword ptr [ecx]
// 007bb672  dd1d18f09600         fstp qword ptr [0x96f018]
// 007bb678  dd0518f09600         fld qword ptr [0x96f018]
// 007bb67e  5e                   pop esi
// 007bb67f  83c414               add esp, 0x14
// 007bb682  c3                   ret 
// 007bb683  d9cb                 fxch st(3)
// 007bb685  d8eb                 fsubr st(3)
// 007bb687  d8d1                 fcom st(1)
// 007bb689  dfe0                 fnstsw ax
// 007bb68b  f6c441               test ah, 0x41
// 007bb68e  754d                 jne 0x7bb6dd
// 007bb690  ddd8                 fstp st(0)
// 007bb692  ddd9                 fstp st(1)
// 007bb694  ddd8                 fstp st(0)
// 007bb696  ddd8                 fstp st(0)
// 007bb698  e8c352d5ff           call 0x510960
// 007bb69d  d900                 fld dword ptr [eax]
// 007bb69f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007bb6a3  d919                 fstp dword ptr [ecx]
// 007bb6a5  d94004               fld dword ptr [eax + 4]
// 007bb6a8  d95904               fstp dword ptr [ecx + 4]
// 007bb6ab  d94008               fld dword ptr [eax + 8]
// 007bb6ae  b801000000           mov eax, 1
// 007bb6b3  d95908               fstp dword ptr [ecx + 8]
// 007bb6b6  840520f09600         test byte ptr [0x96f020], al
// 007bb6bc  7514                 jne 0x7bb6d2
// 007bb6be  8b15ac248000         mov edx, dword ptr [0x8024ac]
// 007bb6c4  090520f09600         or dword ptr [0x96f020], eax
// 007bb6ca  dd02                 fld qword ptr [edx]
// 007bb6cc  dd1d18f09600         fstp qword ptr [0x96f018]
// 007bb6d2  dd0518f09600         fld qword ptr [0x96f018]
// 007bb6d8  5e                   pop esi
// 007bb6d9  83c414               add esp, 0x14
// 007bb6dc  c3                   ret 
// 007bb6dd  d8e9                 fsubr st(1)
// 007bb6df  d9fa                 fsqrt 
// 007bb6e1  d9cb                 fxch st(3)
// 007bb6e3  ded9                 fcompp 
// 007bb6e5  dfe0                 fnstsw ax
// 007bb6e7  f6c441               test ah, 0x41
// 007bb6ea  7504                 jne 0x7bb6f0
// 007bb6ec  dee1                 fsubrp st(1)
// 007bb6ee  eb02                 jmp 0x7bb6f2
// 007bb6f0  dec1                 faddp st(1)
// 007bb6f2  dc742404             fdiv qword ptr [esp + 4]
// 007bb6f6  8b442428             mov eax, dword ptr [esp + 0x28]
// 007bb6fa  d9c0                 fld st(0)
// 007bb6fc  d906                 fld dword ptr [esi]
// 007bb6fe  d8c9                 fmul st(1)
// 007bb700  d9c1                 fld st(1)
// 007bb702  d84e04               fmul dword ptr [esi + 4]
// 007bb705  d9ca                 fxch st(2)
// 007bb707  d84e08               fmul dword ptr [esi + 8]
// 007bb70a  d902                 fld dword ptr [edx]
// 007bb70c  5e                   pop esi
// 007bb70d  dec2                 faddp st(2)
// 007bb70f  d94204               fld dword ptr [edx + 4]
// 007bb712  dec3                 faddp st(3)
// 007bb714  d84208               fadd dword ptr [edx + 8]
// 007bb717  d9c9                 fxch st(1)
// 007bb719  d910                 fst dword ptr [eax]
// 007bb71b  d9ca                 fxch st(2)
// 007bb71d  d95004               fst dword ptr [eax + 4]
// 007bb720  d9c9                 fxch st(1)
// 007bb722  d95008               fst dword ptr [eax + 8]
// 007bb725  8b442428             mov eax, dword ptr [esp + 0x28]
// 007bb729  d9ca                 fxch st(2)
// 007bb72b  d86104               fsub dword ptr [ecx + 4]
// 007bb72e  d9c9                 fxch st(1)
// 007bb730  d86108               fsub dword ptr [ecx + 8]
// 007bb733  d9ca                 fxch st(2)
// 007bb735  d8610c               fsub dword ptr [ecx + 0xc]
// 007bb738  d9c0                 fld st(0)
// 007bb73a  d8c9                 fmul st(1)
// 007bb73c  d9c3                 fld st(3)
// 007bb73e  d8cc                 fmul st(4)
// 007bb740  dec1                 faddp st(1)
// 007bb742  d9c2                 fld st(2)
// 007bb744  d8cb                 fmul st(3)
// 007bb746  dec1                 faddp st(1)
// 007bb748  d9fa                 fsqrt 
// 007bb74a  d9e8                 fld1 
// 007bb74c  def1                 fdivrp st(1)
// 007bb74e  d9c0                 fld st(0)
// 007bb750  decb                 fmulp st(3)
// 007bb752  dccb                 fmul st(3), st(0)
// 007bb754  dec9                 fmulp st(1)
// 007bb756  d9c9                 fxch st(1)
// 007bb758  d918                 fstp dword ptr [eax]
// 007bb75a  d9c9                 fxch st(1)
// 007bb75c  d95804               fstp dword ptr [eax + 4]
// 007bb75f  d95808               fstp dword ptr [eax + 8]
// 007bb762  83c414               add esp, 0x14
// 007bb765  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\CollisionDetection.cpp (function ?collisionTimeForMovingPointFixedSphere@CollisionDetection@G3D@@SAMABVVector3@2@0ABVSphere@2@AAV32@2@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/CollisionDetection.cpp
