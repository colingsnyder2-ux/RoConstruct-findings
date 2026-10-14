// roc 2009-06 005734b0  unit: G3D::GCamera  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005734b0
//
// 005734b0  51                   push ecx
// 005734b1  56                   push esi
// 005734b2  57                   push edi
// 005734b3  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005734b7  d94708               fld dword ptr [edi + 8]
// 005734ba  8bf1                 mov esi, ecx
// 005734bc  d827                 fsub dword ptr [edi]
// 005734be  e8fd691a00           call 0x719ec0
// 005734c3  d9470c               fld dword ptr [edi + 0xc]
// 005734c6  d86704               fsub dword ptr [edi + 4]
// 005734c9  89442418             mov dword ptr [esp + 0x18], eax
// 005734cd  d9c0                 fld st(0)
// 005734cf  e8ec691a00           call 0x719ec0
// 005734d4  89442408             mov dword ptr [esp + 8], eax
// 005734d8  8b442414             mov eax, dword ptr [esp + 0x14]
// 005734dc  d900                 fld dword ptr [eax]
// 005734de  d86638               fsub dword ptr [esi + 0x38]
// 005734e1  d94004               fld dword ptr [eax + 4]
// 005734e4  d8663c               fsub dword ptr [esi + 0x3c]
// 005734e7  d94008               fld dword ptr [eax + 8]
// 005734ea  d86640               fsub dword ptr [esi + 0x40]
// 005734ed  d9462c               fld dword ptr [esi + 0x2c]
// 005734f0  d8c9                 fmul st(1)
// 005734f2  d94620               fld dword ptr [esi + 0x20]
// 005734f5  d8cb                 fmul st(3)
// 005734f7  dec1                 faddp st(1)
// 005734f9  d9c3                 fld st(3)
// 005734fb  d84e14               fmul dword ptr [esi + 0x14]
// 005734fe  dec1                 faddp st(1)
// 00573500  d94630               fld dword ptr [esi + 0x30]
// 00573503  d8ca                 fmul st(2)
// 00573505  d94624               fld dword ptr [esi + 0x24]
// 00573508  d8cc                 fmul st(4)
// 0057350a  dec1                 faddp st(1)
// 0057350c  d94618               fld dword ptr [esi + 0x18]
// 0057350f  d8cd                 fmul st(5)
// 00573511  dec1                 faddp st(1)
// 00573513  d94634               fld dword ptr [esi + 0x34]
// 00573516  decb                 fmulp st(3)
// 00573518  d94628               fld dword ptr [esi + 0x28]
// 0057351b  decc                 fmulp st(4)
// 0057351d  d9ca                 fxch st(2)
// 0057351f  dec3                 faddp st(3)
// 00573521  d9461c               fld dword ptr [esi + 0x1c]
// 00573524  decc                 fmulp st(4)
// 00573526  d9ca                 fxch st(2)
// 00573528  dec3                 faddp st(3)
// 0057352a  d90540c08c00         fld dword ptr [0x8cc040]
// 00573530  d9c0                 fld st(0)
// 00573532  decc                 fmulp st(4)
// 00573534  d9ee                 fldz 
// 00573536  d8dc                 fcomp st(4)
// 00573538  dfe0                 fnstsw ax
// 0057353a  f6c401               test ah, 1
// 0057353d  752b                 jne 0x57356a
// 0057353f  dddb                 fstp st(3)
// 00573541  ddda                 fstp st(2)
// 00573543  ddda                 fstp st(2)
// 00573545  ddd9                 fstp st(1)
// 00573547  ddd8                 fstp st(0)
// 00573549  e812fbffff           call 0x573060
// 0057354e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00573552  d900                 fld dword ptr [eax]
// 00573554  d919                 fstp dword ptr [ecx]
// 00573556  5f                   pop edi
// 00573557  d94004               fld dword ptr [eax + 4]
// 0057355a  5e                   pop esi
// 0057355b  d95904               fstp dword ptr [ecx + 4]
// 0057355e  d94008               fld dword ptr [eax + 8]
// 00573561  8bc1                 mov eax, ecx
// 00573563  d95908               fstp dword ptr [ecx + 8]
// 00573566  59                   pop ecx
// 00573567  c20c00               ret 0xc
// 0057356a  d94608               fld dword ptr [esi + 8]
// 0057356d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00573571  decd                 fmulp st(5)
// 00573573  5f                   pop edi
// 00573574  d9cc                 fxch st(4)
// 00573576  5e                   pop esi
// 00573577  def3                 fdivrp st(3)
// 00573579  db442410             fild dword ptr [esp + 0x10]
// 0057357d  d9054cad8b00         fld dword ptr [0x8bad4c]
// 00573583  dcc9                 fmul st(1), st(0)
// 00573585  d9cd                 fxch st(5)
// 00573587  decb                 fmulp st(3)
// 00573589  d9ca                 fxch st(2)
// 0057358b  d8cb                 fmul st(3)
// 0057358d  deea                 fsubp st(2)
// 0057358f  db0424               fild dword ptr [esp]
// 00573592  decc                 fmulp st(4)
// 00573594  d8ca                 fmul st(2)
// 00573596  deeb                 fsubp st(3)
// 00573598  d918                 fstp dword ptr [eax]
// 0057359a  d9c9                 fxch st(1)
// 0057359c  d95804               fstp dword ptr [eax + 4]
// 0057359f  d95808               fstp dword ptr [eax + 8]
// 005735a2  59                   pop ecx
// 005735a3  c20c00               ret 0xc
// library g3d-6.09-rbx2008/G3Dcpp\GCamera.cpp (function ?project@GCamera@G3D@@QBE?AVVector3@2@ABV32@ABVRect2D@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GCamera.cpp
