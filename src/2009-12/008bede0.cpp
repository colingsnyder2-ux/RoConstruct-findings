// roc 2009-12 008bede0  unit: CXTPDockingPaneContext  size: 586 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008bede0
//
// 008bede0  83ec20               sub esp, 0x20
// 008bede3  dd0598979e00         fld qword ptr [0x9e9798]
// 008bede9  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008beded  53                   push ebx
// 008bedee  dd5c2404             fstp qword ptr [esp + 4]
// 008bedf2  d9e8                 fld1 
// 008bedf4  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 008bedf8  55                   push ebp
// 008bedf9  dd5c2410             fstp qword ptr [esp + 0x10]
// 008bedfd  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008bee01  56                   push esi
// 008bee02  57                   push edi
// 008bee03  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 008bee07  8bf1                 mov esi, ecx
// 008bee09  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008bee0d  85ff                 test edi, edi
// 008bee0f  7439                 je 0x8bee4a
// 008bee11  83be4801000000       cmp dword ptr [esi + 0x148], 0
// 008bee18  7530                 jne 0x8bee4a
// 008bee1a  8bc2                 mov eax, edx
// 008bee1c  2bc5                 sub eax, ebp
// 008bee1e  83f801               cmp eax, 1
// 008bee21  89442410             mov dword ptr [esp + 0x10], eax
// 008bee25  7e19                 jle 0x8bee40
// 008bee27  8bc1                 mov eax, ecx
// 008bee29  2bc3                 sub eax, ebx
// 008bee2b  83f801               cmp eax, 1
// 008bee2e  89442450             mov dword ptr [esp + 0x50], eax
// 008bee32  7e0c                 jle 0x8bee40
// 008bee34  db442450             fild dword ptr [esp + 0x50]
// 008bee38  da742410             fidiv dword ptr [esp + 0x10]
// 008bee3c  dd5c2418             fstp qword ptr [esp + 0x18]
// 008bee40  dd05a087a000         fld qword ptr [0xa087a0]
// 008bee46  dd5c2410             fstp qword ptr [esp + 0x10]
// 008bee4a  8bc1                 mov eax, ecx
// 008bee4c  2bc3                 sub eax, ebx
// 008bee4e  7423                 je 0x8bee73
// 008bee50  8bc2                 mov eax, edx
// 008bee52  2bc5                 sub eax, ebp
// 008bee54  741d                 je 0x8bee73
// 008bee56  85ff                 test edi, edi
// 008bee58  7425                 je 0x8bee7f
// 008bee5a  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008bee5e  8b542444             mov edx, dword ptr [esp + 0x44]
// 008bee62  51                   push ecx
// 008bee63  52                   push edx
// 008bee64  8d44243c             lea eax, [esp + 0x3c]
// 008bee68  50                   push eax
// 008bee69  ff155cca9800         call dword ptr [0x98ca5c]
// 008bee6f  85c0                 test eax, eax
// 008bee71  7541                 jne 0x8beeb4
// 008bee73  5f                   pop edi
// 008bee74  5e                   pop esi
// 008bee75  5d                   pop ebp
// 008bee76  33c0                 xor eax, eax
// 008bee78  5b                   pop ebx
// 008bee79  83c420               add esp, 0x20
// 008bee7c  c22000               ret 0x20
// 008bee7f  83c114               add ecx, 0x14
// 008bee82  83c214               add edx, 0x14
// 008bee85  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008bee89  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008bee8d  89542428             mov dword ptr [esp + 0x28], edx
// 008bee91  8b542444             mov edx, dword ptr [esp + 0x44]
// 008bee95  51                   push ecx
// 008bee96  52                   push edx
// 008bee97  8d442428             lea eax, [esp + 0x28]
// 008bee9b  83c5ec               add ebp, -0x14
// 008bee9e  83c3ec               add ebx, -0x14
// 008beea1  50                   push eax
// 008beea2  896c242c             mov dword ptr [esp + 0x2c], ebp
// 008beea6  895c2430             mov dword ptr [esp + 0x30], ebx
// 008beeaa  ff155cca9800         call dword ptr [0x98ca5c]
// 008beeb0  85c0                 test eax, eax
// 008beeb2  74bf                 je 0x8bee73
// 008beeb4  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 008beeb8  33db                 xor ebx, ebx
// 008beeba  85ff                 test edi, edi
// 008beebc  0f95c3               setne bl
// 008beebf  8bcd                 mov ecx, ebp
// 008beec1  2b4c2438             sub ecx, dword ptr [esp + 0x38]
// 008beec5  33ff                 xor edi, edi
// 008beec7  8bc1                 mov eax, ecx
// 008beec9  99                   cdq 
// 008beeca  33c2                 xor eax, edx
// 008beecc  2bc2                 sub eax, edx
// 008beece  89442450             mov dword ptr [esp + 0x50], eax
// 008beed2  8d5c1bff             lea ebx, [ebx + ebx - 1]
// 008beed6  db442450             fild dword ptr [esp + 0x50]
// 008beeda  dd442410             fld qword ptr [esp + 0x10]
// 008beede  d8d1                 fcom st(1)
// 008beee0  dfe0                 fnstsw ax
// 008beee2  f6c441               test ah, 0x41
// 008beee5  751a                 jne 0x8bef01
// 008beee7  0fafcb               imul ecx, ebx
// 008beeea  85c9                 test ecx, ecx
// 008beeec  7c13                 jl 0x8bef01
// 008beeee  ddd8                 fstp st(0)
// 008beef0  c7868801000002000000 mov dword ptr [esi + 0x188], 2
// 008beefa  bf01000000           mov edi, 1
// 008beeff  eb02                 jmp 0x8bef03
// 008bef01  ddd9                 fstp st(1)
// 008bef03  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008bef07  2bcd                 sub ecx, ebp
// 008bef09  8bc1                 mov eax, ecx
// 008bef0b  99                   cdq 
// 008bef0c  33c2                 xor eax, edx
// 008bef0e  2bc2                 sub eax, edx
// 008bef10  89442450             mov dword ptr [esp + 0x50], eax
// 008bef14  db442450             fild dword ptr [esp + 0x50]
// 008bef18  d8d1                 fcom st(1)
// 008bef1a  dfe0                 fnstsw ax
// 008bef1c  f6c405               test ah, 5
// 008bef1f  7a1a                 jp 0x8bef3b
// 008bef21  0fafcb               imul ecx, ebx
// 008bef24  85c9                 test ecx, ecx
// 008bef26  7c13                 jl 0x8bef3b
// 008bef28  ddd9                 fstp st(1)
// 008bef2a  c7868801000003000000 mov dword ptr [esi + 0x188], 3
// 008bef34  bf01000000           mov edi, 1
// 008bef39  eb02                 jmp 0x8bef3d
// 008bef3b  ddd8                 fstp st(0)
// 008bef3d  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 008bef41  8bcd                 mov ecx, ebp
// 008bef43  2b4c2434             sub ecx, dword ptr [esp + 0x34]
// 008bef47  8bc1                 mov eax, ecx
// 008bef49  99                   cdq 
// 008bef4a  33c2                 xor eax, edx
// 008bef4c  2bc2                 sub eax, edx
// 008bef4e  89442450             mov dword ptr [esp + 0x50], eax
// 008bef52  db442450             fild dword ptr [esp + 0x50]
// 008bef56  dd442418             fld qword ptr [esp + 0x18]
// 008bef5a  dcc9                 fmul st(1), st(0)
// 008bef5c  d9c9                 fxch st(1)
// 008bef5e  d8d2                 fcom st(2)
// 008bef60  dfe0                 fnstsw ax
// 008bef62  f6c405               test ah, 5
// 008bef65  7a1a                 jp 0x8bef81
// 008bef67  0fafcb               imul ecx, ebx
// 008bef6a  85c9                 test ecx, ecx
// 008bef6c  7c13                 jl 0x8bef81
// 008bef6e  ddda                 fstp st(2)
// 008bef70  c7868801000000000000 mov dword ptr [esi + 0x188], 0
// 008bef7a  bf01000000           mov edi, 1
// 008bef7f  eb02                 jmp 0x8bef83
// 008bef81  ddd8                 fstp st(0)
// 008bef83  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008bef87  2bcd                 sub ecx, ebp
// 008bef89  8bc1                 mov eax, ecx
// 008bef8b  99                   cdq 
// 008bef8c  33c2                 xor eax, edx
// 008bef8e  2bc2                 sub eax, edx
// 008bef90  89442450             mov dword ptr [esp + 0x50], eax
// 008bef94  db442450             fild dword ptr [esp + 0x50]
// 008bef98  dec9                 fmulp st(1)
// 008bef9a  ded9                 fcompp 
// 008bef9c  dfe0                 fnstsw ax
// 008bef9e  f6c405               test ah, 5
// 008befa1  7a14                 jp 0x8befb7
// 008befa3  0fafcb               imul ecx, ebx
// 008befa6  85c9                 test ecx, ecx
// 008befa8  7c0d                 jl 0x8befb7
// 008befaa  bf01000000           mov edi, 1
// 008befaf  89be88010000         mov dword ptr [esi + 0x188], edi
// 008befb5  eb04                 jmp 0x8befbb
// 008befb7  85ff                 test edi, edi
// 008befb9  7463                 je 0x8bf01e
// 008befbb  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 008befc1  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 008befc5  51                   push ecx
// 008befc6  53                   push ebx
// 008befc7  8bce                 mov ecx, esi
// 008befc9  e8b2f6ffff           call 0x8be680
// 008befce  85c0                 test eax, eax
// 008befd0  0f849dfeffff         je 0x8bee73
// 008befd6  8b9688010000         mov edx, dword ptr [esi + 0x188]
// 008befdc  8b8620010000         mov eax, dword ptr [esi + 0x120]
// 008befe2  53                   push ebx
// 008befe3  52                   push edx
// 008befe4  50                   push eax
// 008befe5  8d4c242c             lea ecx, [esp + 0x2c]
// 008befe9  51                   push ecx
// 008befea  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 008beff0  e87b9df7ff           call 0x838d70
// 008beff5  8b10                 mov edx, dword ptr [eax]
// 008beff7  899630010000         mov dword ptr [esi + 0x130], edx
// 008beffd  8b4804               mov ecx, dword ptr [eax + 4]
// 008bf000  898e34010000         mov dword ptr [esi + 0x134], ecx
// 008bf006  8b5008               mov edx, dword ptr [eax + 8]
// 008bf009  899638010000         mov dword ptr [esi + 0x138], edx
// 008bf00f  8b400c               mov eax, dword ptr [eax + 0xc]
// 008bf012  89863c010000         mov dword ptr [esi + 0x13c], eax
// 008bf018  899e2c010000         mov dword ptr [esi + 0x12c], ebx
// 008bf01e  8bc7                 mov eax, edi
// 008bf020  5f                   pop edi
// 008bf021  5e                   pop esi
// 008bf022  5d                   pop ebp
// 008bf023  5b                   pop ebx
// 008bf024  83c420               add esp, 0x20
// 008bf027  c22000               ret 0x20
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?CanDock@CXTPDockingPaneContext@@IAEHVCRect@@VCPoint@@PAVCXTPDockingPaneBase@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp
