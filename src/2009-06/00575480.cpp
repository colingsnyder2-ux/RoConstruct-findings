// roc 2009-06 00575480  unit: G3D::BinaryInput  size: 270 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00575480
//
// 00575480  807c241000           cmp byte ptr [esp + 0x10], 0
// 00575485  d9e8                 fld1 
// 00575487  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0057548b  d90574a48c00         fld dword ptr [0x8ca474]
// 00575491  753b                 jne 0x5754ce
// 00575493  d94208               fld dword ptr [edx + 8]
// 00575496  d94204               fld dword ptr [edx + 4]
// 00575499  d902                 fld dword ptr [edx]
// 0057549b  dcc8                 fmul st(0), st(0)
// 0057549d  d9c1                 fld st(1)
// 0057549f  deca                 fmulp st(2)
// 005754a1  dec1                 faddp st(1)
// 005754a3  d9c1                 fld st(1)
// 005754a5  deca                 fmulp st(2)
// 005754a7  dec1                 faddp st(1)
// 005754a9  d9fa                 fsqrt 
// 005754ab  d8d1                 fcom st(1)
// 005754ad  dfe0                 fnstsw ax
// 005754af  f6c441               test ah, 0x41
// 005754b2  7518                 jne 0x5754cc
// 005754b4  d8fa                 fdivr st(2)
// 005754b6  d902                 fld dword ptr [edx]
// 005754b8  d8c9                 fmul st(1)
// 005754ba  d91a                 fstp dword ptr [edx]
// 005754bc  d94204               fld dword ptr [edx + 4]
// 005754bf  d8c9                 fmul st(1)
// 005754c1  d95a04               fstp dword ptr [edx + 4]
// 005754c4  d84a08               fmul dword ptr [edx + 8]
// 005754c7  d95a08               fstp dword ptr [edx + 8]
// 005754ca  eb02                 jmp 0x5754ce
// 005754cc  ddd8                 fstp st(0)
// 005754ce  d902                 fld dword ptr [edx]
// 005754d0  d9e1                 fabs 
// 005754d2  d94204               fld dword ptr [edx + 4]
// 005754d5  d9e1                 fabs 
// 005754d7  d8d9                 fcomp st(1)
// 005754d9  dfe0                 fnstsw ax
// 005754db  f6c441               test ah, 0x41
// 005754de  7a22                 jp 0x575502
// 005754e0  d94208               fld dword ptr [edx + 8]
// 005754e3  d9e1                 fabs 
// 005754e5  ded9                 fcompp 
// 005754e7  dfe0                 fnstsw ax
// 005754e9  f6c441               test ah, 0x41
// 005754ec  7a16                 jp 0x575504
// 005754ee  d94204               fld dword ptr [edx + 4]
// 005754f1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005754f5  d9e0                 fchs 
// 005754f7  d919                 fstp dword ptr [ecx]
// 005754f9  d902                 fld dword ptr [edx]
// 005754fb  d95904               fstp dword ptr [ecx + 4]
// 005754fe  d9ee                 fldz 
// 00575500  eb15                 jmp 0x575517
// 00575502  ddd8                 fstp st(0)
// 00575504  d9ee                 fldz 
// 00575506  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0057550a  d919                 fstp dword ptr [ecx]
// 0057550c  d94208               fld dword ptr [edx + 8]
// 0057550f  d95904               fstp dword ptr [ecx + 4]
// 00575512  d94204               fld dword ptr [edx + 4]
// 00575515  d9e0                 fchs 
// 00575517  d95908               fstp dword ptr [ecx + 8]
// 0057551a  d94108               fld dword ptr [ecx + 8]
// 0057551d  d94104               fld dword ptr [ecx + 4]
// 00575520  d901                 fld dword ptr [ecx]
// 00575522  dcc8                 fmul st(0), st(0)
// 00575524  d9c1                 fld st(1)
// 00575526  deca                 fmulp st(2)
// 00575528  dec1                 faddp st(1)
// 0057552a  d9c1                 fld st(1)
// 0057552c  deca                 fmulp st(2)
// 0057552e  dec1                 faddp st(1)
// 00575530  d9fa                 fsqrt 
// 00575532  d8d1                 fcom st(1)
// 00575534  dfe0                 fnstsw ax
// 00575536  ddd9                 fstp st(1)
// 00575538  f6c441               test ah, 0x41
// 0057553b  7518                 jne 0x575555
// 0057553d  def9                 fdivp st(1)
// 0057553f  d901                 fld dword ptr [ecx]
// 00575541  d8c9                 fmul st(1)
// 00575543  d919                 fstp dword ptr [ecx]
// 00575545  d94104               fld dword ptr [ecx + 4]
// 00575548  d8c9                 fmul st(1)
// 0057554a  d95904               fstp dword ptr [ecx + 4]
// 0057554d  d84908               fmul dword ptr [ecx + 8]
// 00575550  d95908               fstp dword ptr [ecx + 8]
// 00575553  eb04                 jmp 0x575559
// 00575555  ddd8                 fstp st(0)
// 00575557  ddd8                 fstp st(0)
// 00575559  d94108               fld dword ptr [ecx + 8]
// 0057555c  8b442408             mov eax, dword ptr [esp + 8]
// 00575560  d84a04               fmul dword ptr [edx + 4]
// 00575563  d94104               fld dword ptr [ecx + 4]
// 00575566  d84a08               fmul dword ptr [edx + 8]
// 00575569  dee9                 fsubp st(1)
// 0057556b  d901                 fld dword ptr [ecx]
// 0057556d  d84a08               fmul dword ptr [edx + 8]
// 00575570  d94108               fld dword ptr [ecx + 8]
// 00575573  d80a                 fmul dword ptr [edx]
// 00575575  dee9                 fsubp st(1)
// 00575577  d94104               fld dword ptr [ecx + 4]
// 0057557a  d80a                 fmul dword ptr [edx]
// 0057557c  d901                 fld dword ptr [ecx]
// 0057557e  d84a04               fmul dword ptr [edx + 4]
// 00575581  dee9                 fsubp st(1)
// 00575583  d9ca                 fxch st(2)
// 00575585  d918                 fstp dword ptr [eax]
// 00575587  d95804               fstp dword ptr [eax + 4]
// 0057558a  d95808               fstp dword ptr [eax + 8]
// 0057558d  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\Vector3.cpp (function ?generateOrthonormalBasis@Vector3@G3D@@SAXAAV12@00_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Vector3.cpp
