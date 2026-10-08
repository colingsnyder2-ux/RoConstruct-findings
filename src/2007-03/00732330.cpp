// roc 2007-03 00732330  unit: seg_00730000  size: 2461 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00732330
//
// 00732330  55                   push ebp
// 00732331  8bec                 mov ebp, esp
// 00732333  83e4c0               and esp, 0xffffffc0
// 00732336  81ecb4000000         sub esp, 0xb4
// 0073233c  53                   push ebx
// 0073233d  56                   push esi
// 0073233e  8b7508               mov esi, dword ptr [ebp + 8]
// 00732341  d94624               fld dword ptr [esi + 0x24]
// 00732344  57                   push edi
// 00732345  d95c2440             fstp dword ptr [esp + 0x40]
// 00732349  8d442430             lea eax, [esp + 0x30]
// 0073234d  d94628               fld dword ptr [esi + 0x28]
// 00732350  50                   push eax
// 00732351  6a00                 push 0
// 00732353  d95c244c             fstp dword ptr [esp + 0x4c]
// 00732357  d9462c               fld dword ptr [esi + 0x2c]
// 0073235a  8d4c2474             lea ecx, [esp + 0x74]
// 0073235e  51                   push ecx
// 0073235f  d95c2454             fstp dword ptr [esp + 0x54]
// 00732363  8bce                 mov ecx, esi
// 00732365  e886c6dcff           call 0x4fe9f0
// 0073236a  8bc8                 mov ecx, eax
// 0073236c  e81f95daff           call 0x4db890
// 00732371  d900                 fld dword ptr [eax]
// 00732373  dd0518507900         fld qword ptr [0x795018]
// 00732379  8d542450             lea edx, [esp + 0x50]
// 0073237d  dcc9                 fmul st(1), st(0)
// 0073237f  52                   push edx
// 00732380  d9c9                 fxch st(1)
// 00732382  6a01                 push 1
// 00732384  8bce                 mov ecx, esi
// 00732386  d95c2458             fstp dword ptr [esp + 0x58]
// 0073238a  d94004               fld dword ptr [eax + 4]
// 0073238d  d8c9                 fmul st(1)
// 0073238f  d95c245c             fstp dword ptr [esp + 0x5c]
// 00732393  d84808               fmul dword ptr [eax + 8]
// 00732396  8d442464             lea eax, [esp + 0x64]
// 0073239a  50                   push eax
// 0073239b  d95c2464             fstp dword ptr [esp + 0x64]
// 0073239f  d944245c             fld dword ptr [esp + 0x5c]
// 007323a3  d9451c               fld dword ptr [ebp + 0x1c]
// 007323a6  d9c0                 fld st(0)
// 007323a8  deca                 fmulp st(2)
// 007323aa  d9c9                 fxch st(1)
// 007323ac  d95c243c             fstp dword ptr [esp + 0x3c]
// 007323b0  d9442460             fld dword ptr [esp + 0x60]
// 007323b4  d8c9                 fmul st(1)
// 007323b6  d95c2440             fstp dword ptr [esp + 0x40]
// 007323ba  d84c2464             fmul dword ptr [esp + 0x64]
// 007323be  d95c2444             fstp dword ptr [esp + 0x44]
// 007323c2  e829c6dcff           call 0x4fe9f0
// 007323c7  8bc8                 mov ecx, eax
// 007323c9  e8c294daff           call 0x4db890
// 007323ce  d900                 fld dword ptr [eax]
// 007323d0  dd0518507900         fld qword ptr [0x795018]
// 007323d6  8d4c246c             lea ecx, [esp + 0x6c]
// 007323da  dcc9                 fmul st(1), st(0)
// 007323dc  51                   push ecx
// 007323dd  d9c9                 fxch st(1)
// 007323df  6a02                 push 2
// 007323e1  8d942480000000       lea edx, [esp + 0x80]
// 007323e8  d95c2474             fstp dword ptr [esp + 0x74]
// 007323ec  52                   push edx
// 007323ed  d94004               fld dword ptr [eax + 4]
// 007323f0  8bce                 mov ecx, esi
// 007323f2  d8c9                 fmul st(1)
// 007323f4  d95c247c             fstp dword ptr [esp + 0x7c]
// 007323f8  d84808               fmul dword ptr [eax + 8]
// 007323fb  d99c2480000000       fstp dword ptr [esp + 0x80]
// 00732402  d9442478             fld dword ptr [esp + 0x78]
// 00732406  d9451c               fld dword ptr [ebp + 0x1c]
// 00732409  d9c0                 fld st(0)
// 0073240b  deca                 fmulp st(2)
// 0073240d  d9c9                 fxch st(1)
// 0073240f  d95c245c             fstp dword ptr [esp + 0x5c]
// 00732413  d944247c             fld dword ptr [esp + 0x7c]
// 00732417  d8c9                 fmul st(1)
// 00732419  d95c2460             fstp dword ptr [esp + 0x60]
// 0073241d  d88c2480000000       fmul dword ptr [esp + 0x80]
// 00732424  d95c2464             fstp dword ptr [esp + 0x64]
// 00732428  e8c3c5dcff           call 0x4fe9f0
// 0073242d  8bc8                 mov ecx, eax
// 0073242f  e85c94daff           call 0x4db890
// 00732434  d900                 fld dword ptr [eax]
// 00732436  dd0518507900         fld qword ptr [0x795018]
// 0073243c  dcc9                 fmul st(1), st(0)
// 0073243e  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 00732441  d9c9                 fxch st(1)
// 00732443  8b750c               mov esi, dword ptr [ebp + 0xc]
// 00732446  51                   push ecx
// 00732447  d95c2460             fstp dword ptr [esp + 0x60]
// 0073244b  8d4c2444             lea ecx, [esp + 0x44]
// 0073244f  d94004               fld dword ptr [eax + 4]
// 00732452  d8c9                 fmul st(1)
// 00732454  d95c2464             fstp dword ptr [esp + 0x64]
// 00732458  d84808               fmul dword ptr [eax + 8]
// 0073245b  8d442434             lea eax, [esp + 0x34]
// 0073245f  d95c2468             fstp dword ptr [esp + 0x68]
// 00732463  d9442460             fld dword ptr [esp + 0x60]
// 00732467  d9451c               fld dword ptr [ebp + 0x1c]
// 0073246a  d9c0                 fld st(0)
// 0073246c  deca                 fmulp st(2)
// 0073246e  d9c9                 fxch st(1)
// 00732470  d95c2470             fstp dword ptr [esp + 0x70]
// 00732474  d9442464             fld dword ptr [esp + 0x64]
// 00732478  d8c9                 fmul st(1)
// 0073247a  d95c2474             fstp dword ptr [esp + 0x74]
// 0073247e  d9442468             fld dword ptr [esp + 0x68]
// 00732482  d8c9                 fmul st(1)
// 00732484  d95c2478             fstp dword ptr [esp + 0x78]
// 00732488  d91c24               fstp dword ptr [esp]
// 0073248b  57                   push edi
// 0073248c  56                   push esi
// 0073248d  50                   push eax
// 0073248e  51                   push ecx
// 0073248f  e82cfeffff           call 0x7322c0
// 00732494  d9451c               fld dword ptr [ebp + 0x1c]
// 00732497  8b5d14               mov ebx, dword ptr [ebp + 0x14]
// 0073249a  d95c2410             fstp dword ptr [esp + 0x10]
// 0073249e  83c410               add esp, 0x10
// 007324a1  53                   push ebx
// 007324a2  56                   push esi
// 007324a3  8d54245c             lea edx, [esp + 0x5c]
// 007324a7  52                   push edx
// 007324a8  8d442450             lea eax, [esp + 0x50]
// 007324ac  50                   push eax
// 007324ad  e80efeffff           call 0x7322c0
// 007324b2  d9451c               fld dword ptr [ebp + 0x1c]
// 007324b5  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 007324b8  d95c2410             fstp dword ptr [esp + 0x10]
// 007324bc  83c410               add esp, 0x10
// 007324bf  51                   push ecx
// 007324c0  56                   push esi
// 007324c1  8d542478             lea edx, [esp + 0x78]
// 007324c5  52                   push edx
// 007324c6  8d442450             lea eax, [esp + 0x50]
// 007324ca  50                   push eax
// 007324cb  e8f0fdffff           call 0x7322c0
// 007324d0  d9442444             fld dword ptr [esp + 0x44]
// 007324d4  dd05389c7e00         fld qword ptr [0x7e9c38]
// 007324da  83c414               add esp, 0x14
// 007324dd  dcc9                 fmul st(1), st(0)
// 007324df  8d4c2430             lea ecx, [esp + 0x30]
// 007324e3  d9c9                 fxch st(1)
// 007324e5  51                   push ecx
// 007324e6  8d9424a4000000       lea edx, [esp + 0xa4]
// 007324ed  d95c2460             fstp dword ptr [esp + 0x60]
// 007324f1  52                   push edx
// 007324f2  d944243c             fld dword ptr [esp + 0x3c]
// 007324f6  8bce                 mov ecx, esi
// 007324f8  d8c9                 fmul st(1)
// 007324fa  d95c2468             fstp dword ptr [esp + 0x68]
// 007324fe  d84c2440             fmul dword ptr [esp + 0x40]
// 00732502  d95c246c             fstp dword ptr [esp + 0x6c]
// 00732506  d9442464             fld dword ptr [esp + 0x64]
// 0073250a  d8442448             fadd dword ptr [esp + 0x48]
// 0073250e  d95c2438             fstp dword ptr [esp + 0x38]
// 00732512  d9442468             fld dword ptr [esp + 0x68]
// 00732516  d844244c             fadd dword ptr [esp + 0x4c]
// 0073251a  d95c243c             fstp dword ptr [esp + 0x3c]
// 0073251e  d944246c             fld dword ptr [esp + 0x6c]
// 00732522  d8442450             fadd dword ptr [esp + 0x50]
// 00732526  d95c2440             fstp dword ptr [esp + 0x40]
// 0073252a  e8b12ed4ff           call 0x4753e0
// 0073252f  d9442450             fld dword ptr [esp + 0x50]
// 00732533  dd05389c7e00         fld qword ptr [0x7e9c38]
// 00732539  dcc9                 fmul st(1), st(0)
// 0073253b  8d442450             lea eax, [esp + 0x50]
// 0073253f  d9c9                 fxch st(1)
// 00732541  50                   push eax
// 00732542  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 00732549  d95c2434             fstp dword ptr [esp + 0x34]
// 0073254d  51                   push ecx
// 0073254e  d944245c             fld dword ptr [esp + 0x5c]
// 00732552  8bce                 mov ecx, esi
// 00732554  d8c9                 fmul st(1)
// 00732556  d95c243c             fstp dword ptr [esp + 0x3c]
// 0073255a  d84c2460             fmul dword ptr [esp + 0x60]
// 0073255e  d95c2440             fstp dword ptr [esp + 0x40]
// 00732562  d9442438             fld dword ptr [esp + 0x38]
// 00732566  d8442448             fadd dword ptr [esp + 0x48]
// 0073256a  d95c2458             fstp dword ptr [esp + 0x58]
// 0073256e  d944243c             fld dword ptr [esp + 0x3c]
// 00732572  d844244c             fadd dword ptr [esp + 0x4c]
// 00732576  d95c245c             fstp dword ptr [esp + 0x5c]
// 0073257a  d9442440             fld dword ptr [esp + 0x40]
// 0073257e  d8442450             fadd dword ptr [esp + 0x50]
// 00732582  d95c2460             fstp dword ptr [esp + 0x60]
// 00732586  e8552ed4ff           call 0x4753e0
// 0073258b  d944246c             fld dword ptr [esp + 0x6c]
// 0073258f  8d542450             lea edx, [esp + 0x50]
// 00732593  dd05389c7e00         fld qword ptr [0x7e9c38]
// 00732599  52                   push edx
// 0073259a  dcc9                 fmul st(1), st(0)
// 0073259c  8d842494000000       lea eax, [esp + 0x94]
// 007325a3  d9c9                 fxch st(1)
// 007325a5  50                   push eax
// 007325a6  8bce                 mov ecx, esi
// 007325a8  d95c2438             fstp dword ptr [esp + 0x38]
// 007325ac  d9442478             fld dword ptr [esp + 0x78]
// 007325b0  d8c9                 fmul st(1)
// 007325b2  d95c243c             fstp dword ptr [esp + 0x3c]
// 007325b6  d84c247c             fmul dword ptr [esp + 0x7c]
// 007325ba  d95c2440             fstp dword ptr [esp + 0x40]
// 007325be  d9442438             fld dword ptr [esp + 0x38]
// 007325c2  d8442448             fadd dword ptr [esp + 0x48]
// 007325c6  d95c2458             fstp dword ptr [esp + 0x58]
// 007325ca  d944243c             fld dword ptr [esp + 0x3c]
// 007325ce  d844244c             fadd dword ptr [esp + 0x4c]
// 007325d2  d95c245c             fstp dword ptr [esp + 0x5c]
// 007325d6  d9442440             fld dword ptr [esp + 0x40]
// 007325da  d8442450             fadd dword ptr [esp + 0x50]
// 007325de  d95c2460             fstp dword ptr [esp + 0x60]
// 007325e2  e8f92dd4ff           call 0x4753e0
// 007325e7  d9ee                 fldz 
// 007325e9  d89424ac000000       fcom dword ptr [esp + 0xac]
// 007325f0  dfe0                 fnstsw ax
// 007325f2  d905309c7e00         fld dword ptr [0x7e9c30]
// 007325f8  f6c405               test ah, 5
// 007325fb  7a1f                 jp 0x73261c
// 007325fd  8d4c2440             lea ecx, [esp + 0x40]
// 00732601  ddd9                 fstp st(1)
// 00732603  51                   push ecx
// 00732604  ddd8                 fstp st(0)
// 00732606  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 0073260d  e88e15ddff           call 0x503ba0
// 00732612  d9ee                 fldz 
// 00732614  d905309c7e00         fld dword ptr [0x7e9c30]
// 0073261a  eb0c                 jmp 0x732628
// 0073261c  d9542430             fst dword ptr [esp + 0x30]
// 00732620  8d442430             lea eax, [esp + 0x30]
// 00732624  d9542434             fst dword ptr [esp + 0x34]
// 00732628  d900                 fld dword ptr [eax]
// 0073262a  d95c246c             fstp dword ptr [esp + 0x6c]
// 0073262e  d94004               fld dword ptr [eax + 4]
// 00732631  d95c2470             fstp dword ptr [esp + 0x70]
// 00732635  d9c9                 fxch st(1)
// 00732637  d89424bc000000       fcom dword ptr [esp + 0xbc]
// 0073263e  dfe0                 fnstsw ax
// 00732640  f6c405               test ah, 5
// 00732643  7a1f                 jp 0x732664
// 00732645  8d542440             lea edx, [esp + 0x40]
// 00732649  ddd8                 fstp st(0)
// 0073264b  52                   push edx
// 0073264c  ddd8                 fstp st(0)
// 0073264e  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 00732655  e84615ddff           call 0x503ba0
// 0073265a  d9ee                 fldz 
// 0073265c  d905309c7e00         fld dword ptr [0x7e9c30]
// 00732662  eb0e                 jmp 0x732672
// 00732664  d9c9                 fxch st(1)
// 00732666  8d442430             lea eax, [esp + 0x30]
// 0073266a  d9542430             fst dword ptr [esp + 0x30]
// 0073266e  d9542434             fst dword ptr [esp + 0x34]
// 00732672  d900                 fld dword ptr [eax]
// 00732674  d95c245c             fstp dword ptr [esp + 0x5c]
// 00732678  d94004               fld dword ptr [eax + 4]
// 0073267b  d95c2460             fstp dword ptr [esp + 0x60]
// 0073267f  d984249c000000       fld dword ptr [esp + 0x9c]
// 00732686  d8d2                 fcom st(2)
// 00732688  dfe0                 fnstsw ax
// 0073268a  f6c441               test ah, 0x41
// 0073268d  757d                 jne 0x73270c
// 0073268f  ddda                 fstp st(2)
// 00732691  8d442440             lea eax, [esp + 0x40]
// 00732695  ddd8                 fstp st(0)
// 00732697  50                   push eax
// 00732698  8d8c2494000000       lea ecx, [esp + 0x94]
// 0073269f  ddd8                 fstp st(0)
// 007326a1  e8fa14ddff           call 0x503ba0
// 007326a6  d984249c000000       fld dword ptr [esp + 0x9c]
// 007326ad  d9ee                 fldz 
// 007326af  d9c9                 fxch st(1)
// 007326b1  d900                 fld dword ptr [eax]
// 007326b3  d95c2450             fstp dword ptr [esp + 0x50]
// 007326b7  d94004               fld dword ptr [eax + 4]
// 007326ba  d95c2454             fstp dword ptr [esp + 0x54]
// 007326be  d98424ac000000       fld dword ptr [esp + 0xac]
// 007326c5  d8d2                 fcom st(2)
// 007326c7  dfe0                 fnstsw ax
// 007326c9  d90574a57900         fld dword ptr [0x79a574]
// 007326cf  f6c441               test ah, 0x41
// 007326d2  dd05784f7900         fld qword ptr [0x794f78]
// 007326d8  dd0520e67900         fld qword ptr [0x79e620]
// 007326de  7551                 jne 0x732731
// 007326e0  d9cb                 fxch st(3)
// 007326e2  d8c9                 fmul st(1)
// 007326e4  d9451c               fld dword ptr [ebp + 0x1c]
// 007326e7  d9c0                 fld st(0)
// 007326e9  deca                 fmulp st(2)
// 007326eb  d9c9                 fxch st(1)
// 007326ed  d95c2478             fstp dword ptr [esp + 0x78]
// 007326f1  d9442478             fld dword ptr [esp + 0x78]
// 007326f5  d8d4                 fcom st(4)
// 007326f7  dfe0                 fnstsw ax
// 007326f9  f6c441               test ah, 0x41
// 007326fc  7a1e                 jp 0x73271c
// 007326fe  ddd8                 fstp st(0)
// 00732700  d905a0727900         fld dword ptr [0x7972a0]
// 00732706  d95c243c             fstp dword ptr [esp + 0x3c]
// 0073270a  eb36                 jmp 0x732742
// 0073270c  d9c9                 fxch st(1)
// 0073270e  8d442430             lea eax, [esp + 0x30]
// 00732712  d9542430             fst dword ptr [esp + 0x30]
// 00732716  d95c2434             fstp dword ptr [esp + 0x34]
// 0073271a  eb95                 jmp 0x7326b1
// 0073271c  d8d3                 fcom st(3)
// 0073271e  dfe0                 fnstsw ax
// 00732720  f6c401               test ah, 1
// 00732723  75e1                 jne 0x732706
// 00732725  ddd8                 fstp st(0)
// 00732727  d9ca                 fxch st(2)
// 00732729  d954243c             fst dword ptr [esp + 0x3c]
// 0073272d  d9ca                 fxch st(2)
// 0073272f  eb11                 jmp 0x732742
// 00732731  dddb                 fstp st(3)
// 00732733  d9cc                 fxch st(4)
// 00732735  d954243c             fst dword ptr [esp + 0x3c]
// 00732739  d9451c               fld dword ptr [ebp + 0x1c]
// 0073273c  d9c9                 fxch st(1)
// 0073273e  d9cd                 fxch st(5)
// 00732740  d9c9                 fxch st(1)
// 00732742  d944243c             fld dword ptr [esp + 0x3c]
// 00732746  d95c2468             fstp dword ptr [esp + 0x68]
// 0073274a  d98424bc000000       fld dword ptr [esp + 0xbc]
// 00732751  d8d6                 fcom st(6)
// 00732753  dfe0                 fnstsw ax
// 00732755  f6c441               test ah, 0x41
// 00732758  7538                 jne 0x732792
// 0073275a  d8ca                 fmul st(2)
// 0073275c  d8c9                 fmul st(1)
// 0073275e  d95c2478             fstp dword ptr [esp + 0x78]
// 00732762  d9442478             fld dword ptr [esp + 0x78]
// 00732766  d8d4                 fcom st(4)
// 00732768  dfe0                 fnstsw ax
// 0073276a  f6c441               test ah, 0x41
// 0073276d  7a0e                 jp 0x73277d
// 0073276f  ddd8                 fstp st(0)
// 00732771  d905a0727900         fld dword ptr [0x7972a0]
// 00732777  d95c243c             fstp dword ptr [esp + 0x3c]
// 0073277b  eb1f                 jmp 0x73279c
// 0073277d  d8d3                 fcom st(3)
// 0073277f  dfe0                 fnstsw ax
// 00732781  f6c401               test ah, 1
// 00732784  75f1                 jne 0x732777
// 00732786  ddd8                 fstp st(0)
// 00732788  d9ca                 fxch st(2)
// 0073278a  d954243c             fst dword ptr [esp + 0x3c]
// 0073278e  d9ca                 fxch st(2)
// 00732790  eb0a                 jmp 0x73279c
// 00732792  ddd8                 fstp st(0)
// 00732794  d9cd                 fxch st(5)
// 00732796  d954243c             fst dword ptr [esp + 0x3c]
// 0073279a  d9cd                 fxch st(5)
// 0073279c  d944243c             fld dword ptr [esp + 0x3c]
// 007327a0  d99c2488000000       fstp dword ptr [esp + 0x88]
// 007327a7  d9cc                 fxch st(4)
// 007327a9  d8d5                 fcom st(5)
// 007327ab  dfe0                 fnstsw ax
// 007327ad  f6c441               test ah, 0x41
// 007327b0  7536                 jne 0x7327e8
// 007327b2  dddd                 fstp st(5)
// 007327b4  decc                 fmulp st(4)
// 007327b6  d9cb                 fxch st(3)
// 007327b8  deca                 fmulp st(2)
// 007327ba  d9c9                 fxch st(1)
// 007327bc  d95c2478             fstp dword ptr [esp + 0x78]
// 007327c0  d9442478             fld dword ptr [esp + 0x78]
// 007327c4  d8d1                 fcom st(1)
// 007327c6  dfe0                 fnstsw ax
// 007327c8  ddd9                 fstp st(1)
// 007327ca  f6c441               test ah, 0x41
// 007327cd  7a0c                 jp 0x7327db
// 007327cf  ddd8                 fstp st(0)
// 007327d1  ddd8                 fstp st(0)
// 007327d3  d905a0727900         fld dword ptr [0x7972a0]
// 007327d9  eb17                 jmp 0x7327f2
// 007327db  d8d1                 fcom st(1)
// 007327dd  dfe0                 fnstsw ax
// 007327df  f6c401               test ah, 1
// 007327e2  740c                 je 0x7327f0
// 007327e4  ddd9                 fstp st(1)
// 007327e6  eb0a                 jmp 0x7327f2
// 007327e8  dddc                 fstp st(4)
// 007327ea  ddd8                 fstp st(0)
// 007327ec  ddd9                 fstp st(1)
// 007327ee  ddd8                 fstp st(0)
// 007327f0  ddd8                 fstp st(0)
// 007327f2  d95c243c             fstp dword ptr [esp + 0x3c]
// 007327f6  8bce                 mov ecx, esi
// 007327f8  d944243c             fld dword ptr [esp + 0x3c]
// 007327fc  d99c248c000000       fstp dword ptr [esp + 0x8c]
// 00732803  e81876d4ff           call 0x479e20
// 00732808  6a02                 push 2
// 0073280a  6a01                 push 1
// 0073280c  6a00                 push 0
// 0073280e  8bce                 mov ecx, esi
// 00732810  e85b1ad4ff           call 0x474270
// 00732815  dd0518507900         fld qword ptr [0x795018]
// 0073281b  83ec08               sub esp, 8
// 0073281e  8bce                 mov ecx, esi
// 00732820  dd1c24               fstp qword ptr [esp]
// 00732823  e8a81bd4ff           call 0x4743d0
// 00732828  6a00                 push 0
// 0073282a  8bce                 mov ecx, esi
// 0073282c  e86f57d4ff           call 0x477fa0
// 00732831  d907                 fld dword ptr [edi]
// 00732833  dd05c8237900         fld qword ptr [0x7923c8]
// 00732839  dcc9                 fmul st(1), st(0)
// 0073283b  d9c9                 fxch st(1)
// 0073283d  d95c2440             fstp dword ptr [esp + 0x40]
// 00732841  d94704               fld dword ptr [edi + 4]
// 00732844  d8c9                 fmul st(1)
// 00732846  d95c2444             fstp dword ptr [esp + 0x44]
// 0073284a  d94708               fld dword ptr [edi + 8]
// 0073284d  d8c9                 fmul st(1)
// 0073284f  d95c2448             fstp dword ptr [esp + 0x48]
// 00732853  d84f0c               fmul dword ptr [edi + 0xc]
// 00732856  8dbea8040000         lea edi, [esi + 0x4a8]
// 0073285c  57                   push edi
// 0073285d  d95c2450             fstp dword ptr [esp + 0x50]
// 00732861  d9442444             fld dword ptr [esp + 0x44]
// 00732865  d91f                 fstp dword ptr [edi]
// 00732867  d9442448             fld dword ptr [esp + 0x48]
// 0073286b  d95f04               fstp dword ptr [edi + 4]
// 0073286e  d944244c             fld dword ptr [esp + 0x4c]
// 00732872  d95f08               fstp dword ptr [edi + 8]
// 00732875  d9442450             fld dword ptr [esp + 0x50]
// 00732879  d95f0c               fstp dword ptr [edi + 0xc]
// 0073287c  ff15b0eb7700         call dword ptr [0x77ebb0]
// 00732882  d9442468             fld dword ptr [esp + 0x68]
// 00732886  8d4c2430             lea ecx, [esp + 0x30]
// 0073288a  dd05c8ee7900         fld qword ptr [0x79eec8]
// 00732890  51                   push ecx
// 00732891  d8c9                 fmul st(1)
// 00732893  8bce                 mov ecx, esi
// 00732895  d99c2488000000       fstp dword ptr [esp + 0x88]
// 0073289c  d9842488000000       fld dword ptr [esp + 0x88]
// 007328a3  d95c247c             fstp dword ptr [esp + 0x7c]
// 007328a7  dc0d289c7e00         fmul qword ptr [0x7e9c28]
// 007328ad  d95c2440             fstp dword ptr [esp + 0x40]
// 007328b1  d9442440             fld dword ptr [esp + 0x40]
// 007328b5  d99c2480000000       fstp dword ptr [esp + 0x80]
// 007328bc  d944247c             fld dword ptr [esp + 0x7c]
// 007328c0  d8442470             fadd dword ptr [esp + 0x70]
// 007328c4  d95c2434             fstp dword ptr [esp + 0x34]
// 007328c8  d9842480000000       fld dword ptr [esp + 0x80]
// 007328cf  d8442474             fadd dword ptr [esp + 0x74]
// 007328d3  d95c2438             fstp dword ptr [esp + 0x38]
// 007328d7  e8f423d4ff           call 0x474cd0
// 007328dc  d9442468             fld dword ptr [esp + 0x68]
// 007328e0  8d542440             lea edx, [esp + 0x40]
// 007328e4  dd05209c7e00         fld qword ptr [0x7e9c20]
// 007328ea  52                   push edx
// 007328eb  d8c9                 fmul st(1)
// 007328ed  8bce                 mov ecx, esi
// 007328ef  d95c246c             fstp dword ptr [esp + 0x6c]
// 007328f3  d944246c             fld dword ptr [esp + 0x6c]
// 007328f7  d95c2434             fstp dword ptr [esp + 0x34]
// 007328fb  dc0d189c7e00         fmul qword ptr [0x7e9c18]
// 00732901  d95c247c             fstp dword ptr [esp + 0x7c]
// 00732905  d944247c             fld dword ptr [esp + 0x7c]
// 00732909  d95c2438             fstp dword ptr [esp + 0x38]
// 0073290d  d9442434             fld dword ptr [esp + 0x34]
// 00732911  d8442470             fadd dword ptr [esp + 0x70]
// 00732915  d95c2444             fstp dword ptr [esp + 0x44]
// 00732919  d9442438             fld dword ptr [esp + 0x38]
// 0073291d  d8442474             fadd dword ptr [esp + 0x74]
// 00732921  d95c2448             fstp dword ptr [esp + 0x48]
// 00732925  e8a623d4ff           call 0x474cd0
// 0073292a  d9442468             fld dword ptr [esp + 0x68]
// 0073292e  d95c2430             fstp dword ptr [esp + 0x30]
// 00732932  8d442440             lea eax, [esp + 0x40]
// 00732936  d944243c             fld dword ptr [esp + 0x3c]
// 0073293a  50                   push eax
// 0073293b  d95c2438             fstp dword ptr [esp + 0x38]
// 0073293f  8bce                 mov ecx, esi
// 00732941  d9442434             fld dword ptr [esp + 0x34]
// 00732945  d8442470             fadd dword ptr [esp + 0x70]
// 00732949  d95c2444             fstp dword ptr [esp + 0x44]
// 0073294d  d9442438             fld dword ptr [esp + 0x38]
// 00732951  d8442474             fadd dword ptr [esp + 0x74]
// 00732955  d95c2448             fstp dword ptr [esp + 0x48]
// 00732959  e87223d4ff           call 0x474cd0
// 0073295e  d9842484000000       fld dword ptr [esp + 0x84]
// 00732965  8d4c2440             lea ecx, [esp + 0x40]
// 00732969  d95c2430             fstp dword ptr [esp + 0x30]
// 0073296d  51                   push ecx
// 0073296e  d944247c             fld dword ptr [esp + 0x7c]
// 00732972  8bce                 mov ecx, esi
// 00732974  d95c2438             fstp dword ptr [esp + 0x38]
// 00732978  d9442434             fld dword ptr [esp + 0x34]
// 0073297c  d8442470             fadd dword ptr [esp + 0x70]
// 00732980  d95c2444             fstp dword ptr [esp + 0x44]
// 00732984  d9442438             fld dword ptr [esp + 0x38]
// 00732988  d8442474             fadd dword ptr [esp + 0x74]
// 0073298c  d95c2448             fstp dword ptr [esp + 0x48]
// 00732990  e83b23d4ff           call 0x474cd0
// 00732995  d903                 fld dword ptr [ebx]
// 00732997  57                   push edi
// 00732998  dd05c8237900         fld qword ptr [0x7923c8]
// 0073299e  dcc9                 fmul st(1), st(0)
// 007329a0  d9c9                 fxch st(1)
// 007329a2  d95c2444             fstp dword ptr [esp + 0x44]
// 007329a6  d94304               fld dword ptr [ebx + 4]
// 007329a9  d8c9                 fmul st(1)
// 007329ab  d95c2448             fstp dword ptr [esp + 0x48]
// 007329af  d94308               fld dword ptr [ebx + 8]
// 007329b2  d8c9                 fmul st(1)
// 007329b4  d95c244c             fstp dword ptr [esp + 0x4c]
// 007329b8  d84b0c               fmul dword ptr [ebx + 0xc]
// 007329bb  8b1db0eb7700         mov ebx, dword ptr [0x77ebb0]
// 007329c1  d95c2450             fstp dword ptr [esp + 0x50]
// 007329c5  d9442444             fld dword ptr [esp + 0x44]
// 007329c9  d91f                 fstp dword ptr [edi]
// 007329cb  d9442448             fld dword ptr [esp + 0x48]
// 007329cf  d95f04               fstp dword ptr [edi + 4]
// 007329d2  d944244c             fld dword ptr [esp + 0x4c]
// 007329d6  d95f08               fstp dword ptr [edi + 8]
// 007329d9  d9442450             fld dword ptr [esp + 0x50]
// 007329dd  d95f0c               fstp dword ptr [edi + 0xc]
// 007329e0  ffd3                 call ebx
// 007329e2  d9842488000000       fld dword ptr [esp + 0x88]
// 007329e9  8d542440             lea edx, [esp + 0x40]
// 007329ed  dd05c8ee7900         fld qword ptr [0x79eec8]
// 007329f3  52                   push edx
// 007329f4  d8c9                 fmul st(1)
// 007329f6  8bce                 mov ecx, esi
// 007329f8  d95c2434             fstp dword ptr [esp + 0x34]
// 007329fc  dc0d289c7e00         fmul qword ptr [0x7e9c28]
// 00732a02  d95c247c             fstp dword ptr [esp + 0x7c]
// 00732a06  d944247c             fld dword ptr [esp + 0x7c]
// 00732a0a  d95c2438             fstp dword ptr [esp + 0x38]
// 00732a0e  d9442434             fld dword ptr [esp + 0x34]
// 00732a12  d8442460             fadd dword ptr [esp + 0x60]
// 00732a16  d95c2444             fstp dword ptr [esp + 0x44]
// 00732a1a  d9442438             fld dword ptr [esp + 0x38]
// 00732a1e  d8442464             fadd dword ptr [esp + 0x64]
// 00732a22  d95c2448             fstp dword ptr [esp + 0x48]
// 00732a26  e8a522d4ff           call 0x474cd0
// 00732a2b  d9842488000000       fld dword ptr [esp + 0x88]
// 00732a32  dc0d60ef7800         fmul qword ptr [0x78ef60]
// 00732a38  d95c243c             fstp dword ptr [esp + 0x3c]
// 00732a3c  d944243c             fld dword ptr [esp + 0x3c]
// 00732a40  d9542430             fst dword ptr [esp + 0x30]
// 00732a44  d95c2434             fstp dword ptr [esp + 0x34]
// 00732a48  d9442430             fld dword ptr [esp + 0x30]
// 00732a4c  d844245c             fadd dword ptr [esp + 0x5c]
// 00732a50  d95c2440             fstp dword ptr [esp + 0x40]
// 00732a54  d9442434             fld dword ptr [esp + 0x34]
// 00732a58  d8442460             fadd dword ptr [esp + 0x60]
// 00732a5c  8d442440             lea eax, [esp + 0x40]
// 00732a60  50                   push eax
// 00732a61  8bce                 mov ecx, esi
// 00732a63  d95c2448             fstp dword ptr [esp + 0x48]
// 00732a67  e86422d4ff           call 0x474cd0
// 00732a6c  d944243c             fld dword ptr [esp + 0x3c]
// 00732a70  8d4c2440             lea ecx, [esp + 0x40]
// 00732a74  d9542430             fst dword ptr [esp + 0x30]
// 00732a78  51                   push ecx
// 00732a79  d95c2438             fstp dword ptr [esp + 0x38]
// 00732a7d  8bce                 mov ecx, esi
// 00732a7f  d9442434             fld dword ptr [esp + 0x34]
// 00732a83  d8442460             fadd dword ptr [esp + 0x60]
// 00732a87  d95c2444             fstp dword ptr [esp + 0x44]
// 00732a8b  d9442438             fld dword ptr [esp + 0x38]
// 00732a8f  d8442464             fadd dword ptr [esp + 0x64]
// 00732a93  d95c2448             fstp dword ptr [esp + 0x48]
// 00732a97  e83422d4ff           call 0x474cd0
// 00732a9c  d944243c             fld dword ptr [esp + 0x3c]
// 00732aa0  8d542440             lea edx, [esp + 0x40]
// 00732aa4  d95c2430             fstp dword ptr [esp + 0x30]
// 00732aa8  52                   push edx
// 00732aa9  d984248c000000       fld dword ptr [esp + 0x8c]
// 00732ab0  8bce                 mov ecx, esi
// 00732ab2  dc0d189c7e00         fmul qword ptr [0x7e9c18]
// 00732ab8  d95c2438             fstp dword ptr [esp + 0x38]
// 00732abc  d9442434             fld dword ptr [esp + 0x34]
// 00732ac0  d8442460             fadd dword ptr [esp + 0x60]
// 00732ac4  d95c2444             fstp dword ptr [esp + 0x44]
// 00732ac8  d9442438             fld dword ptr [esp + 0x38]
// 00732acc  d8442464             fadd dword ptr [esp + 0x64]
// 00732ad0  d95c2448             fstp dword ptr [esp + 0x48]
// 00732ad4  e8f721d4ff           call 0x474cd0
// 00732ad9  d9842488000000       fld dword ptr [esp + 0x88]
// 00732ae0  8d442440             lea eax, [esp + 0x40]
// 00732ae4  dc0d209c7e00         fmul qword ptr [0x7e9c20]
// 00732aea  50                   push eax
// 00732aeb  8bce                 mov ecx, esi
// 00732aed  d95c2434             fstp dword ptr [esp + 0x34]
// 00732af1  d944247c             fld dword ptr [esp + 0x7c]
// 00732af5  d95c2438             fstp dword ptr [esp + 0x38]
// 00732af9  d9442434             fld dword ptr [esp + 0x34]
// 00732afd  d8442460             fadd dword ptr [esp + 0x60]
// 00732b01  d95c2444             fstp dword ptr [esp + 0x44]
// 00732b05  d9442438             fld dword ptr [esp + 0x38]
// 00732b09  d8442464             fadd dword ptr [esp + 0x64]
// 00732b0d  d95c2448             fstp dword ptr [esp + 0x48]
// 00732b11  e8ba21d4ff           call 0x474cd0
// 00732b16  d944243c             fld dword ptr [esp + 0x3c]
// 00732b1a  8d4c2440             lea ecx, [esp + 0x40]
// 00732b1e  d9542430             fst dword ptr [esp + 0x30]
// 00732b22  51                   push ecx
// 00732b23  d95c2438             fstp dword ptr [esp + 0x38]
// 00732b27  8bce                 mov ecx, esi
// 00732b29  d9442434             fld dword ptr [esp + 0x34]
// 00732b2d  d8442460             fadd dword ptr [esp + 0x60]
// 00732b31  d95c2444             fstp dword ptr [esp + 0x44]
// 00732b35  d9442438             fld dword ptr [esp + 0x38]
// 00732b39  d8442464             fadd dword ptr [esp + 0x64]
// 00732b3d  d95c2448             fstp dword ptr [esp + 0x48]
// 00732b41  e88a21d4ff           call 0x474cd0
// 00732b46  8bce                 mov ecx, esi
// 00732b48  e8c32dd4ff           call 0x475910
// 00732b4d  6a01                 push 1
// 00732b4f  8bce                 mov ecx, esi
// 00732b51  e84a54d4ff           call 0x477fa0
// 00732b56  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00732b59  d900                 fld dword ptr [eax]
// 00732b5b  dd05c8237900         fld qword ptr [0x7923c8]
// 00732b61  dcc9                 fmul st(1), st(0)
// 00732b63  d9c9                 fxch st(1)
// 00732b65  d95c2440             fstp dword ptr [esp + 0x40]
// 00732b69  d94004               fld dword ptr [eax + 4]
// 00732b6c  d8c9                 fmul st(1)
// 00732b6e  d95c2444             fstp dword ptr [esp + 0x44]
// 00732b72  d94008               fld dword ptr [eax + 8]
// 00732b75  d8c9                 fmul st(1)
// 00732b77  d95c2448             fstp dword ptr [esp + 0x48]
// 00732b7b  d8480c               fmul dword ptr [eax + 0xc]
// 00732b7e  d95c244c             fstp dword ptr [esp + 0x4c]
// 00732b82  d9442440             fld dword ptr [esp + 0x40]
// 00732b86  57                   push edi
// 00732b87  d91f                 fstp dword ptr [edi]
// 00732b89  d9442448             fld dword ptr [esp + 0x48]
// 00732b8d  d95f04               fstp dword ptr [edi + 4]
// 00732b90  d944244c             fld dword ptr [esp + 0x4c]
// 00732b94  d95f08               fstp dword ptr [edi + 8]
// 00732b97  d9442450             fld dword ptr [esp + 0x50]
// 00732b9b  d95f0c               fstp dword ptr [edi + 0xc]
// 00732b9e  ffd3                 call ebx
// 00732ba0  d984248c000000       fld dword ptr [esp + 0x8c]
// 00732ba7  8d542440             lea edx, [esp + 0x40]
// 00732bab  dd05209c7e00         fld qword ptr [0x7e9c20]
// 00732bb1  52                   push edx
// 00732bb2  d8c9                 fmul st(1)
// 00732bb4  8bce                 mov ecx, esi
// 00732bb6  d99c2488000000       fstp dword ptr [esp + 0x88]
// 00732bbd  d9842488000000       fld dword ptr [esp + 0x88]
// 00732bc4  d95c2434             fstp dword ptr [esp + 0x34]
// 00732bc8  dc0d289c7e00         fmul qword ptr [0x7e9c28]
// 00732bce  d95c247c             fstp dword ptr [esp + 0x7c]
// 00732bd2  d944247c             fld dword ptr [esp + 0x7c]
// 00732bd6  d95c2438             fstp dword ptr [esp + 0x38]
// 00732bda  d9442434             fld dword ptr [esp + 0x34]
// 00732bde  d8442454             fadd dword ptr [esp + 0x54]
// 00732be2  d95c2444             fstp dword ptr [esp + 0x44]
// 00732be6  d9442438             fld dword ptr [esp + 0x38]
// 00732bea  d8442458             fadd dword ptr [esp + 0x58]
// 00732bee  d95c2448             fstp dword ptr [esp + 0x48]
// 00732bf2  e8d920d4ff           call 0x474cd0
// 00732bf7  d984248c000000       fld dword ptr [esp + 0x8c]
// 00732bfe  8d442440             lea eax, [esp + 0x40]
// 00732c02  dc0dc8ee7900         fmul qword ptr [0x79eec8]
// 00732c08  50                   push eax
// 00732c09  8bce                 mov ecx, esi
// 00732c0b  d95c246c             fstp dword ptr [esp + 0x6c]
// 00732c0f  d944246c             fld dword ptr [esp + 0x6c]
// 00732c13  d95c2434             fstp dword ptr [esp + 0x34]
// 00732c17  d944247c             fld dword ptr [esp + 0x7c]
// 00732c1b  d95c2438             fstp dword ptr [esp + 0x38]
// 00732c1f  d9442434             fld dword ptr [esp + 0x34]
// 00732c23  d8442454             fadd dword ptr [esp + 0x54]
// 00732c27  d95c2444             fstp dword ptr [esp + 0x44]
// 00732c2b  d9442438             fld dword ptr [esp + 0x38]
// 00732c2f  d8442458             fadd dword ptr [esp + 0x58]
// 00732c33  d95c2448             fstp dword ptr [esp + 0x48]
// 00732c37  e89420d4ff           call 0x474cd0
// 00732c3c  d9842484000000       fld dword ptr [esp + 0x84]
// 00732c43  8d4c2440             lea ecx, [esp + 0x40]
// 00732c47  d95c2430             fstp dword ptr [esp + 0x30]
// 00732c4b  51                   push ecx
// 00732c4c  d9842490000000       fld dword ptr [esp + 0x90]
// 00732c53  8bce                 mov ecx, esi
// 00732c55  dc0d189c7e00         fmul qword ptr [0x7e9c18]
// 00732c5b  d95c247c             fstp dword ptr [esp + 0x7c]
// 00732c5f  d944247c             fld dword ptr [esp + 0x7c]
// 00732c63  d95c2438             fstp dword ptr [esp + 0x38]
// 00732c67  d9442434             fld dword ptr [esp + 0x34]
// 00732c6b  d8442454             fadd dword ptr [esp + 0x54]
// 00732c6f  d95c2444             fstp dword ptr [esp + 0x44]
// 00732c73  d9442438             fld dword ptr [esp + 0x38]
// 00732c77  d8442458             fadd dword ptr [esp + 0x58]
// 00732c7b  d95c2448             fstp dword ptr [esp + 0x48]
// 00732c7f  e84c20d4ff           call 0x474cd0
// 00732c84  d9442468             fld dword ptr [esp + 0x68]
// 00732c88  8d542440             lea edx, [esp + 0x40]
// 00732c8c  d95c2430             fstp dword ptr [esp + 0x30]
// 00732c90  52                   push edx
// 00732c91  d944247c             fld dword ptr [esp + 0x7c]
// 00732c95  8bce                 mov ecx, esi
// 00732c97  d95c2438             fstp dword ptr [esp + 0x38]
// 00732c9b  d9442434             fld dword ptr [esp + 0x34]
// 00732c9f  d8442454             fadd dword ptr [esp + 0x54]
// 00732ca3  d95c2444             fstp dword ptr [esp + 0x44]
// 00732ca7  d9442438             fld dword ptr [esp + 0x38]
// 00732cab  d8442458             fadd dword ptr [esp + 0x58]
// 00732caf  d95c2448             fstp dword ptr [esp + 0x48]
// 00732cb3  e81820d4ff           call 0x474cd0
// 00732cb8  8bce                 mov ecx, esi
// 00732cba  e8512cd4ff           call 0x475910
// 00732cbf  8bce                 mov ecx, esi
// 00732cc1  e8fa70d4ff           call 0x479dc0
// 00732cc6  5f                   pop edi
// 00732cc7  5e                   pop esi
// 00732cc8  5b                   pop ebx
// 00732cc9  8be5                 mov esp, ebp
// 00732ccb  5d                   pop ebp
// 00732ccc  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Draw.cpp (function ?axes@Draw@G3D@@SAXABVCoordinateFrame@2@PAVRenderDevice@2@ABVColor4@2@22M@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/Draw.cpp
