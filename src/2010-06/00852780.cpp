// roc 2010-06 00852780  unit: CXTPReportPaintManager  size: 711 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00852780
//
// 00852780  6aff                 push -1
// 00852782  68c67d9b00           push 0x9b7dc6
// 00852787  64a100000000         mov eax, dword ptr fs:[0]
// 0085278d  50                   push eax
// 0085278e  83ec1c               sub esp, 0x1c
// 00852791  53                   push ebx
// 00852792  55                   push ebp
// 00852793  56                   push esi
// 00852794  57                   push edi
// 00852795  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0085279a  33c4                 xor eax, esp
// 0085279c  50                   push eax
// 0085279d  8d442430             lea eax, [esp + 0x30]
// 008527a1  64a300000000         mov dword ptr fs:[0], eax
// 008527a7  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 008527ab  33ff                 xor edi, edi
// 008527ad  33c0                 xor eax, eax
// 008527af  83fe10               cmp esi, 0x10
// 008527b2  0f8719020000         ja 0x8529d1
// 008527b8  7453                 je 0x85280d
// 008527ba  83fe02               cmp esi, 2
// 008527bd  0f876e020000         ja 0x852a31
// 008527c3  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 008527c7  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 008527cb  57                   push edi
// 008527cc  55                   push ebp
// 008527cd  e87ec4ffff           call 0x84ec50
// 008527d2  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008527d6  0101                 add dword ptr [ecx], eax
// 008527d8  8b09                 mov ecx, dword ptr [ecx]
// 008527da  83c408               add esp, 8
// 008527dd  3b4c2454             cmp ecx, dword ptr [esp + 0x54]
// 008527e1  7c05                 jl 0x8527e8
// 008527e3  83cbff               or ebx, 0xffffffff
// 008527e6  eb0a                 jmp 0x8527f2
// 008527e8  8bcf                 mov ecx, edi
// 008527ea  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 008527f0  8bd8                 mov ebx, eax
// 008527f2  81ce00080000         or esi, 0x800
// 008527f8  56                   push esi
// 008527f9  8d442450             lea eax, [esp + 0x50]
// 008527fd  50                   push eax
// 008527fe  57                   push edi
// 008527ff  8bcd                 mov ecx, ebp
// 00852801  e8dab4f5ff           call 0x7adce0
// 00852806  8bc3                 mov eax, ebx
// 00852808  e924020000           jmp 0x852a31
// 0085280d  68fe08a000           push 0xa008fe
// 00852812  8d4c2460             lea ecx, [esp + 0x60]
// 00852816  c744242020090a00     mov dword ptr [esp + 0x20], 0xa0920
// 0085281e  897c241c             mov dword ptr [esp + 0x1c], edi
// 00852822  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00852828  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0085282c  51                   push ecx
// 0085282d  8d4c2418             lea ecx, [esp + 0x18]
// 00852831  897c243c             mov dword ptr [esp + 0x3c], edi
// 00852835  ff15c4ce9e00         call dword ptr [0x9ecec4]
// 0085283b  8d4c2414             lea ecx, [esp + 0x14]
// 0085283f  c644243801           mov byte ptr [esp + 0x38], 1
// 00852844  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0085284a  50                   push eax
// 0085284b  8d4c2418             lea ecx, [esp + 0x18]
// 0085284f  ff15fcc39e00         call dword ptr [0x9ec3fc]
// 00852855  8b1d64a99e00         mov ebx, dword ptr [0x9ea964]
// 0085285b  8d542418             lea edx, [esp + 0x18]
// 0085285f  52                   push edx
// 00852860  8d4c2420             lea ecx, [esp + 0x20]
// 00852864  51                   push ecx
// 00852865  50                   push eax
// 00852866  ffd3                 call ebx
// 00852868  83c40c               add esp, 0xc
// 0085286b  8bf0                 mov esi, eax
// 0085286d  56                   push esi
// 0085286e  8d4c2424             lea ecx, [esp + 0x24]
// 00852872  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00852878  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 0085287c  50                   push eax
// 0085287d  55                   push ebp
// 0085287e  c644244002           mov byte ptr [esp + 0x40], 2
// 00852883  e8c8c3ffff           call 0x84ec50
// 00852888  83c408               add esp, 8
// 0085288b  8d4c2420             lea ecx, [esp + 0x20]
// 0085288f  8bf8                 mov edi, eax
// 00852891  c644243801           mov byte ptr [esp + 0x38], 1
// 00852896  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0085289c  8b442454             mov eax, dword ptr [esp + 0x54]
// 008528a0  8bd0                 mov edx, eax
// 008528a2  2b54244c             sub edx, dword ptr [esp + 0x4c]
// 008528a6  3bfa                 cmp edi, edx
// 008528a8  7e10                 jle 0x8528ba
// 008528aa  56                   push esi
// 008528ab  8d4c2460             lea ecx, [esp + 0x60]
// 008528af  ff158cce9e00         call dword ptr [0x9ece8c]
// 008528b5  e9b3000000           jmp 0x85296d
// 008528ba  85f6                 test esi, esi
// 008528bc  0f84ab000000         je 0x85296d
// 008528c2  eb04                 jmp 0x8528c8
// 008528c4  8b442454             mov eax, dword ptr [esp + 0x54]
// 008528c8  2b44244c             sub eax, dword ptr [esp + 0x4c]
// 008528cc  3bf8                 cmp edi, eax
// 008528ce  0f8d99000000         jge 0x85296d
// 008528d4  56                   push esi
// 008528d5  8d442460             lea eax, [esp + 0x60]
// 008528d9  50                   push eax
// 008528da  8d4c2430             lea ecx, [esp + 0x30]
// 008528de  51                   push ecx
// 008528df  e82caabbff           call 0x40d310
// 008528e4  68e86ea000           push 0xa06ee8
// 008528e9  50                   push eax
// 008528ea  8d542438             lea edx, [esp + 0x38]
// 008528ee  52                   push edx
// 008528ef  c644245003           mov byte ptr [esp + 0x50], 3
// 008528f4  e817aabbff           call 0x40d310
// 008528f9  83c418               add esp, 0x18
// 008528fc  50                   push eax
// 008528fd  8d4c2460             lea ecx, [esp + 0x60]
// 00852901  c644243c04           mov byte ptr [esp + 0x3c], 4
// 00852906  ff1580c59e00         call dword ptr [0x9ec580]
// 0085290c  8d4c2424             lea ecx, [esp + 0x24]
// 00852910  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00852916  8d4c2428             lea ecx, [esp + 0x28]
// 0085291a  c644243801           mov byte ptr [esp + 0x38], 1
// 0085291f  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00852925  8d442418             lea eax, [esp + 0x18]
// 00852929  50                   push eax
// 0085292a  8d4c2420             lea ecx, [esp + 0x20]
// 0085292e  51                   push ecx
// 0085292f  6a00                 push 0
// 00852931  ffd3                 call ebx
// 00852933  8bf0                 mov esi, eax
// 00852935  56                   push esi
// 00852936  8d54246c             lea edx, [esp + 0x6c]
// 0085293a  52                   push edx
// 0085293b  8d442440             lea eax, [esp + 0x40]
// 0085293f  50                   push eax
// 00852940  e8cba9bbff           call 0x40d310
// 00852945  50                   push eax
// 00852946  55                   push ebp
// 00852947  c644245805           mov byte ptr [esp + 0x58], 5
// 0085294c  e8ffc2ffff           call 0x84ec50
// 00852951  83c420               add esp, 0x20
// 00852954  8d4c242c             lea ecx, [esp + 0x2c]
// 00852958  8bf8                 mov edi, eax
// 0085295a  c644243801           mov byte ptr [esp + 0x38], 1
// 0085295f  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00852965  85f6                 test esi, esi
// 00852967  0f8557ffffff         jne 0x8528c4
// 0085296d  8d4c245c             lea ecx, [esp + 0x5c]
// 00852971  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00852977  8d4c245c             lea ecx, [esp + 0x5c]
// 0085297b  51                   push ecx
// 0085297c  55                   push ebp
// 0085297d  8bf8                 mov edi, eax
// 0085297f  e8ccc2ffff           call 0x84ec50
// 00852984  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00852988  0101                 add dword ptr [ecx], eax
// 0085298a  8b7500               mov esi, dword ptr [ebp]
// 0085298d  83c408               add esp, 8
// 00852990  6800080000           push 0x800
// 00852995  8d542450             lea edx, [esp + 0x50]
// 00852999  52                   push edx
// 0085299a  8d4c2464             lea ecx, [esp + 0x64]
// 0085299e  83c670               add esi, 0x70
// 008529a1  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 008529a7  50                   push eax
// 008529a8  8d4c2468             lea ecx, [esp + 0x68]
// 008529ac  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 008529b2  50                   push eax
// 008529b3  8b06                 mov eax, dword ptr [esi]
// 008529b5  8bcd                 mov ecx, ebp
// 008529b7  ffd0                 call eax
// 008529b9  8d4c2414             lea ecx, [esp + 0x14]
// 008529bd  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 008529c3  8d4c245c             lea ecx, [esp + 0x5c]
// 008529c7  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 008529cd  8bc7                 mov eax, edi
// 008529cf  eb60                 jmp 0x852a31
// 008529d1  81fe00800000         cmp esi, 0x8000
// 008529d7  7558                 jne 0x852a31
// 008529d9  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 008529dd  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 008529e1  57                   push edi
// 008529e2  53                   push ebx
// 008529e3  e868c2ffff           call 0x84ec50
// 008529e8  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008529ec  0101                 add dword ptr [ecx], eax
// 008529ee  8b09                 mov ecx, dword ptr [ecx]
// 008529f0  83c408               add esp, 8
// 008529f3  3b4c2454             cmp ecx, dword ptr [esp + 0x54]
// 008529f7  7c05                 jl 0x8529fe
// 008529f9  83cdff               or ebp, 0xffffffff
// 008529fc  eb0a                 jmp 0x852a08
// 008529fe  8bcf                 mov ecx, edi
// 00852a00  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00852a06  8be8                 mov ebp, eax
// 00852a08  8b33                 mov esi, dword ptr [ebx]
// 00852a0a  6800880000           push 0x8800
// 00852a0f  8d4c2450             lea ecx, [esp + 0x50]
// 00852a13  51                   push ecx
// 00852a14  8bcf                 mov ecx, edi
// 00852a16  83c670               add esi, 0x70
// 00852a19  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00852a1f  50                   push eax
// 00852a20  8bcf                 mov ecx, edi
// 00852a22  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00852a28  8b16                 mov edx, dword ptr [esi]
// 00852a2a  50                   push eax
// 00852a2b  8bcb                 mov ecx, ebx
// 00852a2d  ffd2                 call edx
// 00852a2f  8bc5                 mov eax, ebp
// 00852a31  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00852a35  64890d00000000       mov dword ptr fs:[0], ecx
// 00852a3c  59                   pop ecx
// 00852a3d  5f                   pop edi
// 00852a3e  5e                   pop esi
// 00852a3f  5d                   pop ebp
// 00852a40  5b                   pop ebx
// 00852a41  83c428               add esp, 0x28
// 00852a44  c22000               ret 0x20
// copied from an identical function in another client (function ?DrawString@CXTPReportPaintManager@@MAEHPAHPAVCDC@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@VCRect@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp