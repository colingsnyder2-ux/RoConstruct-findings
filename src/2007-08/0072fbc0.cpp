// roc 2007-08 0072fbc0  unit: seg_00720000  size: 2461 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0072fbc0
//
// 0072fbc0  55                   push ebp
// 0072fbc1  8bec                 mov ebp, esp
// 0072fbc3  83e4c0               and esp, 0xffffffc0
// 0072fbc6  81ecb4000000         sub esp, 0xb4
// 0072fbcc  53                   push ebx
// 0072fbcd  56                   push esi
// 0072fbce  8b7508               mov esi, dword ptr [ebp + 8]
// 0072fbd1  d94624               fld dword ptr [esi + 0x24]
// 0072fbd4  57                   push edi
// 0072fbd5  d95c2440             fstp dword ptr [esp + 0x40]
// 0072fbd9  8d442430             lea eax, [esp + 0x30]
// 0072fbdd  d94628               fld dword ptr [esi + 0x28]
// 0072fbe0  50                   push eax
// 0072fbe1  6a00                 push 0
// 0072fbe3  d95c244c             fstp dword ptr [esp + 0x4c]
// 0072fbe7  d9462c               fld dword ptr [esi + 0x2c]
// 0072fbea  8d4c2474             lea ecx, [esp + 0x74]
// 0072fbee  51                   push ecx
// 0072fbef  d95c2454             fstp dword ptr [esp + 0x54]
// 0072fbf3  8bce                 mov ecx, esi
// 0072fbf5  e8469addff           call 0x509640
// 0072fbfa  8bc8                 mov ecx, eax
// 0072fbfc  e8ef81dbff           call 0x4e7df0
// 0072fc01  d900                 fld dword ptr [eax]
// 0072fc03  dd05085c7900         fld qword ptr [0x795c08]
// 0072fc09  8d542450             lea edx, [esp + 0x50]
// 0072fc0d  dcc9                 fmul st(1), st(0)
// 0072fc0f  52                   push edx
// 0072fc10  d9c9                 fxch st(1)
// 0072fc12  6a01                 push 1
// 0072fc14  8bce                 mov ecx, esi
// 0072fc16  d95c2458             fstp dword ptr [esp + 0x58]
// 0072fc1a  d94004               fld dword ptr [eax + 4]
// 0072fc1d  d8c9                 fmul st(1)
// 0072fc1f  d95c245c             fstp dword ptr [esp + 0x5c]
// 0072fc23  d84808               fmul dword ptr [eax + 8]
// 0072fc26  8d442464             lea eax, [esp + 0x64]
// 0072fc2a  50                   push eax
// 0072fc2b  d95c2464             fstp dword ptr [esp + 0x64]
// 0072fc2f  d944245c             fld dword ptr [esp + 0x5c]
// 0072fc33  d9451c               fld dword ptr [ebp + 0x1c]
// 0072fc36  d9c0                 fld st(0)
// 0072fc38  deca                 fmulp st(2)
// 0072fc3a  d9c9                 fxch st(1)
// 0072fc3c  d95c243c             fstp dword ptr [esp + 0x3c]
// 0072fc40  d9442460             fld dword ptr [esp + 0x60]
// 0072fc44  d8c9                 fmul st(1)
// 0072fc46  d95c2440             fstp dword ptr [esp + 0x40]
// 0072fc4a  d84c2464             fmul dword ptr [esp + 0x64]
// 0072fc4e  d95c2444             fstp dword ptr [esp + 0x44]
// 0072fc52  e8e999ddff           call 0x509640
// 0072fc57  8bc8                 mov ecx, eax
// 0072fc59  e89281dbff           call 0x4e7df0
// 0072fc5e  d900                 fld dword ptr [eax]
// 0072fc60  dd05085c7900         fld qword ptr [0x795c08]
// 0072fc66  8d4c246c             lea ecx, [esp + 0x6c]
// 0072fc6a  dcc9                 fmul st(1), st(0)
// 0072fc6c  51                   push ecx
// 0072fc6d  d9c9                 fxch st(1)
// 0072fc6f  6a02                 push 2
// 0072fc71  8d942480000000       lea edx, [esp + 0x80]
// 0072fc78  d95c2474             fstp dword ptr [esp + 0x74]
// 0072fc7c  52                   push edx
// 0072fc7d  d94004               fld dword ptr [eax + 4]
// 0072fc80  8bce                 mov ecx, esi
// 0072fc82  d8c9                 fmul st(1)
// 0072fc84  d95c247c             fstp dword ptr [esp + 0x7c]
// 0072fc88  d84808               fmul dword ptr [eax + 8]
// 0072fc8b  d99c2480000000       fstp dword ptr [esp + 0x80]
// 0072fc92  d9442478             fld dword ptr [esp + 0x78]
// 0072fc96  d9451c               fld dword ptr [ebp + 0x1c]
// 0072fc99  d9c0                 fld st(0)
// 0072fc9b  deca                 fmulp st(2)
// 0072fc9d  d9c9                 fxch st(1)
// 0072fc9f  d95c245c             fstp dword ptr [esp + 0x5c]
// 0072fca3  d944247c             fld dword ptr [esp + 0x7c]
// 0072fca7  d8c9                 fmul st(1)
// 0072fca9  d95c2460             fstp dword ptr [esp + 0x60]
// 0072fcad  d88c2480000000       fmul dword ptr [esp + 0x80]
// 0072fcb4  d95c2464             fstp dword ptr [esp + 0x64]
// 0072fcb8  e88399ddff           call 0x509640
// 0072fcbd  8bc8                 mov ecx, eax
// 0072fcbf  e82c81dbff           call 0x4e7df0
// 0072fcc4  d900                 fld dword ptr [eax]
// 0072fcc6  dd05085c7900         fld qword ptr [0x795c08]
// 0072fccc  dcc9                 fmul st(1), st(0)
// 0072fcce  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 0072fcd1  d9c9                 fxch st(1)
// 0072fcd3  8b750c               mov esi, dword ptr [ebp + 0xc]
// 0072fcd6  51                   push ecx
// 0072fcd7  d95c2460             fstp dword ptr [esp + 0x60]
// 0072fcdb  8d4c2444             lea ecx, [esp + 0x44]
// 0072fcdf  d94004               fld dword ptr [eax + 4]
// 0072fce2  d8c9                 fmul st(1)
// 0072fce4  d95c2464             fstp dword ptr [esp + 0x64]
// 0072fce8  d84808               fmul dword ptr [eax + 8]
// 0072fceb  8d442434             lea eax, [esp + 0x34]
// 0072fcef  d95c2468             fstp dword ptr [esp + 0x68]
// 0072fcf3  d9442460             fld dword ptr [esp + 0x60]
// 0072fcf7  d9451c               fld dword ptr [ebp + 0x1c]
// 0072fcfa  d9c0                 fld st(0)
// 0072fcfc  deca                 fmulp st(2)
// 0072fcfe  d9c9                 fxch st(1)
// 0072fd00  d95c2470             fstp dword ptr [esp + 0x70]
// 0072fd04  d9442464             fld dword ptr [esp + 0x64]
// 0072fd08  d8c9                 fmul st(1)
// 0072fd0a  d95c2474             fstp dword ptr [esp + 0x74]
// 0072fd0e  d9442468             fld dword ptr [esp + 0x68]
// 0072fd12  d8c9                 fmul st(1)
// 0072fd14  d95c2478             fstp dword ptr [esp + 0x78]
// 0072fd18  d91c24               fstp dword ptr [esp]
// 0072fd1b  57                   push edi
// 0072fd1c  56                   push esi
// 0072fd1d  50                   push eax
// 0072fd1e  51                   push ecx
// 0072fd1f  e82cfeffff           call 0x72fb50
// 0072fd24  d9451c               fld dword ptr [ebp + 0x1c]
// 0072fd27  8b5d14               mov ebx, dword ptr [ebp + 0x14]
// 0072fd2a  d95c2410             fstp dword ptr [esp + 0x10]
// 0072fd2e  83c410               add esp, 0x10
// 0072fd31  53                   push ebx
// 0072fd32  56                   push esi
// 0072fd33  8d54245c             lea edx, [esp + 0x5c]
// 0072fd37  52                   push edx
// 0072fd38  8d442450             lea eax, [esp + 0x50]
// 0072fd3c  50                   push eax
// 0072fd3d  e80efeffff           call 0x72fb50
// 0072fd42  d9451c               fld dword ptr [ebp + 0x1c]
// 0072fd45  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0072fd48  d95c2410             fstp dword ptr [esp + 0x10]
// 0072fd4c  83c410               add esp, 0x10
// 0072fd4f  51                   push ecx
// 0072fd50  56                   push esi
// 0072fd51  8d542478             lea edx, [esp + 0x78]
// 0072fd55  52                   push edx
// 0072fd56  8d442450             lea eax, [esp + 0x50]
// 0072fd5a  50                   push eax
// 0072fd5b  e8f0fdffff           call 0x72fb50
// 0072fd60  d9442444             fld dword ptr [esp + 0x44]
// 0072fd64  dd05807f7e00         fld qword ptr [0x7e7f80]
// 0072fd6a  83c414               add esp, 0x14
// 0072fd6d  dcc9                 fmul st(1), st(0)
// 0072fd6f  8d4c2430             lea ecx, [esp + 0x30]
// 0072fd73  d9c9                 fxch st(1)
// 0072fd75  51                   push ecx
// 0072fd76  8d9424a4000000       lea edx, [esp + 0xa4]
// 0072fd7d  d95c2460             fstp dword ptr [esp + 0x60]
// 0072fd81  52                   push edx
// 0072fd82  d944243c             fld dword ptr [esp + 0x3c]
// 0072fd86  8bce                 mov ecx, esi
// 0072fd88  d8c9                 fmul st(1)
// 0072fd8a  d95c2468             fstp dword ptr [esp + 0x68]
// 0072fd8e  d84c2440             fmul dword ptr [esp + 0x40]
// 0072fd92  d95c246c             fstp dword ptr [esp + 0x6c]
// 0072fd96  d9442464             fld dword ptr [esp + 0x64]
// 0072fd9a  d8442448             fadd dword ptr [esp + 0x48]
// 0072fd9e  d95c2438             fstp dword ptr [esp + 0x38]
// 0072fda2  d9442468             fld dword ptr [esp + 0x68]
// 0072fda6  d844244c             fadd dword ptr [esp + 0x4c]
// 0072fdaa  d95c243c             fstp dword ptr [esp + 0x3c]
// 0072fdae  d944246c             fld dword ptr [esp + 0x6c]
// 0072fdb2  d8442450             fadd dword ptr [esp + 0x50]
// 0072fdb6  d95c2440             fstp dword ptr [esp + 0x40]
// 0072fdba  e80155d4ff           call 0x4752c0
// 0072fdbf  d9442450             fld dword ptr [esp + 0x50]
// 0072fdc3  dd05807f7e00         fld qword ptr [0x7e7f80]
// 0072fdc9  dcc9                 fmul st(1), st(0)
// 0072fdcb  8d442450             lea eax, [esp + 0x50]
// 0072fdcf  d9c9                 fxch st(1)
// 0072fdd1  50                   push eax
// 0072fdd2  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 0072fdd9  d95c2434             fstp dword ptr [esp + 0x34]
// 0072fddd  51                   push ecx
// 0072fdde  d944245c             fld dword ptr [esp + 0x5c]
// 0072fde2  8bce                 mov ecx, esi
// 0072fde4  d8c9                 fmul st(1)
// 0072fde6  d95c243c             fstp dword ptr [esp + 0x3c]
// 0072fdea  d84c2460             fmul dword ptr [esp + 0x60]
// 0072fdee  d95c2440             fstp dword ptr [esp + 0x40]
// 0072fdf2  d9442438             fld dword ptr [esp + 0x38]
// 0072fdf6  d8442448             fadd dword ptr [esp + 0x48]
// 0072fdfa  d95c2458             fstp dword ptr [esp + 0x58]
// 0072fdfe  d944243c             fld dword ptr [esp + 0x3c]
// 0072fe02  d844244c             fadd dword ptr [esp + 0x4c]
// 0072fe06  d95c245c             fstp dword ptr [esp + 0x5c]
// 0072fe0a  d9442440             fld dword ptr [esp + 0x40]
// 0072fe0e  d8442450             fadd dword ptr [esp + 0x50]
// 0072fe12  d95c2460             fstp dword ptr [esp + 0x60]
// 0072fe16  e8a554d4ff           call 0x4752c0
// 0072fe1b  d944246c             fld dword ptr [esp + 0x6c]
// 0072fe1f  8d542450             lea edx, [esp + 0x50]
// 0072fe23  dd05807f7e00         fld qword ptr [0x7e7f80]
// 0072fe29  52                   push edx
// 0072fe2a  dcc9                 fmul st(1), st(0)
// 0072fe2c  8d842494000000       lea eax, [esp + 0x94]
// 0072fe33  d9c9                 fxch st(1)
// 0072fe35  50                   push eax
// 0072fe36  8bce                 mov ecx, esi
// 0072fe38  d95c2438             fstp dword ptr [esp + 0x38]
// 0072fe3c  d9442478             fld dword ptr [esp + 0x78]
// 0072fe40  d8c9                 fmul st(1)
// 0072fe42  d95c243c             fstp dword ptr [esp + 0x3c]
// 0072fe46  d84c247c             fmul dword ptr [esp + 0x7c]
// 0072fe4a  d95c2440             fstp dword ptr [esp + 0x40]
// 0072fe4e  d9442438             fld dword ptr [esp + 0x38]
// 0072fe52  d8442448             fadd dword ptr [esp + 0x48]
// 0072fe56  d95c2458             fstp dword ptr [esp + 0x58]
// 0072fe5a  d944243c             fld dword ptr [esp + 0x3c]
// 0072fe5e  d844244c             fadd dword ptr [esp + 0x4c]
// 0072fe62  d95c245c             fstp dword ptr [esp + 0x5c]
// 0072fe66  d9442440             fld dword ptr [esp + 0x40]
// 0072fe6a  d8442450             fadd dword ptr [esp + 0x50]
// 0072fe6e  d95c2460             fstp dword ptr [esp + 0x60]
// 0072fe72  e84954d4ff           call 0x4752c0
// 0072fe77  d9ee                 fldz 
// 0072fe79  d89424ac000000       fcom dword ptr [esp + 0xac]
// 0072fe80  dfe0                 fnstsw ax
// 0072fe82  d905787f7e00         fld dword ptr [0x7e7f78]
// 0072fe88  f6c405               test ah, 5
// 0072fe8b  7a1f                 jp 0x72feac
// 0072fe8d  8d4c2440             lea ecx, [esp + 0x40]
// 0072fe91  ddd9                 fstp st(1)
// 0072fe93  51                   push ecx
// 0072fe94  ddd8                 fstp st(0)
// 0072fe96  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 0072fe9d  e86eb1ddff           call 0x50b010
// 0072fea2  d9ee                 fldz 
// 0072fea4  d905787f7e00         fld dword ptr [0x7e7f78]
// 0072feaa  eb0c                 jmp 0x72feb8
// 0072feac  d9542430             fst dword ptr [esp + 0x30]
// 0072feb0  8d442430             lea eax, [esp + 0x30]
// 0072feb4  d9542434             fst dword ptr [esp + 0x34]
// 0072feb8  d900                 fld dword ptr [eax]
// 0072feba  d95c246c             fstp dword ptr [esp + 0x6c]
// 0072febe  d94004               fld dword ptr [eax + 4]
// 0072fec1  d95c2470             fstp dword ptr [esp + 0x70]
// 0072fec5  d9c9                 fxch st(1)
// 0072fec7  d89424bc000000       fcom dword ptr [esp + 0xbc]
// 0072fece  dfe0                 fnstsw ax
// 0072fed0  f6c405               test ah, 5
// 0072fed3  7a1f                 jp 0x72fef4
// 0072fed5  8d542440             lea edx, [esp + 0x40]
// 0072fed9  ddd8                 fstp st(0)
// 0072fedb  52                   push edx
// 0072fedc  ddd8                 fstp st(0)
// 0072fede  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 0072fee5  e826b1ddff           call 0x50b010
// 0072feea  d9ee                 fldz 
// 0072feec  d905787f7e00         fld dword ptr [0x7e7f78]
// 0072fef2  eb0e                 jmp 0x72ff02
// 0072fef4  d9c9                 fxch st(1)
// 0072fef6  8d442430             lea eax, [esp + 0x30]
// 0072fefa  d9542430             fst dword ptr [esp + 0x30]
// 0072fefe  d9542434             fst dword ptr [esp + 0x34]
// 0072ff02  d900                 fld dword ptr [eax]
// 0072ff04  d95c245c             fstp dword ptr [esp + 0x5c]
// 0072ff08  d94004               fld dword ptr [eax + 4]
// 0072ff0b  d95c2460             fstp dword ptr [esp + 0x60]
// 0072ff0f  d984249c000000       fld dword ptr [esp + 0x9c]
// 0072ff16  d8d2                 fcom st(2)
// 0072ff18  dfe0                 fnstsw ax
// 0072ff1a  f6c441               test ah, 0x41
// 0072ff1d  757d                 jne 0x72ff9c
// 0072ff1f  ddda                 fstp st(2)
// 0072ff21  8d442440             lea eax, [esp + 0x40]
// 0072ff25  ddd8                 fstp st(0)
// 0072ff27  50                   push eax
// 0072ff28  8d8c2494000000       lea ecx, [esp + 0x94]
// 0072ff2f  ddd8                 fstp st(0)
// 0072ff31  e8dab0ddff           call 0x50b010
// 0072ff36  d984249c000000       fld dword ptr [esp + 0x9c]
// 0072ff3d  d9ee                 fldz 
// 0072ff3f  d9c9                 fxch st(1)
// 0072ff41  d900                 fld dword ptr [eax]
// 0072ff43  d95c2450             fstp dword ptr [esp + 0x50]
// 0072ff47  d94004               fld dword ptr [eax + 4]
// 0072ff4a  d95c2454             fstp dword ptr [esp + 0x54]
// 0072ff4e  d98424ac000000       fld dword ptr [esp + 0xac]
// 0072ff55  d8d2                 fcom st(2)
// 0072ff57  dfe0                 fnstsw ax
// 0072ff59  d9056c837a00         fld dword ptr [0x7a836c]
// 0072ff5f  f6c441               test ah, 0x41
// 0072ff62  dd05685b7900         fld qword ptr [0x795b68]
// 0072ff68  dd05c8db7900         fld qword ptr [0x79dbc8]
// 0072ff6e  7551                 jne 0x72ffc1
// 0072ff70  d9cb                 fxch st(3)
// 0072ff72  d8c9                 fmul st(1)
// 0072ff74  d9451c               fld dword ptr [ebp + 0x1c]
// 0072ff77  d9c0                 fld st(0)
// 0072ff79  deca                 fmulp st(2)
// 0072ff7b  d9c9                 fxch st(1)
// 0072ff7d  d95c2478             fstp dword ptr [esp + 0x78]
// 0072ff81  d9442478             fld dword ptr [esp + 0x78]
// 0072ff85  d8d4                 fcom st(4)
// 0072ff87  dfe0                 fnstsw ax
// 0072ff89  f6c441               test ah, 0x41
// 0072ff8c  7a1e                 jp 0x72ffac
// 0072ff8e  ddd8                 fstp st(0)
// 0072ff90  d905b07e7900         fld dword ptr [0x797eb0]
// 0072ff96  d95c243c             fstp dword ptr [esp + 0x3c]
// 0072ff9a  eb36                 jmp 0x72ffd2
// 0072ff9c  d9c9                 fxch st(1)
// 0072ff9e  8d442430             lea eax, [esp + 0x30]
// 0072ffa2  d9542430             fst dword ptr [esp + 0x30]
// 0072ffa6  d95c2434             fstp dword ptr [esp + 0x34]
// 0072ffaa  eb95                 jmp 0x72ff41
// 0072ffac  d8d3                 fcom st(3)
// 0072ffae  dfe0                 fnstsw ax
// 0072ffb0  f6c401               test ah, 1
// 0072ffb3  75e1                 jne 0x72ff96
// 0072ffb5  ddd8                 fstp st(0)
// 0072ffb7  d9ca                 fxch st(2)
// 0072ffb9  d954243c             fst dword ptr [esp + 0x3c]
// 0072ffbd  d9ca                 fxch st(2)
// 0072ffbf  eb11                 jmp 0x72ffd2
// 0072ffc1  dddb                 fstp st(3)
// 0072ffc3  d9cc                 fxch st(4)
// 0072ffc5  d954243c             fst dword ptr [esp + 0x3c]
// 0072ffc9  d9451c               fld dword ptr [ebp + 0x1c]
// 0072ffcc  d9c9                 fxch st(1)
// 0072ffce  d9cd                 fxch st(5)
// 0072ffd0  d9c9                 fxch st(1)
// 0072ffd2  d944243c             fld dword ptr [esp + 0x3c]
// 0072ffd6  d95c2468             fstp dword ptr [esp + 0x68]
// 0072ffda  d98424bc000000       fld dword ptr [esp + 0xbc]
// 0072ffe1  d8d6                 fcom st(6)
// 0072ffe3  dfe0                 fnstsw ax
// 0072ffe5  f6c441               test ah, 0x41
// 0072ffe8  7538                 jne 0x730022
// 0072ffea  d8ca                 fmul st(2)
// 0072ffec  d8c9                 fmul st(1)
// 0072ffee  d95c2478             fstp dword ptr [esp + 0x78]
// 0072fff2  d9442478             fld dword ptr [esp + 0x78]
// 0072fff6  d8d4                 fcom st(4)
// 0072fff8  dfe0                 fnstsw ax
// 0072fffa  f6c441               test ah, 0x41
// 0072fffd  7a0e                 jp 0x73000d
// 0072ffff  ddd8                 fstp st(0)
// 00730001  d905b07e7900         fld dword ptr [0x797eb0]
// 00730007  d95c243c             fstp dword ptr [esp + 0x3c]
// 0073000b  eb1f                 jmp 0x73002c
// 0073000d  d8d3                 fcom st(3)
// 0073000f  dfe0                 fnstsw ax
// 00730011  f6c401               test ah, 1
// 00730014  75f1                 jne 0x730007
// 00730016  ddd8                 fstp st(0)
// 00730018  d9ca                 fxch st(2)
// 0073001a  d954243c             fst dword ptr [esp + 0x3c]
// 0073001e  d9ca                 fxch st(2)
// 00730020  eb0a                 jmp 0x73002c
// 00730022  ddd8                 fstp st(0)
// 00730024  d9cd                 fxch st(5)
// 00730026  d954243c             fst dword ptr [esp + 0x3c]
// 0073002a  d9cd                 fxch st(5)
// 0073002c  d944243c             fld dword ptr [esp + 0x3c]
// 00730030  d99c2488000000       fstp dword ptr [esp + 0x88]
// 00730037  d9cc                 fxch st(4)
// 00730039  d8d5                 fcom st(5)
// 0073003b  dfe0                 fnstsw ax
// 0073003d  f6c441               test ah, 0x41
// 00730040  7536                 jne 0x730078
// 00730042  dddd                 fstp st(5)
// 00730044  decc                 fmulp st(4)
// 00730046  d9cb                 fxch st(3)
// 00730048  deca                 fmulp st(2)
// 0073004a  d9c9                 fxch st(1)
// 0073004c  d95c2478             fstp dword ptr [esp + 0x78]
// 00730050  d9442478             fld dword ptr [esp + 0x78]
// 00730054  d8d1                 fcom st(1)
// 00730056  dfe0                 fnstsw ax
// 00730058  ddd9                 fstp st(1)
// 0073005a  f6c441               test ah, 0x41
// 0073005d  7a0c                 jp 0x73006b
// 0073005f  ddd8                 fstp st(0)
// 00730061  ddd8                 fstp st(0)
// 00730063  d905b07e7900         fld dword ptr [0x797eb0]
// 00730069  eb17                 jmp 0x730082
// 0073006b  d8d1                 fcom st(1)
// 0073006d  dfe0                 fnstsw ax
// 0073006f  f6c401               test ah, 1
// 00730072  740c                 je 0x730080
// 00730074  ddd9                 fstp st(1)
// 00730076  eb0a                 jmp 0x730082
// 00730078  dddc                 fstp st(4)
// 0073007a  ddd8                 fstp st(0)
// 0073007c  ddd9                 fstp st(1)
// 0073007e  ddd8                 fstp st(0)
// 00730080  ddd8                 fstp st(0)
// 00730082  d95c243c             fstp dword ptr [esp + 0x3c]
// 00730086  8bce                 mov ecx, esi
// 00730088  d944243c             fld dword ptr [esp + 0x3c]
// 0073008c  d99c248c000000       fstp dword ptr [esp + 0x8c]
// 00730093  e8389cd4ff           call 0x479cd0
// 00730098  6a02                 push 2
// 0073009a  6a01                 push 1
// 0073009c  6a00                 push 0
// 0073009e  8bce                 mov ecx, esi
// 007300a0  e8cb40d4ff           call 0x474170
// 007300a5  dd05085c7900         fld qword ptr [0x795c08]
// 007300ab  83ec08               sub esp, 8
// 007300ae  8bce                 mov ecx, esi
// 007300b0  dd1c24               fstp qword ptr [esp]
// 007300b3  e81842d4ff           call 0x4742d0
// 007300b8  6a00                 push 0
// 007300ba  8bce                 mov ecx, esi
// 007300bc  e87f7dd4ff           call 0x477e40
// 007300c1  d907                 fld dword ptr [edi]
// 007300c3  dd0510367900         fld qword ptr [0x793610]
// 007300c9  dcc9                 fmul st(1), st(0)
// 007300cb  d9c9                 fxch st(1)
// 007300cd  d95c2440             fstp dword ptr [esp + 0x40]
// 007300d1  d94704               fld dword ptr [edi + 4]
// 007300d4  d8c9                 fmul st(1)
// 007300d6  d95c2444             fstp dword ptr [esp + 0x44]
// 007300da  d94708               fld dword ptr [edi + 8]
// 007300dd  d8c9                 fmul st(1)
// 007300df  d95c2448             fstp dword ptr [esp + 0x48]
// 007300e3  d84f0c               fmul dword ptr [edi + 0xc]
// 007300e6  8dbea8040000         lea edi, [esi + 0x4a8]
// 007300ec  57                   push edi
// 007300ed  d95c2450             fstp dword ptr [esp + 0x50]
// 007300f1  d9442444             fld dword ptr [esp + 0x44]
// 007300f5  d91f                 fstp dword ptr [edi]
// 007300f7  d9442448             fld dword ptr [esp + 0x48]
// 007300fb  d95f04               fstp dword ptr [edi + 4]
// 007300fe  d944244c             fld dword ptr [esp + 0x4c]
// 00730102  d95f08               fstp dword ptr [edi + 8]
// 00730105  d9442450             fld dword ptr [esp + 0x50]
// 00730109  d95f0c               fstp dword ptr [edi + 0xc]
// 0073010c  ff150ceb7700         call dword ptr [0x77eb0c]
// 00730112  d9442468             fld dword ptr [esp + 0x68]
// 00730116  8d4c2430             lea ecx, [esp + 0x30]
// 0073011a  dd05f82a7900         fld qword ptr [0x792af8]
// 00730120  51                   push ecx
// 00730121  d8c9                 fmul st(1)
// 00730123  8bce                 mov ecx, esi
// 00730125  d99c2488000000       fstp dword ptr [esp + 0x88]
// 0073012c  d9842488000000       fld dword ptr [esp + 0x88]
// 00730133  d95c247c             fstp dword ptr [esp + 0x7c]
// 00730137  dc0d707f7e00         fmul qword ptr [0x7e7f70]
// 0073013d  d95c2440             fstp dword ptr [esp + 0x40]
// 00730141  d9442440             fld dword ptr [esp + 0x40]
// 00730145  d99c2480000000       fstp dword ptr [esp + 0x80]
// 0073014c  d944247c             fld dword ptr [esp + 0x7c]
// 00730150  d8442470             fadd dword ptr [esp + 0x70]
// 00730154  d95c2434             fstp dword ptr [esp + 0x34]
// 00730158  d9842480000000       fld dword ptr [esp + 0x80]
// 0073015f  d8442474             fadd dword ptr [esp + 0x74]
// 00730163  d95c2438             fstp dword ptr [esp + 0x38]
// 00730167  e8644ad4ff           call 0x474bd0
// 0073016c  d9442468             fld dword ptr [esp + 0x68]
// 00730170  8d542440             lea edx, [esp + 0x40]
// 00730174  dd05687f7e00         fld qword ptr [0x7e7f68]
// 0073017a  52                   push edx
// 0073017b  d8c9                 fmul st(1)
// 0073017d  8bce                 mov ecx, esi
// 0073017f  d95c246c             fstp dword ptr [esp + 0x6c]
// 00730183  d944246c             fld dword ptr [esp + 0x6c]
// 00730187  d95c2434             fstp dword ptr [esp + 0x34]
// 0073018b  dc0d607f7e00         fmul qword ptr [0x7e7f60]
// 00730191  d95c247c             fstp dword ptr [esp + 0x7c]
// 00730195  d944247c             fld dword ptr [esp + 0x7c]
// 00730199  d95c2438             fstp dword ptr [esp + 0x38]
// 0073019d  d9442434             fld dword ptr [esp + 0x34]
// 007301a1  d8442470             fadd dword ptr [esp + 0x70]
// 007301a5  d95c2444             fstp dword ptr [esp + 0x44]
// 007301a9  d9442438             fld dword ptr [esp + 0x38]
// 007301ad  d8442474             fadd dword ptr [esp + 0x74]
// 007301b1  d95c2448             fstp dword ptr [esp + 0x48]
// 007301b5  e8164ad4ff           call 0x474bd0
// 007301ba  d9442468             fld dword ptr [esp + 0x68]
// 007301be  d95c2430             fstp dword ptr [esp + 0x30]
// 007301c2  8d442440             lea eax, [esp + 0x40]
// 007301c6  d944243c             fld dword ptr [esp + 0x3c]
// 007301ca  50                   push eax
// 007301cb  d95c2438             fstp dword ptr [esp + 0x38]
// 007301cf  8bce                 mov ecx, esi
// 007301d1  d9442434             fld dword ptr [esp + 0x34]
// 007301d5  d8442470             fadd dword ptr [esp + 0x70]
// 007301d9  d95c2444             fstp dword ptr [esp + 0x44]
// 007301dd  d9442438             fld dword ptr [esp + 0x38]
// 007301e1  d8442474             fadd dword ptr [esp + 0x74]
// 007301e5  d95c2448             fstp dword ptr [esp + 0x48]
// 007301e9  e8e249d4ff           call 0x474bd0
// 007301ee  d9842484000000       fld dword ptr [esp + 0x84]
// 007301f5  8d4c2440             lea ecx, [esp + 0x40]
// 007301f9  d95c2430             fstp dword ptr [esp + 0x30]
// 007301fd  51                   push ecx
// 007301fe  d944247c             fld dword ptr [esp + 0x7c]
// 00730202  8bce                 mov ecx, esi
// 00730204  d95c2438             fstp dword ptr [esp + 0x38]
// 00730208  d9442434             fld dword ptr [esp + 0x34]
// 0073020c  d8442470             fadd dword ptr [esp + 0x70]
// 00730210  d95c2444             fstp dword ptr [esp + 0x44]
// 00730214  d9442438             fld dword ptr [esp + 0x38]
// 00730218  d8442474             fadd dword ptr [esp + 0x74]
// 0073021c  d95c2448             fstp dword ptr [esp + 0x48]
// 00730220  e8ab49d4ff           call 0x474bd0
// 00730225  d903                 fld dword ptr [ebx]
// 00730227  57                   push edi
// 00730228  dd0510367900         fld qword ptr [0x793610]
// 0073022e  dcc9                 fmul st(1), st(0)
// 00730230  d9c9                 fxch st(1)
// 00730232  d95c2444             fstp dword ptr [esp + 0x44]
// 00730236  d94304               fld dword ptr [ebx + 4]
// 00730239  d8c9                 fmul st(1)
// 0073023b  d95c2448             fstp dword ptr [esp + 0x48]
// 0073023f  d94308               fld dword ptr [ebx + 8]
// 00730242  d8c9                 fmul st(1)
// 00730244  d95c244c             fstp dword ptr [esp + 0x4c]
// 00730248  d84b0c               fmul dword ptr [ebx + 0xc]
// 0073024b  8b1d0ceb7700         mov ebx, dword ptr [0x77eb0c]
// 00730251  d95c2450             fstp dword ptr [esp + 0x50]
// 00730255  d9442444             fld dword ptr [esp + 0x44]
// 00730259  d91f                 fstp dword ptr [edi]
// 0073025b  d9442448             fld dword ptr [esp + 0x48]
// 0073025f  d95f04               fstp dword ptr [edi + 4]
// 00730262  d944244c             fld dword ptr [esp + 0x4c]
// 00730266  d95f08               fstp dword ptr [edi + 8]
// 00730269  d9442450             fld dword ptr [esp + 0x50]
// 0073026d  d95f0c               fstp dword ptr [edi + 0xc]
// 00730270  ffd3                 call ebx
// 00730272  d9842488000000       fld dword ptr [esp + 0x88]
// 00730279  8d542440             lea edx, [esp + 0x40]
// 0073027d  dd05f82a7900         fld qword ptr [0x792af8]
// 00730283  52                   push edx
// 00730284  d8c9                 fmul st(1)
// 00730286  8bce                 mov ecx, esi
// 00730288  d95c2434             fstp dword ptr [esp + 0x34]
// 0073028c  dc0d707f7e00         fmul qword ptr [0x7e7f70]
// 00730292  d95c247c             fstp dword ptr [esp + 0x7c]
// 00730296  d944247c             fld dword ptr [esp + 0x7c]
// 0073029a  d95c2438             fstp dword ptr [esp + 0x38]
// 0073029e  d9442434             fld dword ptr [esp + 0x34]
// 007302a2  d8442460             fadd dword ptr [esp + 0x60]
// 007302a6  d95c2444             fstp dword ptr [esp + 0x44]
// 007302aa  d9442438             fld dword ptr [esp + 0x38]
// 007302ae  d8442464             fadd dword ptr [esp + 0x64]
// 007302b2  d95c2448             fstp dword ptr [esp + 0x48]
// 007302b6  e81549d4ff           call 0x474bd0
// 007302bb  d9842488000000       fld dword ptr [esp + 0x88]
// 007302c2  dc0de0fe7800         fmul qword ptr [0x78fee0]
// 007302c8  d95c243c             fstp dword ptr [esp + 0x3c]
// 007302cc  d944243c             fld dword ptr [esp + 0x3c]
// 007302d0  d9542430             fst dword ptr [esp + 0x30]
// 007302d4  d95c2434             fstp dword ptr [esp + 0x34]
// 007302d8  d9442430             fld dword ptr [esp + 0x30]
// 007302dc  d844245c             fadd dword ptr [esp + 0x5c]
// 007302e0  d95c2440             fstp dword ptr [esp + 0x40]
// 007302e4  d9442434             fld dword ptr [esp + 0x34]
// 007302e8  d8442460             fadd dword ptr [esp + 0x60]
// 007302ec  8d442440             lea eax, [esp + 0x40]
// 007302f0  50                   push eax
// 007302f1  8bce                 mov ecx, esi
// 007302f3  d95c2448             fstp dword ptr [esp + 0x48]
// 007302f7  e8d448d4ff           call 0x474bd0
// 007302fc  d944243c             fld dword ptr [esp + 0x3c]
// 00730300  8d4c2440             lea ecx, [esp + 0x40]
// 00730304  d9542430             fst dword ptr [esp + 0x30]
// 00730308  51                   push ecx
// 00730309  d95c2438             fstp dword ptr [esp + 0x38]
// 0073030d  8bce                 mov ecx, esi
// 0073030f  d9442434             fld dword ptr [esp + 0x34]
// 00730313  d8442460             fadd dword ptr [esp + 0x60]
// 00730317  d95c2444             fstp dword ptr [esp + 0x44]
// 0073031b  d9442438             fld dword ptr [esp + 0x38]
// 0073031f  d8442464             fadd dword ptr [esp + 0x64]
// 00730323  d95c2448             fstp dword ptr [esp + 0x48]
// 00730327  e8a448d4ff           call 0x474bd0
// 0073032c  d944243c             fld dword ptr [esp + 0x3c]
// 00730330  8d542440             lea edx, [esp + 0x40]
// 00730334  d95c2430             fstp dword ptr [esp + 0x30]
// 00730338  52                   push edx
// 00730339  d984248c000000       fld dword ptr [esp + 0x8c]
// 00730340  8bce                 mov ecx, esi
// 00730342  dc0d607f7e00         fmul qword ptr [0x7e7f60]
// 00730348  d95c2438             fstp dword ptr [esp + 0x38]
// 0073034c  d9442434             fld dword ptr [esp + 0x34]
// 00730350  d8442460             fadd dword ptr [esp + 0x60]
// 00730354  d95c2444             fstp dword ptr [esp + 0x44]
// 00730358  d9442438             fld dword ptr [esp + 0x38]
// 0073035c  d8442464             fadd dword ptr [esp + 0x64]
// 00730360  d95c2448             fstp dword ptr [esp + 0x48]
// 00730364  e86748d4ff           call 0x474bd0
// 00730369  d9842488000000       fld dword ptr [esp + 0x88]
// 00730370  8d442440             lea eax, [esp + 0x40]
// 00730374  dc0d687f7e00         fmul qword ptr [0x7e7f68]
// 0073037a  50                   push eax
// 0073037b  8bce                 mov ecx, esi
// 0073037d  d95c2434             fstp dword ptr [esp + 0x34]
// 00730381  d944247c             fld dword ptr [esp + 0x7c]
// 00730385  d95c2438             fstp dword ptr [esp + 0x38]
// 00730389  d9442434             fld dword ptr [esp + 0x34]
// 0073038d  d8442460             fadd dword ptr [esp + 0x60]
// 00730391  d95c2444             fstp dword ptr [esp + 0x44]
// 00730395  d9442438             fld dword ptr [esp + 0x38]
// 00730399  d8442464             fadd dword ptr [esp + 0x64]
// 0073039d  d95c2448             fstp dword ptr [esp + 0x48]
// 007303a1  e82a48d4ff           call 0x474bd0
// 007303a6  d944243c             fld dword ptr [esp + 0x3c]
// 007303aa  8d4c2440             lea ecx, [esp + 0x40]
// 007303ae  d9542430             fst dword ptr [esp + 0x30]
// 007303b2  51                   push ecx
// 007303b3  d95c2438             fstp dword ptr [esp + 0x38]
// 007303b7  8bce                 mov ecx, esi
// 007303b9  d9442434             fld dword ptr [esp + 0x34]
// 007303bd  d8442460             fadd dword ptr [esp + 0x60]
// 007303c1  d95c2444             fstp dword ptr [esp + 0x44]
// 007303c5  d9442438             fld dword ptr [esp + 0x38]
// 007303c9  d8442464             fadd dword ptr [esp + 0x64]
// 007303cd  d95c2448             fstp dword ptr [esp + 0x48]
// 007303d1  e8fa47d4ff           call 0x474bd0
// 007303d6  8bce                 mov ecx, esi
// 007303d8  e81354d4ff           call 0x4757f0
// 007303dd  6a01                 push 1
// 007303df  8bce                 mov ecx, esi
// 007303e1  e85a7ad4ff           call 0x477e40
// 007303e6  8b4518               mov eax, dword ptr [ebp + 0x18]
// 007303e9  d900                 fld dword ptr [eax]
// 007303eb  dd0510367900         fld qword ptr [0x793610]
// 007303f1  dcc9                 fmul st(1), st(0)
// 007303f3  d9c9                 fxch st(1)
// 007303f5  d95c2440             fstp dword ptr [esp + 0x40]
// 007303f9  d94004               fld dword ptr [eax + 4]
// 007303fc  d8c9                 fmul st(1)
// 007303fe  d95c2444             fstp dword ptr [esp + 0x44]
// 00730402  d94008               fld dword ptr [eax + 8]
// 00730405  d8c9                 fmul st(1)
// 00730407  d95c2448             fstp dword ptr [esp + 0x48]
// 0073040b  d8480c               fmul dword ptr [eax + 0xc]
// 0073040e  d95c244c             fstp dword ptr [esp + 0x4c]
// 00730412  d9442440             fld dword ptr [esp + 0x40]
// 00730416  57                   push edi
// 00730417  d91f                 fstp dword ptr [edi]
// 00730419  d9442448             fld dword ptr [esp + 0x48]
// 0073041d  d95f04               fstp dword ptr [edi + 4]
// 00730420  d944244c             fld dword ptr [esp + 0x4c]
// 00730424  d95f08               fstp dword ptr [edi + 8]
// 00730427  d9442450             fld dword ptr [esp + 0x50]
// 0073042b  d95f0c               fstp dword ptr [edi + 0xc]
// 0073042e  ffd3                 call ebx
// 00730430  d984248c000000       fld dword ptr [esp + 0x8c]
// 00730437  8d542440             lea edx, [esp + 0x40]
// 0073043b  dd05687f7e00         fld qword ptr [0x7e7f68]
// 00730441  52                   push edx
// 00730442  d8c9                 fmul st(1)
// 00730444  8bce                 mov ecx, esi
// 00730446  d99c2488000000       fstp dword ptr [esp + 0x88]
// 0073044d  d9842488000000       fld dword ptr [esp + 0x88]
// 00730454  d95c2434             fstp dword ptr [esp + 0x34]
// 00730458  dc0d707f7e00         fmul qword ptr [0x7e7f70]
// 0073045e  d95c247c             fstp dword ptr [esp + 0x7c]
// 00730462  d944247c             fld dword ptr [esp + 0x7c]
// 00730466  d95c2438             fstp dword ptr [esp + 0x38]
// 0073046a  d9442434             fld dword ptr [esp + 0x34]
// 0073046e  d8442454             fadd dword ptr [esp + 0x54]
// 00730472  d95c2444             fstp dword ptr [esp + 0x44]
// 00730476  d9442438             fld dword ptr [esp + 0x38]
// 0073047a  d8442458             fadd dword ptr [esp + 0x58]
// 0073047e  d95c2448             fstp dword ptr [esp + 0x48]
// 00730482  e84947d4ff           call 0x474bd0
// 00730487  d984248c000000       fld dword ptr [esp + 0x8c]
// 0073048e  8d442440             lea eax, [esp + 0x40]
// 00730492  dc0df82a7900         fmul qword ptr [0x792af8]
// 00730498  50                   push eax
// 00730499  8bce                 mov ecx, esi
// 0073049b  d95c246c             fstp dword ptr [esp + 0x6c]
// 0073049f  d944246c             fld dword ptr [esp + 0x6c]
// 007304a3  d95c2434             fstp dword ptr [esp + 0x34]
// 007304a7  d944247c             fld dword ptr [esp + 0x7c]
// 007304ab  d95c2438             fstp dword ptr [esp + 0x38]
// 007304af  d9442434             fld dword ptr [esp + 0x34]
// 007304b3  d8442454             fadd dword ptr [esp + 0x54]
// 007304b7  d95c2444             fstp dword ptr [esp + 0x44]
// 007304bb  d9442438             fld dword ptr [esp + 0x38]
// 007304bf  d8442458             fadd dword ptr [esp + 0x58]
// 007304c3  d95c2448             fstp dword ptr [esp + 0x48]
// 007304c7  e80447d4ff           call 0x474bd0
// 007304cc  d9842484000000       fld dword ptr [esp + 0x84]
// 007304d3  8d4c2440             lea ecx, [esp + 0x40]
// 007304d7  d95c2430             fstp dword ptr [esp + 0x30]
// 007304db  51                   push ecx
// 007304dc  d9842490000000       fld dword ptr [esp + 0x90]
// 007304e3  8bce                 mov ecx, esi
// 007304e5  dc0d607f7e00         fmul qword ptr [0x7e7f60]
// 007304eb  d95c247c             fstp dword ptr [esp + 0x7c]
// 007304ef  d944247c             fld dword ptr [esp + 0x7c]
// 007304f3  d95c2438             fstp dword ptr [esp + 0x38]
// 007304f7  d9442434             fld dword ptr [esp + 0x34]
// 007304fb  d8442454             fadd dword ptr [esp + 0x54]
// 007304ff  d95c2444             fstp dword ptr [esp + 0x44]
// 00730503  d9442438             fld dword ptr [esp + 0x38]
// 00730507  d8442458             fadd dword ptr [esp + 0x58]
// 0073050b  d95c2448             fstp dword ptr [esp + 0x48]
// 0073050f  e8bc46d4ff           call 0x474bd0
// 00730514  d9442468             fld dword ptr [esp + 0x68]
// 00730518  8d542440             lea edx, [esp + 0x40]
// 0073051c  d95c2430             fstp dword ptr [esp + 0x30]
// 00730520  52                   push edx
// 00730521  d944247c             fld dword ptr [esp + 0x7c]
// 00730525  8bce                 mov ecx, esi
// 00730527  d95c2438             fstp dword ptr [esp + 0x38]
// 0073052b  d9442434             fld dword ptr [esp + 0x34]
// 0073052f  d8442454             fadd dword ptr [esp + 0x54]
// 00730533  d95c2444             fstp dword ptr [esp + 0x44]
// 00730537  d9442438             fld dword ptr [esp + 0x38]
// 0073053b  d8442458             fadd dword ptr [esp + 0x58]
// 0073053f  d95c2448             fstp dword ptr [esp + 0x48]
// 00730543  e88846d4ff           call 0x474bd0
// 00730548  8bce                 mov ecx, esi
// 0073054a  e8a152d4ff           call 0x4757f0
// 0073054f  8bce                 mov ecx, esi
// 00730551  e81a97d4ff           call 0x479c70
// 00730556  5f                   pop edi
// 00730557  5e                   pop esi
// 00730558  5b                   pop ebx
// 00730559  8be5                 mov esp, ebp
// 0073055b  5d                   pop ebp
// 0073055c  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Draw.cpp (function ?axes@Draw@G3D@@SAXABVCoordinateFrame@2@PAVRenderDevice@2@ABVColor4@2@22M@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/Draw.cpp
