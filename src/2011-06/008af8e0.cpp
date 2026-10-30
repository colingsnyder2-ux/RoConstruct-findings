// roc 2011-06 008af8e0  unit: CXTPReportPaintManager  size: 711 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008af8e0
//
// 008af8e0  6aff                 push -1
// 008af8e2  6896afa000           push 0xa0af96
// 008af8e7  64a100000000         mov eax, dword ptr fs:[0]
// 008af8ed  50                   push eax
// 008af8ee  83ec1c               sub esp, 0x1c
// 008af8f1  53                   push ebx
// 008af8f2  55                   push ebp
// 008af8f3  56                   push esi
// 008af8f4  57                   push edi
// 008af8f5  a12058c900           mov eax, dword ptr [0xc95820]
// 008af8fa  33c4                 xor eax, esp
// 008af8fc  50                   push eax
// 008af8fd  8d442430             lea eax, [esp + 0x30]
// 008af901  64a300000000         mov dword ptr fs:[0], eax
// 008af907  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 008af90b  33ff                 xor edi, edi
// 008af90d  33c0                 xor eax, eax
// 008af90f  83fe10               cmp esi, 0x10
// 008af912  0f8719020000         ja 0x8afb31
// 008af918  7453                 je 0x8af96d
// 008af91a  83fe02               cmp esi, 2
// 008af91d  0f876e020000         ja 0x8afb91
// 008af923  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 008af927  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 008af92b  57                   push edi
// 008af92c  55                   push ebp
// 008af92d  e87ec4ffff           call 0x8abdb0
// 008af932  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008af936  0101                 add dword ptr [ecx], eax
// 008af938  8b09                 mov ecx, dword ptr [ecx]
// 008af93a  83c408               add esp, 8
// 008af93d  3b4c2454             cmp ecx, dword ptr [esp + 0x54]
// 008af941  7c05                 jl 0x8af948
// 008af943  83cbff               or ebx, 0xffffffff
// 008af946  eb0a                 jmp 0x8af952
// 008af948  8bcf                 mov ecx, edi
// 008af94a  ff15a826a400         call dword ptr [0xa426a8]
// 008af950  8bd8                 mov ebx, eax
// 008af952  81ce00080000         or esi, 0x800
// 008af958  56                   push esi
// 008af959  8d442450             lea eax, [esp + 0x50]
// 008af95d  50                   push eax
// 008af95e  57                   push edi
// 008af95f  8bcd                 mov ecx, ebp
// 008af961  e88a07f6ff           call 0x8100f0
// 008af966  8bc3                 mov eax, ebx
// 008af968  e924020000           jmp 0x8afb91
// 008af96d  68cabea500           push 0xa5beca
// 008af972  8d4c2460             lea ecx, [esp + 0x60]
// 008af976  c744242020090a00     mov dword ptr [esp + 0x20], 0xa0920
// 008af97e  897c241c             mov dword ptr [esp + 0x1c], edi
// 008af982  ff15002ea400         call dword ptr [0xa42e00]
// 008af988  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008af98c  51                   push ecx
// 008af98d  8d4c2418             lea ecx, [esp + 0x18]
// 008af991  897c243c             mov dword ptr [esp + 0x3c], edi
// 008af995  ff15e42da400         call dword ptr [0xa42de4]
// 008af99b  8d4c2414             lea ecx, [esp + 0x14]
// 008af99f  c644243801           mov byte ptr [esp + 0x38], 1
// 008af9a4  ff15a826a400         call dword ptr [0xa426a8]
// 008af9aa  50                   push eax
// 008af9ab  8d4c2418             lea ecx, [esp + 0x18]
// 008af9af  ff15e023a400         call dword ptr [0xa423e0]
// 008af9b5  8b1d6c07a400         mov ebx, dword ptr [0xa4076c]
// 008af9bb  8d542418             lea edx, [esp + 0x18]
// 008af9bf  52                   push edx
// 008af9c0  8d4c2420             lea ecx, [esp + 0x20]
// 008af9c4  51                   push ecx
// 008af9c5  50                   push eax
// 008af9c6  ffd3                 call ebx
// 008af9c8  83c40c               add esp, 0xc
// 008af9cb  8bf0                 mov esi, eax
// 008af9cd  56                   push esi
// 008af9ce  8d4c2424             lea ecx, [esp + 0x24]
// 008af9d2  ff15002ea400         call dword ptr [0xa42e00]
// 008af9d8  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 008af9dc  50                   push eax
// 008af9dd  55                   push ebp
// 008af9de  c644244002           mov byte ptr [esp + 0x40], 2
// 008af9e3  e8c8c3ffff           call 0x8abdb0
// 008af9e8  83c408               add esp, 8
// 008af9eb  8d4c2420             lea ecx, [esp + 0x20]
// 008af9ef  8bf8                 mov edi, eax
// 008af9f1  c644243801           mov byte ptr [esp + 0x38], 1
// 008af9f6  ff15082ea400         call dword ptr [0xa42e08]
// 008af9fc  8b442454             mov eax, dword ptr [esp + 0x54]
// 008afa00  8bd0                 mov edx, eax
// 008afa02  2b54244c             sub edx, dword ptr [esp + 0x4c]
// 008afa06  3bfa                 cmp edi, edx
// 008afa08  7e10                 jle 0x8afa1a
// 008afa0a  56                   push esi
// 008afa0b  8d4c2460             lea ecx, [esp + 0x60]
// 008afa0f  ff15a42da400         call dword ptr [0xa42da4]
// 008afa15  e9b3000000           jmp 0x8afacd
// 008afa1a  85f6                 test esi, esi
// 008afa1c  0f84ab000000         je 0x8afacd
// 008afa22  eb04                 jmp 0x8afa28
// 008afa24  8b442454             mov eax, dword ptr [esp + 0x54]
// 008afa28  2b44244c             sub eax, dword ptr [esp + 0x4c]
// 008afa2c  3bf8                 cmp edi, eax
// 008afa2e  0f8d99000000         jge 0x8afacd
// 008afa34  56                   push esi
// 008afa35  8d442460             lea eax, [esp + 0x60]
// 008afa39  50                   push eax
// 008afa3a  8d4c2430             lea ecx, [esp + 0x30]
// 008afa3e  51                   push ecx
// 008afa3f  e8ac2eb6ff           call 0x4128f0
// 008afa44  686056a600           push 0xa65660
// 008afa49  50                   push eax
// 008afa4a  8d542438             lea edx, [esp + 0x38]
// 008afa4e  52                   push edx
// 008afa4f  c644245003           mov byte ptr [esp + 0x50], 3
// 008afa54  e8972eb6ff           call 0x4128f0
// 008afa59  83c418               add esp, 0x18
// 008afa5c  50                   push eax
// 008afa5d  8d4c2460             lea ecx, [esp + 0x60]
// 008afa61  c644243c04           mov byte ptr [esp + 0x3c], 4
// 008afa66  ff156425a400         call dword ptr [0xa42564]
// 008afa6c  8d4c2424             lea ecx, [esp + 0x24]
// 008afa70  ff15082ea400         call dword ptr [0xa42e08]
// 008afa76  8d4c2428             lea ecx, [esp + 0x28]
// 008afa7a  c644243801           mov byte ptr [esp + 0x38], 1
// 008afa7f  ff15082ea400         call dword ptr [0xa42e08]
// 008afa85  8d442418             lea eax, [esp + 0x18]
// 008afa89  50                   push eax
// 008afa8a  8d4c2420             lea ecx, [esp + 0x20]
// 008afa8e  51                   push ecx
// 008afa8f  6a00                 push 0
// 008afa91  ffd3                 call ebx
// 008afa93  8bf0                 mov esi, eax
// 008afa95  56                   push esi
// 008afa96  8d54246c             lea edx, [esp + 0x6c]
// 008afa9a  52                   push edx
// 008afa9b  8d442440             lea eax, [esp + 0x40]
// 008afa9f  50                   push eax
// 008afaa0  e84b2eb6ff           call 0x4128f0
// 008afaa5  50                   push eax
// 008afaa6  55                   push ebp
// 008afaa7  c644245805           mov byte ptr [esp + 0x58], 5
// 008afaac  e8ffc2ffff           call 0x8abdb0
// 008afab1  83c420               add esp, 0x20
// 008afab4  8d4c242c             lea ecx, [esp + 0x2c]
// 008afab8  8bf8                 mov edi, eax
// 008afaba  c644243801           mov byte ptr [esp + 0x38], 1
// 008afabf  ff15082ea400         call dword ptr [0xa42e08]
// 008afac5  85f6                 test esi, esi
// 008afac7  0f8557ffffff         jne 0x8afa24
// 008afacd  8d4c245c             lea ecx, [esp + 0x5c]
// 008afad1  ff15a826a400         call dword ptr [0xa426a8]
// 008afad7  8d4c245c             lea ecx, [esp + 0x5c]
// 008afadb  51                   push ecx
// 008afadc  55                   push ebp
// 008afadd  8bf8                 mov edi, eax
// 008afadf  e8ccc2ffff           call 0x8abdb0
// 008afae4  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008afae8  0101                 add dword ptr [ecx], eax
// 008afaea  8b7500               mov esi, dword ptr [ebp]
// 008afaed  83c408               add esp, 8
// 008afaf0  6800080000           push 0x800
// 008afaf5  8d542450             lea edx, [esp + 0x50]
// 008afaf9  52                   push edx
// 008afafa  8d4c2464             lea ecx, [esp + 0x64]
// 008afafe  83c670               add esi, 0x70
// 008afb01  ff15a826a400         call dword ptr [0xa426a8]
// 008afb07  50                   push eax
// 008afb08  8d4c2468             lea ecx, [esp + 0x68]
// 008afb0c  ff15c82da400         call dword ptr [0xa42dc8]
// 008afb12  50                   push eax
// 008afb13  8b06                 mov eax, dword ptr [esi]
// 008afb15  8bcd                 mov ecx, ebp
// 008afb17  ffd0                 call eax
// 008afb19  8d4c2414             lea ecx, [esp + 0x14]
// 008afb1d  ff15082ea400         call dword ptr [0xa42e08]
// 008afb23  8d4c245c             lea ecx, [esp + 0x5c]
// 008afb27  ff15082ea400         call dword ptr [0xa42e08]
// 008afb2d  8bc7                 mov eax, edi
// 008afb2f  eb60                 jmp 0x8afb91
// 008afb31  81fe00800000         cmp esi, 0x8000
// 008afb37  7558                 jne 0x8afb91
// 008afb39  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 008afb3d  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 008afb41  57                   push edi
// 008afb42  53                   push ebx
// 008afb43  e868c2ffff           call 0x8abdb0
// 008afb48  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008afb4c  0101                 add dword ptr [ecx], eax
// 008afb4e  8b09                 mov ecx, dword ptr [ecx]
// 008afb50  83c408               add esp, 8
// 008afb53  3b4c2454             cmp ecx, dword ptr [esp + 0x54]
// 008afb57  7c05                 jl 0x8afb5e
// 008afb59  83cdff               or ebp, 0xffffffff
// 008afb5c  eb0a                 jmp 0x8afb68
// 008afb5e  8bcf                 mov ecx, edi
// 008afb60  ff15a826a400         call dword ptr [0xa426a8]
// 008afb66  8be8                 mov ebp, eax
// 008afb68  8b33                 mov esi, dword ptr [ebx]
// 008afb6a  6800880000           push 0x8800
// 008afb6f  8d4c2450             lea ecx, [esp + 0x50]
// 008afb73  51                   push ecx
// 008afb74  8bcf                 mov ecx, edi
// 008afb76  83c670               add esi, 0x70
// 008afb79  ff15a826a400         call dword ptr [0xa426a8]
// 008afb7f  50                   push eax
// 008afb80  8bcf                 mov ecx, edi
// 008afb82  ff15c82da400         call dword ptr [0xa42dc8]
// 008afb88  8b16                 mov edx, dword ptr [esi]
// 008afb8a  50                   push eax
// 008afb8b  8bcb                 mov ecx, ebx
// 008afb8d  ffd2                 call edx
// 008afb8f  8bc5                 mov eax, ebp
// 008afb91  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008afb95  64890d00000000       mov dword ptr fs:[0], ecx
// 008afb9c  59                   pop ecx
// 008afb9d  5f                   pop edi
// 008afb9e  5e                   pop esi
// 008afb9f  5d                   pop ebp
// 008afba0  5b                   pop ebx
// 008afba1  83c428               add esp, 0x28
// 008afba4  c22000               ret 0x20
// copied from an identical function in another client (function ?DrawString@CXTPReportPaintManager@@MAEHPAHPAVCDC@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@VCRect@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp