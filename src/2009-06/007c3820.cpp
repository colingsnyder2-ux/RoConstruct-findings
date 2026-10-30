// roc 2009-06 007c3820  unit: CXTPReportPaintManager  size: 711 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c3820
//
// 007c3820  6aff                 push -1
// 007c3822  68a6dc8700           push 0x87dca6
// 007c3827  64a100000000         mov eax, dword ptr fs:[0]
// 007c382d  50                   push eax
// 007c382e  83ec1c               sub esp, 0x1c
// 007c3831  53                   push ebx
// 007c3832  55                   push ebp
// 007c3833  56                   push esi
// 007c3834  57                   push edi
// 007c3835  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007c383a  33c4                 xor eax, esp
// 007c383c  50                   push eax
// 007c383d  8d442430             lea eax, [esp + 0x30]
// 007c3841  64a300000000         mov dword ptr fs:[0], eax
// 007c3847  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 007c384b  33ff                 xor edi, edi
// 007c384d  33c0                 xor eax, eax
// 007c384f  83fe10               cmp esi, 0x10
// 007c3852  0f8719020000         ja 0x7c3a71
// 007c3858  7453                 je 0x7c38ad
// 007c385a  83fe02               cmp esi, 2
// 007c385d  0f876e020000         ja 0x7c3ad1
// 007c3863  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 007c3867  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 007c386b  57                   push edi
// 007c386c  55                   push ebp
// 007c386d  e87ec4ffff           call 0x7bfcf0
// 007c3872  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007c3876  0101                 add dword ptr [ecx], eax
// 007c3878  8b09                 mov ecx, dword ptr [ecx]
// 007c387a  83c408               add esp, 8
// 007c387d  3b4c2454             cmp ecx, dword ptr [esp + 0x54]
// 007c3881  7c05                 jl 0x7c3888
// 007c3883  83cbff               or ebx, 0xffffffff
// 007c3886  eb0a                 jmp 0x7c3892
// 007c3888  8bcf                 mov ecx, edi
// 007c388a  ff1554fb8900         call dword ptr [0x89fb54]
// 007c3890  8bd8                 mov ebx, eax
// 007c3892  81ce00080000         or esi, 0x800
// 007c3898  56                   push esi
// 007c3899  8d442450             lea eax, [esp + 0x50]
// 007c389d  50                   push eax
// 007c389e  57                   push edi
// 007c389f  8bcd                 mov ecx, ebp
// 007c38a1  e8ea80f5ff           call 0x71b990
// 007c38a6  8bc3                 mov eax, ebx
// 007c38a8  e924020000           jmp 0x7c3ad1
// 007c38ad  6816d28a00           push 0x8ad216
// 007c38b2  8d4c2460             lea ecx, [esp + 0x60]
// 007c38b6  c744242020090a00     mov dword ptr [esp + 0x20], 0xa0920
// 007c38be  897c241c             mov dword ptr [esp + 0x1c], edi
// 007c38c2  ff1508fd8900         call dword ptr [0x89fd08]
// 007c38c8  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007c38cc  51                   push ecx
// 007c38cd  8d4c2418             lea ecx, [esp + 0x18]
// 007c38d1  897c243c             mov dword ptr [esp + 0x3c], edi
// 007c38d5  ff15e4fc8900         call dword ptr [0x89fce4]
// 007c38db  8d4c2414             lea ecx, [esp + 0x14]
// 007c38df  c644243801           mov byte ptr [esp + 0x38], 1
// 007c38e4  ff1554fb8900         call dword ptr [0x89fb54]
// 007c38ea  50                   push eax
// 007c38eb  8d4c2418             lea ecx, [esp + 0x18]
// 007c38ef  ff1508f18900         call dword ptr [0x89f108]
// 007c38f5  8b1dd0e68900         mov ebx, dword ptr [0x89e6d0]
// 007c38fb  8d542418             lea edx, [esp + 0x18]
// 007c38ff  52                   push edx
// 007c3900  8d4c2420             lea ecx, [esp + 0x20]
// 007c3904  51                   push ecx
// 007c3905  50                   push eax
// 007c3906  ffd3                 call ebx
// 007c3908  83c40c               add esp, 0xc
// 007c390b  8bf0                 mov esi, eax
// 007c390d  56                   push esi
// 007c390e  8d4c2424             lea ecx, [esp + 0x24]
// 007c3912  ff1508fd8900         call dword ptr [0x89fd08]
// 007c3918  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 007c391c  50                   push eax
// 007c391d  55                   push ebp
// 007c391e  c644244002           mov byte ptr [esp + 0x40], 2
// 007c3923  e8c8c3ffff           call 0x7bfcf0
// 007c3928  83c408               add esp, 8
// 007c392b  8d4c2420             lea ecx, [esp + 0x20]
// 007c392f  8bf8                 mov edi, eax
// 007c3931  c644243801           mov byte ptr [esp + 0x38], 1
// 007c3936  ff1510fd8900         call dword ptr [0x89fd10]
// 007c393c  8b442454             mov eax, dword ptr [esp + 0x54]
// 007c3940  8bd0                 mov edx, eax
// 007c3942  2b54244c             sub edx, dword ptr [esp + 0x4c]
// 007c3946  3bfa                 cmp edi, edx
// 007c3948  7e10                 jle 0x7c395a
// 007c394a  56                   push esi
// 007c394b  8d4c2460             lea ecx, [esp + 0x60]
// 007c394f  ff15acfc8900         call dword ptr [0x89fcac]
// 007c3955  e9b3000000           jmp 0x7c3a0d
// 007c395a  85f6                 test esi, esi
// 007c395c  0f84ab000000         je 0x7c3a0d
// 007c3962  eb04                 jmp 0x7c3968
// 007c3964  8b442454             mov eax, dword ptr [esp + 0x54]
// 007c3968  2b44244c             sub eax, dword ptr [esp + 0x4c]
// 007c396c  3bf8                 cmp edi, eax
// 007c396e  0f8d99000000         jge 0x7c3a0d
// 007c3974  56                   push esi
// 007c3975  8d442460             lea eax, [esp + 0x60]
// 007c3979  50                   push eax
// 007c397a  8d4c2430             lea ecx, [esp + 0x30]
// 007c397e  51                   push ecx
// 007c397f  e89c94c4ff           call 0x40ce20
// 007c3984  68f8338b00           push 0x8b33f8
// 007c3989  50                   push eax
// 007c398a  8d542438             lea edx, [esp + 0x38]
// 007c398e  52                   push edx
// 007c398f  c644245003           mov byte ptr [esp + 0x50], 3
// 007c3994  e88794c4ff           call 0x40ce20
// 007c3999  83c418               add esp, 0x18
// 007c399c  50                   push eax
// 007c399d  8d4c2460             lea ecx, [esp + 0x60]
// 007c39a1  c644243c04           mov byte ptr [esp + 0x3c], 4
// 007c39a6  ff1508fa8900         call dword ptr [0x89fa08]
// 007c39ac  8d4c2424             lea ecx, [esp + 0x24]
// 007c39b0  ff1510fd8900         call dword ptr [0x89fd10]
// 007c39b6  8d4c2428             lea ecx, [esp + 0x28]
// 007c39ba  c644243801           mov byte ptr [esp + 0x38], 1
// 007c39bf  ff1510fd8900         call dword ptr [0x89fd10]
// 007c39c5  8d442418             lea eax, [esp + 0x18]
// 007c39c9  50                   push eax
// 007c39ca  8d4c2420             lea ecx, [esp + 0x20]
// 007c39ce  51                   push ecx
// 007c39cf  6a00                 push 0
// 007c39d1  ffd3                 call ebx
// 007c39d3  8bf0                 mov esi, eax
// 007c39d5  56                   push esi
// 007c39d6  8d54246c             lea edx, [esp + 0x6c]
// 007c39da  52                   push edx
// 007c39db  8d442440             lea eax, [esp + 0x40]
// 007c39df  50                   push eax
// 007c39e0  e83b94c4ff           call 0x40ce20
// 007c39e5  50                   push eax
// 007c39e6  55                   push ebp
// 007c39e7  c644245805           mov byte ptr [esp + 0x58], 5
// 007c39ec  e8ffc2ffff           call 0x7bfcf0
// 007c39f1  83c420               add esp, 0x20
// 007c39f4  8d4c242c             lea ecx, [esp + 0x2c]
// 007c39f8  8bf8                 mov edi, eax
// 007c39fa  c644243801           mov byte ptr [esp + 0x38], 1
// 007c39ff  ff1510fd8900         call dword ptr [0x89fd10]
// 007c3a05  85f6                 test esi, esi
// 007c3a07  0f8557ffffff         jne 0x7c3964
// 007c3a0d  8d4c245c             lea ecx, [esp + 0x5c]
// 007c3a11  ff1554fb8900         call dword ptr [0x89fb54]
// 007c3a17  8d4c245c             lea ecx, [esp + 0x5c]
// 007c3a1b  51                   push ecx
// 007c3a1c  55                   push ebp
// 007c3a1d  8bf8                 mov edi, eax
// 007c3a1f  e8ccc2ffff           call 0x7bfcf0
// 007c3a24  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007c3a28  0101                 add dword ptr [ecx], eax
// 007c3a2a  8b7500               mov esi, dword ptr [ebp]
// 007c3a2d  83c408               add esp, 8
// 007c3a30  6800080000           push 0x800
// 007c3a35  8d542450             lea edx, [esp + 0x50]
// 007c3a39  52                   push edx
// 007c3a3a  8d4c2464             lea ecx, [esp + 0x64]
// 007c3a3e  83c670               add esi, 0x70
// 007c3a41  ff1554fb8900         call dword ptr [0x89fb54]
// 007c3a47  50                   push eax
// 007c3a48  8d4c2468             lea ecx, [esp + 0x68]
// 007c3a4c  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007c3a52  50                   push eax
// 007c3a53  8b06                 mov eax, dword ptr [esi]
// 007c3a55  8bcd                 mov ecx, ebp
// 007c3a57  ffd0                 call eax
// 007c3a59  8d4c2414             lea ecx, [esp + 0x14]
// 007c3a5d  ff1510fd8900         call dword ptr [0x89fd10]
// 007c3a63  8d4c245c             lea ecx, [esp + 0x5c]
// 007c3a67  ff1510fd8900         call dword ptr [0x89fd10]
// 007c3a6d  8bc7                 mov eax, edi
// 007c3a6f  eb60                 jmp 0x7c3ad1
// 007c3a71  81fe00800000         cmp esi, 0x8000
// 007c3a77  7558                 jne 0x7c3ad1
// 007c3a79  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 007c3a7d  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 007c3a81  57                   push edi
// 007c3a82  53                   push ebx
// 007c3a83  e868c2ffff           call 0x7bfcf0
// 007c3a88  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007c3a8c  0101                 add dword ptr [ecx], eax
// 007c3a8e  8b09                 mov ecx, dword ptr [ecx]
// 007c3a90  83c408               add esp, 8
// 007c3a93  3b4c2454             cmp ecx, dword ptr [esp + 0x54]
// 007c3a97  7c05                 jl 0x7c3a9e
// 007c3a99  83cdff               or ebp, 0xffffffff
// 007c3a9c  eb0a                 jmp 0x7c3aa8
// 007c3a9e  8bcf                 mov ecx, edi
// 007c3aa0  ff1554fb8900         call dword ptr [0x89fb54]
// 007c3aa6  8be8                 mov ebp, eax
// 007c3aa8  8b33                 mov esi, dword ptr [ebx]
// 007c3aaa  6800880000           push 0x8800
// 007c3aaf  8d4c2450             lea ecx, [esp + 0x50]
// 007c3ab3  51                   push ecx
// 007c3ab4  8bcf                 mov ecx, edi
// 007c3ab6  83c670               add esi, 0x70
// 007c3ab9  ff1554fb8900         call dword ptr [0x89fb54]
// 007c3abf  50                   push eax
// 007c3ac0  8bcf                 mov ecx, edi
// 007c3ac2  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007c3ac8  8b16                 mov edx, dword ptr [esi]
// 007c3aca  50                   push eax
// 007c3acb  8bcb                 mov ecx, ebx
// 007c3acd  ffd2                 call edx
// 007c3acf  8bc5                 mov eax, ebp
// 007c3ad1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007c3ad5  64890d00000000       mov dword ptr fs:[0], ecx
// 007c3adc  59                   pop ecx
// 007c3add  5f                   pop edi
// 007c3ade  5e                   pop esi
// 007c3adf  5d                   pop ebp
// 007c3ae0  5b                   pop ebx
// 007c3ae1  83c428               add esp, 0x28
// 007c3ae4  c22000               ret 0x20
// copied from an identical function in another client (function ?DrawString@CXTPReportPaintManager@@MAEHPAHPAVCDC@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@VCRect@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportPaintManager.cpp